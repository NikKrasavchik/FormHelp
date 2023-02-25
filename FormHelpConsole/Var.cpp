#include "Var.h"

using namespace std;

Var::Var(int ind_, string name_, string tag_class_, string tag_subject_, string description_)
{
	this->_ind = ind_;
	this->_name = name_;
	this->_tag_class = tag_class_;
	this->_tag_subject = tag_subject_;
	this->_description = description_;
}

Var::Var()
{
	this->_ind = 0;
	this->_name = "";
	this->_tag_class = "";
	this->_tag_subject = "";
	this->_description = "";
}

Var::Var(const Var& v_)
{
	this->_ind = v_._ind;
	this->_name = v_._name;
	this->_tag_class = v_._tag_class;
	this->_tag_subject = v_._tag_subject;
	this->_description = v_._description;
}

Var Var::operator= (Var v_)
{
	this->_ind = v_._ind;
	this->_name = v_._name;
	this->_tag_class = v_._tag_class;
	this->_tag_subject = v_._tag_subject;
	this->_description = v_._description;
	return *this;
}

bool operator==(const Var& variable1, const Var& variable2)
{
	if (variable1._ind == variable2._ind)
		return true;
	return false;
}
