#pragma once

#include "Form.h"

Form::Form(pair<int, int> ind_, vector<string> values_, string description_, vector<string> tag_class_, vector<string> tag_location_)
{
	this->_ind = ind_;
	// что то делать с values_
	this->_description = description_;
	for (int i = 0; i < tag_class_.size(); i++)
		this->_tag_class.push_back(tag_class_[i]);
	for (int i = 0; i < tag_location_.size(); i++)
		this->_tag_location.push_back(tag_location_[i]);
}

/*
string Form::getVarDescription(Var v_)
{

}
*/

string Form::getFormDescription()
{
	return this->_description;
}

vector <string> Form::getClassTag()
{
	return this->_tag_class;
}

void Form::getLocationTag(vector<string>* tag_)
{
	tag_->clear();
	for (int i = 0; i < this->_tag_location.size(); i++)
	{
		tag_->push_back(this->_tag_location[i]);
	}
}

/*
void Form::getForm(Form& f)
{
	f._ind = this->_ind;
	f._values = this->_values;
	f._tag_class = this->_tag_class;
	f._tag_location = this->_tag_location;
	f._description = this->_description;
}

Form& Form::operator=(Form f)
{
	this->_ind = f._ind;
	this->_values = f._values;
	this->_tag_class = f._tag_class;
	this->_tag_location = f._tag_location;
	this->_description = f._description;
}
*/