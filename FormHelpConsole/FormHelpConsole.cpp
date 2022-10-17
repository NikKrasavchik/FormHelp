#include <iostream>
#include <vector>
#include <map>

#include "Var.h"
#include "Form.h"
#include "database.h"

using namespace std;

void createFormDB(map<string, Form>& f);

int main()
{
	map<string, Var> dbVariables;
	map<string, string> dbOperations;
	map<string, Form> dbForms;
	createVarDB(dbVariables);
	createMathOperationsDB(dbOperations);
	createFormsDB(dbForms);
}