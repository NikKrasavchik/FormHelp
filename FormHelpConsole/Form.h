#pragma once

#include <string>
#include <vector>

#include "Var.h"

struct Value
{
	Var v_;
	string op_;
};

class Form
{
private:
	pair<int, int> _ind;
	vector<Value> _values;
	vector<string> _tag_class;
	vector<string> _tag_location;
	string _description;

public:
	Form(pair<int, int> ind_, vector<string> values_, string description_, vector<string> tag_class_, vector<string> tag_location_);
	//string getVarDescription(Var v_); // ошибка компилятора
	string getFormDescription();
	vector<string> getClassTag();
	void getLocationTag(vector<string>* tag_);
	//void getForm(Form& f); // не факт, что правильно
	//Form& operator=(Form f); // не факт, что правильно
};