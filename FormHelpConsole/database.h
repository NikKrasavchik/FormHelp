#pragma once

#include <vector>
#include <map>

#include <iostream>

#include "Form.h"
#include "Var.h"


void createFormsDB(map<string, Form>& form_);
void createVarDB(map<string, Var>& var_);
void createMathOperationsDB(map<string, string>& op_);