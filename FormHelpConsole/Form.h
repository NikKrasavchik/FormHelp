#pragma once

#include <string>
#include <vector>
#include <map>

#include "Var.h"

#include <iostream>


class Form
{
private:
	pair<int, int> _index;
	string _formula;
	vector<Var> _Vars;
	vector<int> _varInd;
	vector<string> _opNameInd;
	vector<int> _opInd;
	string _description;
	string _tagClass;
	vector<string> _tagLocation;
	bool _origin;


public:
	Form(pair<int, int> ind_, string formula_, vector<string> varNameInd_, vector<int> varInd_, vector<string> opNameInd_, vector<int> opInd_, string description_, string tagClass_, vector<string> tagLocation_, bool origin_, map<string, Var>& dbVars);

	Var getVariable(int varInd, map<string, Var>& dbVars);
	Var getMainVariable(map<string, Var>& dbVars);

	pair<int, int> getIndex();
	
	bool varInForm(Var variable);

	int countVariables();

	string getFormula();

	friend bool operator== (const Form& form1, const Form& form2);
};