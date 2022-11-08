#pragma once

#include <string>
#include <vector>
#include <variant>

#include "Var.h"


class Form
{
private:
	pair<int, int> _ind;
	vector<variant<Var, string>> _values;
	string _formula;
	string _main_variable;
	vector<string> _variables;
	string _tag_class;
	vector<string> _tag_location;
	string _description;


public:
	Form(pair<int, int> ind_, vector<string> variables_, string description_, string tag_class_, vector<string> tag_location_);
	void setValues(vector<variant<Var, string>> values_) { this->_values = values_; }
	
	string getFormDescription() { return this->_description; }
	string getClassTag() { return this->_tag_class; }
	void getLocationTag(vector<string>* tag_);
	string getFormula() { return (this->_main_variable + "=" + this->_formula); }
	int getNumberOfVariables() { return int(this->_variables.size()); }
	vector<string> getVariables() { return _variables; }

	bool varInForm(string var_);
};