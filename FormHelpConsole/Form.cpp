#pragma once

#include "Form.h"

Form::Form(pair<int, int> ind_, string formula_, vector<string> varNameInd_, vector<int> varInd_, vector<string> opNameInd_, vector<int> opInd_, string description_, string tagClass_, vector<string> tagLocation_, bool origin_, map<string, Var>& dbVars)
{
	this->_index = ind_;
	this->_formula = formula_;
	this->_varInd = varInd_;
	for (int i = 0; i < varNameInd_.size(); i++)
	{
		string variableNameInd = varNameInd_[i];
		auto it = dbVars.find(variableNameInd);
		this->_Vars.push_back(it->second);
	}
	this->_opNameInd = opNameInd_;
	this->_opInd = opInd_;
	this->_description = description_;
	this->_tagClass = tagClass_;
	this->_tagLocation = tagLocation_;
	this->_origin = origin_;
}

Var Form::getVariable(int varInd, map<string, Var>& dbVars)
{
	return this->_Vars[varInd];
}

Var Form::getMainVariable(map<string, Var>& dbVars)
{
	return this->_Vars[0];
}

pair<int, int> Form::getIndex()
{
	return this->_index;
}

bool Form::varInForm(Var variable)
{
	for (int i = 0; i < this->_Vars.size(); i++)
		if (variable == this->_Vars[i])
			return true;
	return false;
}

int Form::countVariables()
{
	return this->_Vars.size();
}

string Form::getFormula()
{
	return this->_formula;
}

bool operator==(const Form& form1, const Form& form2)
{
	if (form1._index == form2._index)
		return true;
	return false;
}

// Вопросы по добавлению первой переменной в формулу
// Оптимизировать конструктор путём неиспользования map