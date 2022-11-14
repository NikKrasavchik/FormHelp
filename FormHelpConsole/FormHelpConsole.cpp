#include <iostream>
#include <locale>
#include <vector>
#include <map>
#include <variant>

#include "Var.h"
#include "Form.h"
#include "database.h"


using namespace std;

vector<pair<int, int>> countFormCategory(vector<vector<pair<Form, bool>>> allCategories)
{
	vector<pair<int, int>> counter(4);
	for (int i = 0; i < 4; i++)
	{
		counter[i].first = 0;
		counter[i].second = 0;
		for (int j = 0; j < allCategories[i].size(); j++)
		{
			if (allCategories[i][j].second)
				counter[i].first++;
			else
				counter[i].second++;
		}
	}
	return counter;
}

void printFormsWithVars(vector<vector<pair<Form, bool>>> allCategories)
{
	if (allCategories.size())
	{
		vector<pair<int, int>> allCategoriesSize = countFormCategory(allCategories);

		if (allCategoriesSize[0].first == 0)
			cout << "Количество формул с нулевым разрядом - " << allCategories[0].size() << ":" << endl;
		else
			cout << "Количество формул с нулевым разрядом - " << allCategoriesSize[0].first << " (а также выходящих формул - " << allCategoriesSize[0].second << "):" << endl;
		if (allCategories[0].size())
			for (int i = 0; i < allCategories[0].size(); i++)
			{
				if (allCategories[0][i].second && i)
					cout << endl;
				if (allCategories[0][i].second)
					cout << "\t" << allCategories[0][i].first.getFormula() << endl;
				else
					cout << "\t|__ " << allCategories[0][i].first.getFormula() << endl;
			}
		else
			cout << "\tНет формул с присутствием всех переменных!" << endl;
		cout << endl;

		if (allCategoriesSize[1].first == 0)
			cout << "Количество формул с первым разрядом  - " << allCategories[1].size() << ":" << endl;
		else
			cout << "Количество формул с первым разрядом  - " << allCategoriesSize[1].first << " (а также выходящих формул - " << allCategoriesSize[1].second << "):" << endl;
		if (allCategories[1].size())
			for (int i = 0; i < allCategories[1].size(); i++)
			{
				if (allCategories[1][i].second && i)
					cout << endl;
				if (allCategories[1][i].second)
					cout << "\t" << allCategories[1][i].first.getFormula() << endl;
				else
					cout << "\t|__ " << allCategories[1][i].first.getFormula() << endl;
			}
		else
			cout << "\tНет формул с единственной отсутствующей переменной!" << endl;
		cout << endl;

		if (allCategoriesSize[2].first == 0)
			cout << "Количество формул со вторым разрядом - " << allCategories[2].size() << ":" << endl;
		else
			cout << "Количество формул со вторым разрядом - " << allCategoriesSize[2].first << " (а также выходящих формул - " << allCategoriesSize[2].second << "):" << endl;
		if (allCategories[2].size())
			for (int i = 0; i < allCategories[2].size(); i++)
			{
				if (allCategories[2][i].second && i)
					cout << endl;
				if (allCategories[2][i].second)
					cout << "\t" << allCategories[2][i].first.getFormula() << endl;
				else
					cout << "\t|__ " << allCategories[2][i].first.getFormula() << endl;
			}
		else
			cout << "\tНет формул с двумя отсутствующими переменными!" << endl;
		cout << endl;

		if (allCategoriesSize[3].first == 0)
			cout << "Количество формул с третьим разрядом - " << allCategories[3].size() << ":" << endl;
		else
			cout << "Количество формул с третьим разрядом - " << allCategoriesSize[3].first << " (а также выходящих формул - " << allCategoriesSize[3].second << "):" << endl;
		if (allCategories[3].size())
			for (int i = 0; i < allCategories[3].size(); i++)
			{
				if (allCategories[3][i].second && i)
					cout << endl;
				if (allCategories[3][i].second)
					cout << "\t" << allCategories[3][i].first.getFormula() << endl;
				else
					cout << "\t|__ " << allCategories[3][i].first.getFormula() << endl;
			}
		else
			cout << "\tНет формул с тремя отсутствующими переменными!" << endl;
	}
	else
		cout << "Отсутствуют формулы с минимальным количествам отсутствующих переменных!" << endl;
}

int calcMissVars(Form f, vector<string> v) // вычисление количества недостоющих переменных в формуле
{
	int count = 0;
	for (int i = 0; i < v.size(); i++)
		if (f.varInForm(v[i]))
			count++;
	return f.getNumberOfVariables() - count;
}

bool inVForms(Form f, vector<pair<Form, bool>> v)
{
	for (int i = 0; i < v.size(); i++)
		if (v[i].first.getFormDescription() == f.getFormDescription()) // костыль, избегающий перегрузки оператора сравнения
			return true;
	return false;
}

vector<vector<pair<Form, bool>>> findFormsWithVars(map<string, Form> db)
{
	int n;
	vector<string> vars;
	cout << "Количество переменных: ";
	cin >> n;
	cout << "Введите переменные: ";
	for (int i = 0; i < n; i++)
	{
		string v;
		cin >> v;
		vars.push_back(v);
	}

	vector<pair<Form, bool>> forms;
	for (int i = 0; i < db.size(); i++)
	{
		string sind = "if" + to_string(i);
		auto it = db.find(sind);
		for (int j = 0; j < vars.size(); j++) // поиск всех формул, в которых присутствуют переменные
		{
			if (it->second.varInForm(vars[j]))
				if (!inVForms(it->second, forms))
				{
					bool b;
					if (it->second.getIndex().second == 0)
						b = true;
					else
						b = false;
					pair<Form, bool> f = { it->second, b };
					forms.push_back(f);
				}
		}
		
	}

	vector <pair<Form, bool>> category0, category1, category2, category3;

	for (int i = 0; i < forms.size(); i++) // распределение формул по разрядам
	{
		switch (calcMissVars(forms[i].first, vars))
		{
		case 0:
			category0.push_back(forms[i]);
			break;
		case 1:
			category1.push_back(forms[i]);
			break;
		case 2:
			category2.push_back(forms[i]);
			break;
		case 3:
			category3.push_back(forms[i]);
			break;
		}
	}

	vector<vector<pair<Form, bool>>> allCategories = { category0, category1, category2, category3 };
	return allCategories;
}

int main()
{
	setlocale(LC_ALL, "RU");

	map<string, Var> dbVariables;
	map<string, string> dbOperations;
	map<string, Form> dbForms;
	createVarDB(dbVariables);
	createMathOperationsDB(dbOperations);
	createFormsDB(dbForms, dbVariables, dbOperations);

	//vector<vector<pair<Form, bool>>> f = findFormsWithVars(dbForms);
	//printFormsWithVars(f);
}