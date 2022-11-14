#pragma once

#include <typeinfo>

#include "Form.h"

Form::Form(pair<int, int> ind_, string formula_, pair<Var, vector<Var>> variables_, string description_, string tag_class_, vector<string> tag_location_)
{
	this->_ind = ind_;
	this->_main_variable = variables_.first;
	this->_formula = formula_;
	this->_description = description_;
	this->_variables = variables_.second;

	/*for (int i = 0; i < variables_.second.size(); i++)
		this->_variables.push_back(variables_.second[i]);*/

	this->_tag_class = tag_class_;

	for (int i = 0; i < int(tag_location_.size()); i++)
		this->_tag_location.push_back(tag_location_[i]);
}

void Form::getLocationTag(vector<string>* tag_)
{
	tag_->clear();
	for (int i = 0; i < int(this->_tag_location.size()); i++)
		tag_->push_back(this->_tag_location[i]);
}


bool Form::varInForm(string var_)
{
	for (int i = 0; i < this->_variables.size(); i++)
		if (this->_variables[i].getVar() == var_)
			return true;
	return false;
}