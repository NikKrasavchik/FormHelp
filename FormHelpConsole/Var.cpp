#include "Var.h"

using namespace std;

Var::Var(int ind_, string name_, string tag_class_, string tag_subject_, string tag_section_, string tag_subsection_)
{
	this->_ind = ind_;
	this->_name = name_;
	this->_tag_class = tag_class_;
	this->_tag_location.push_back(tag_subject_);
	this->_tag_location.push_back(tag_section_);
	this->_tag_location.push_back(tag_subsection_);
}

Var::Var(int ind_, string name_, string tag_class_, string tag_subject_, string tag_section_, string tag_subsection_, string tag_optional_)
{
	this->_ind = ind_;
	this->_name = name_;
	this->_tag_class = tag_class_;
	this->_tag_location.push_back(tag_subject_);
	this->_tag_location.push_back(tag_section_);
	this->_tag_location.push_back(tag_subsection_);
	this->_tag_location.push_back(tag_optional_);
}

string Var::getVar()
{
	return this->_name;
}

string Var::getVarDescription()
{
	return this->_description;
}

string Var::getClassTag()
{
	return this->_tag_class;
}

void Var::getLocationTag(vector<string>* tag_)
{
	tag_->clear();

	for (int i = 0; i < this->_tag_location.size(); i++)
	{
		tag_->push_back(this->_tag_location[i]);
	}
}