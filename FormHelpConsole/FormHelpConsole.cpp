#include <iostream>
#include <locale>
#include <vector>
#include <map>

#include "Var.h"
#include "Form.h"
#include "database.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");

	map<string, Var> dbVariables;
	map<string, string> dbOperations;
	map<string, Form> dbForms;
	createVarDB(dbVariables);
	createMathOperationsDB(dbOperations);
	createFormsDB(dbForms);
	auto it = dbForms.find("if0");
	cout << it->second.getFormDescription();
}