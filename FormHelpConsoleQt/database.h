#ifndef DATABASE_H
#define DATABASE_H
#pragma once

#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <set>

#include <iostream>

#include "Form.h"
#include "Var.h"


void createFormsDB(map<string, Form>& form_, map<string, Var>& var_, map<string, string>& op_);
void createVarDB(map<string, Var>& var_);
void createMathOperationsDB(map<string, string>& op_);

#endif // DATABASE_H
