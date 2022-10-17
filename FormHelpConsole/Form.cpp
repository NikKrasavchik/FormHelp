#pragma once

#include "Form.h"

Form::Form(pair<int, int> ind_, vector<string> values_, string description_, string tag_class_, string tag_subject_, string tag_section_, string tag_subsection_)
{
	this->_ind = ind_;
	// что то делать с values_
	this->_tag_class = tag_class_;
	this->_description = description_;
	this->_tag_location.push_back(tag_subject_);
	this->_tag_location.push_back(tag_section_);
	this->_tag_location.push_back(tag_subsection_);
}

Form::Form(pair<int, int> ind_, vector<string> values_, string description_, string tag_class_, string tag_subject_, string tag_section_, string tag_subsection_, string tag_optional)
{
	this->_ind = ind_;
	// что то делать с values_
	this->_tag_class = tag_class_;
	this->_description = description_;
	this->_tag_location.push_back(tag_subject_);
	this->_tag_location.push_back(tag_section_);
	this->_tag_location.push_back(tag_subsection_);
	this->_tag_location.push_back(tag_optional);
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

string Form::getClassTag()
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