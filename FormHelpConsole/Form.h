#pragma once

#include <string>
#include <vector>

#include "Var.h"
/*
struct Value
{
	Var v_;
	string op_;
};
*/
class Form
{
private:
	pair<int, int> _ind;
	//vector<Value> _values;
	string _formula;
	string _main_variable;
	vector<string> _variables;
	vector<string> _tag_class;
	vector<string> _tag_location;
	string _description;

public:
	Form(pair<int, int> ind_, vector<string> values_, string description_, vector<string> tag_class_, vector<string> tag_location_);
	string getFormDescription() { return this->_description; }
	//vector<string> getClassTag() { return this->_tag_class; }
	void getLocationTag(vector<string>* tag_);
	string getFormula() { return (this->_main_variable + "=" + this->_formula); }
	int getNumberOfVariables() { return int(this->_variables.size()); }

	bool varInForm(string var_);
};