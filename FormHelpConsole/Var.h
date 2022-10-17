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
	vector<string> _tag_location;
	string _description;

public:
	Var(int ind_, string name_, string tag_class_, string tag_subject_, string tag_section_, string tag_subsection_);
	Var(int ind_, string name_, string tag_class_, string tag_subject_, string tag_section_, string tag_subsection_, string tag_optional_);
	string getVar();
	string getVarDescription();
	string getClassTag();
	void getLocationTag(vector<string> *tag_); // В массив на вводе записываются тэги местоположения переменной
};
