#pragma once

#include <string>
#include <vector>


using namespace std;

class Var
{
private:
	int _ind;
	string _name;
	string _tag_class;
	string _tag_subject;
	string _description;

public:
	Var();
	Var(int ind_, string name_, string tag_class_, string tag_subject_, string description_);

	Var(const Var& v_);

	string getVar() { return this->_name; }
	string getVarDescription() { return this->_description; }
	string getClassTag() { return this->_tag_class; }
	string getLocationTag() { return this->_tag_subject; }

	Var operator= (Var v_);
	friend bool operator==(const Var& variable1, const Var& variable2);
};
