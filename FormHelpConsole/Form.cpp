#pragma once

#include "Form.h"

Form::Form(pair<int, int> ind_, vector<string> values_, string description_, vector<string> tag_class_, vector<string> tag_location_)
{
	this->_ind = ind_;
	this->_main_variable = values_[0];
	this->_formula = values_[1];
	for (int i = 2; i < int(values_.size()); i++)
		this->_variables.push_back(values_[i]);
	this->_description = description_;
	for (int i = 0; i < int(tag_class_.size()); i++)
		this->_tag_class.push_back(tag_class_[i]);
	for (int i = 0; i < int(tag_location_.size()); i++)
		this->_tag_location.push_back(tag_location_[i]);
}

void Form::getLocationTag(vector<string>* tag_)
{
	tag_->clear();
	for (int i = 0; i < int(this->_tag_location.size()); i++)
	{
		tag_->push_back(this->_tag_location[i]);
	}
}


bool Form::varInForm(string var_)
{
	for (int i = 0; i < this->_variables.size(); i++)
		if (this->_variables[i] == var_)
			return true;
	return false;
}
