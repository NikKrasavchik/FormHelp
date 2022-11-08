#include <iostream>
#include <locale>
#include <vector>
#include <map>
#include <variant>

#include "Var.h"
#include "Form.h"
#include "database.h"


using namespace std;

void printFormsWithVars(vector<vector<Form>> allCategories)
{
	if (allCategories.size())
	{
		cout << "Количество формул с нулевым разрядом - " << allCategories[0].size() << ":" << endl;
		if (allCategories[0].size())
			for (int i = 0; i < allCategories[0].size(); i++)
				cout << "\t" << allCategories[0][i].getFormula() << endl;
		else
			cout << "\tНет формул с присутствием всех переменных!" << endl;
		cout << endl;

		cout << "Количество формул с первым разрядом - " << allCategories[1].size() << ":" << endl;
		if (allCategories[1].size())
			for (int i = 0; i < allCategories[1].size(); i++)
				cout << "\t" << allCategories[1][i].getFormula() << endl;
		else
			cout << "\tНет формул с единственной отсутствующей переменной!" << endl;
		cout << endl;

		cout << "Количество формул со вторым разрядом - " << allCategories[2].size() << ":" << endl;
		if (allCategories[2].size())
			for (int i = 0; i < allCategories[2].size(); i++)
				cout << "\t" << allCategories[2][i].getFormula() << endl;
		else
			cout << "\tНет формул с двумя отсутствующими переменными!" << endl;
		cout << endl;

		cout << "Количество формул с третьим разрядом - " << allCategories[3].size() << ":" << endl;
		if (allCategories[3].size())
			for (int i = 0; i < allCategories[3].size(); i++)
				cout << "\t" << allCategories[3][i].getFormula() << endl;
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

bool inVForms(Form f, vector<Form> v)
{
	for (int i = 0; i < v.size(); i++)
		if (v[i].getFormDescription() == f.getFormDescription()) // костыль, избегающий перегрузки оператора сравнения
			return true;
	return false;
}

vector<vector<Form>> findFormsWithVars(map<string, Form> db)
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

	vector <Form> forms;
	for (int i = 0; i < db.size(); i++)
	{
		string sind = "if" + to_string(i);
		map<string, Form> ::iterator it = db.find(sind);
		for (int j = 0; j < vars.size(); j++) // поиск всех формул, в которых присутствуют переменные
		{
			if (it->second.varInForm(vars[j]))
				if (!inVForms(it->second, forms))
					forms.push_back(it->second);
		}
		
	}

	vector <Form> category0, category1, category2, category3;

	for (int i = 0; i < forms.size(); i++) // распределение формул по разрядам
	{
		switch (calcMissVars(forms[i], vars))
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

	vector<vector<Form>> allCategories = { category0, category1, category2, category3 };
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

	//vector<vector<Form>> f = findFormsWithVars(dbForms);
	//printFormsWithVars(f);
}