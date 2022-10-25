#pragma once

#include "Var.h"
#include "database.h"


void createVarDB(map<string, Var> &var_)
{
	Var iv0(0, "S", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv1(1, "t", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv2(2, "v", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv3(3, "V", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv4(4, "m", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv5(5, "po", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv6(6, "F", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv7(7, "g", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv8(8, "k", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv9(9, "x", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv10(10, "P", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv11(11, "Fa", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv12(12, "Ft", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv13(13, "p", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv14(14, "h", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv15(15, "p0", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv16(16, "a", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv17(17, "l", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv18(18, "mu", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv19(19, "A", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv20(20, "N", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv21(21, "M", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv22(22, "Ap", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv23(23, "Az", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv24(24, "n", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv25(25, "Ek", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv26(26, "Ep", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv27(27, "Q", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv28(28, "c", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv29(29, "t0", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv30(30, "q", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv31(31, "lambda", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv32(32, "L", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv33(33, "fi", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv34(34, "pon", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv35(35, "Qn", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv36(36, "I", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv37(37, "R", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv38(38, "U", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv39(39, "D", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv40(40, "Sx", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv41(41, "x1", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv42(42, "x2", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv43(43, "vx", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv44(44, "x0", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv45(45, "~v0", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv46(46, "v0", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv47(47, "G", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv48(48, "m1", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv49(49, "m2", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv50(50, "r", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv51(51, "H", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv52(52, "T", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv53(53, "pi", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv54(54, "w", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv55(55, "fi0", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv56(56, "xo", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv57(57, "u", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv58(58, "B", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv59(59, "d", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv60(60, "f", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv61(61, "Z", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv62(62, "Ma", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv63(63, "dm", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv64(64, "mn", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv65(65, "mp", "#Class7", "#Phisics", "#Mechanics", "#Classic");
	Var iv66(66, "E", "#Class7", "#Phisics", "#Mechanics", "#Classic");

	var_.emplace("iv0", iv0);
	var_.emplace("iv1", iv1);
	var_.emplace("iv2", iv2);
	var_.emplace("iv3", iv3);
	var_.emplace("iv4", iv4);
	var_.emplace("iv5", iv5);
	var_.emplace("iv6", iv6);
	var_.emplace("iv7", iv7);
	var_.emplace("iv8", iv8);
	var_.emplace("iv9", iv9);
	var_.emplace("iv10", iv10);
	var_.emplace("iv11", iv11);
	var_.emplace("iv12", iv12);
	var_.emplace("iv13", iv13);
	var_.emplace("iv14", iv14);
	var_.emplace("iv15", iv15);
	var_.emplace("iv16", iv16);
	var_.emplace("iv17", iv17);
	var_.emplace("iv18", iv18);
	var_.emplace("iv19", iv19);
	var_.emplace("iv20", iv20);
	var_.emplace("iv21", iv21);
	var_.emplace("iv22", iv22);
	var_.emplace("iv23", iv23);
	var_.emplace("iv24", iv24);
	var_.emplace("iv25", iv25);
	var_.emplace("iv26", iv26);
	var_.emplace("iv27", iv27);
	var_.emplace("iv28", iv28);
	var_.emplace("iv29", iv29);
	var_.emplace("iv30", iv30);
	var_.emplace("iv31", iv31);
	var_.emplace("iv32", iv32);
	var_.emplace("iv33", iv33);
	var_.emplace("iv34", iv34);
	var_.emplace("iv35", iv35);
	var_.emplace("iv36", iv36);
	var_.emplace("iv37", iv37);
	var_.emplace("iv38", iv38);
	var_.emplace("iv39", iv39);
	var_.emplace("iv40", iv40);
	var_.emplace("iv41", iv41);
	var_.emplace("iv42", iv42);
	var_.emplace("iv43", iv43);
	var_.emplace("iv44", iv44);
	var_.emplace("iv45", iv45);
	var_.emplace("iv46", iv46);
	var_.emplace("iv47", iv47);
	var_.emplace("iv48", iv48);
	var_.emplace("iv49", iv49);
	var_.emplace("iv50", iv50);
	var_.emplace("iv51", iv51);
	var_.emplace("iv52", iv52);
	var_.emplace("iv53", iv53);
	var_.emplace("iv54", iv54);
	var_.emplace("iv55", iv55);
	var_.emplace("iv56", iv56);
	var_.emplace("iv57", iv57);
	var_.emplace("iv58", iv58);
	var_.emplace("iv59", iv59);
	var_.emplace("iv60", iv60);
	var_.emplace("iv61", iv61);
	var_.emplace("iv62", iv62);
	var_.emplace("iv63", iv63);
	var_.emplace("iv64", iv64);
	var_.emplace("iv65", iv65);
	var_.emplace("iv66", iv66);

}

void createMathOperationsDB(map<string, string>& op_)
{
	op_.emplace("io0", "+");
	op_.emplace("io1", "-");
	op_.emplace("io2", "*");
	op_.emplace("io3", "/");
	op_.emplace("io4", "(");
	op_.emplace("io5", ")");
	op_.emplace("io6", "div");
	op_.emplace("io7", "^");
}

void createFormsDB(map<string, Form>& form_)
{
	{
		pair<int, int> ind(1, 0);
		vector<string> val = { "S", "v*t", "S", "t", "v" };
		string des = "Формула, позволяющая вычислить пройденный путь по скорости и времени";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if0", f);
	}

	{
		pair<int, int> ind(1, 1);
		vector<string> val = { "v", "S/t", "S", "t", "v" };
		string des = "Формула, позволяющая вычислить скорость по пройденному пути и времени";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if1", f);
	}

	{
		pair<int, int> ind(1, 2);
		vector<string> val = { "t", "S/v", "S", "t", "v" };
		string des = "Формула, позволяющая вычислить время по пройденному пути и скорости";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if2", f);
	}

	{
		pair<int, int> ind(2, 0);
		vector<string> val = { "m", "po*V", "V", "m", "po" };
		string des = "Формула, позволяющая вычислить массу тела по его плотности и объему";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if3", f);
	}

	{
		pair<int, int> ind(2, 1);
		vector<string> val = { "po", "m/V", "V", "m", "po" };
		string des = "Формула, позволяющая вычислить плотность тела по его массе и объему";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if4", f);
	}

	{
		pair<int, int> ind(2, 2);
		vector<string> val = { "V", "m/po", "V", "m", "po" };
		string des = "Формула, позволяющая вычислить объем тела по его плотности и массе";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if5", f);
	}

	{
		pair<int, int> ind(3, 0);
		vector<string> val = { "F", "m*g", "F", "g", "m" };
		string des = "Формула, позволяющая вычислить силу тяжести по массе тела и ускорению свободного падения";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if6", f);
	}

	{
		pair<int, int> ind(3, 1);
		vector<string> val = { "m", "F/g", "F", "g", "m" };
		string des = "Формула, позволяющая вычислить массу тела по силе тяжести и ускорению свободного падения";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if7", f);
	}

	{
		pair<int, int> ind(4, 0);
		vector<string> val = { "F", "k*x", "F", "k", "x" };
		string des = "Формула, позволяющая вычислить силу упругости по коэффициенту жесткости и изменению длины тела";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if8", f);
	}

	{
		pair<int, int> ind(4, 1);
		vector<string> val = { "x", "F/k", "F", "k", "x" };
		string des = "Формула, позволяющая вычислить изменение длины тела по коэффициенту жесткости и силе упругости";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if9", f);
	}

	{
		pair<int, int> ind(5, 0);
		vector<string> val = { "P", "m*g", "P", "g", "m" };
		string des = "Формула, позволяющая вычислить вес тела по его массе и ускорению свободного падения";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if10", f);
	}

	{
		pair<int, int> ind(5, 1);
		vector<string> val = { "m", "P/g", "P", "g", "m" };
		string des = "Формула, позволяющая вычислить массу тела по его весу и ускорению свободного падения";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if11", f);
	}

	{
		pair<int, int> ind(5, 2);
		vector<string> val = { "P", "Ft-Fa", "Fa", "Ft", "P" };
		string des = "Формула, позволяющая вычислить вес тела в жидкости по силе тяжести и силе архимеда";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if12", f);
	}

	{
		pair<int, int> ind(5, 3);
		vector<string> val = { "P", "m*g-po*g*V", "P", "V", "g", "m", "po" };
		string des = "Формула, позволяющая вычислить вес тела в жидкости по его массе, объему, ускорению свободного падения и плотности жидкости";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if13", f);
	}

	{
		pair<int, int> ind(6, 0);
		vector<string> val = { "p", "F/S", "F", "S", "p" };
		string des = "Формула, позволяющая вычислить давление по силе давления на тело и его площади";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if14", f);
	}

	{
		pair<int, int> ind(6, 1);
		vector<string> val = { "F", "p*S", "F", "S", "p" };
		string des = "Формула, позволяющая вычислить силу давления на тело по его площади и давлению";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if15", f);
	}

	{
		pair<int, int> ind(6, 2);
		vector<string> val = { "S", "F/p", "F", "S", "p" };
		string des = "Формула, позволяющая вычислить площадь тела по давлению и силе давления на него";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if16", f);
	}

	{
		pair<int, int> ind(7, 0);
		vector<string> val = { "p", "po*g*h", "g", "h", "p", "po" };
		string des = "Формула, позволяющая вычислить давление в жидкости(газе) по плотности жидкости, ускорению свободного падения и высоте столба жидкости";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if17", f);
	}

	{
		pair<int, int> ind(7, 1);
		vector<string> val = { "po", "p/(g*h)", "g", "h", "p", "po" };
		string des = "Формула, позволяющая вычислить плотность жидкости по давлению в жидкости(газе), ускорению свободного падения и высоте столба жидкости";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if18", f);
	}

	{
		pair<int, int> ind(7, 2);
		vector<string> val = { "h", "p/(po*g)", "g", "h", "p", "po" };
		string des = "Формула, позволяющая вычислить высоту столба жидкости по давлению в жидкости(газе), плотности жидкости и ускорению свободного падения";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if19", f);
	}

	{
		pair<int, int> ind(7, 3);
		vector<string> val = { "p", "p0+po*g*h", "g", "h", "p", "p0", "po" };
		string des = "Формула, позволяющая вычислить давление в жидкости(газе) по плотности жидкости, ускорению свободного падения и высоте столба жидкости и нормальному атомсферному давлению";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if20", f);
	}

	{
		pair<int, int> ind(7, 4);
		vector<string> val = { "po", "(p-p0)/(g*h)", "g", "h", "p", "p0", "po" };
		string des = "Формула, позволяющая вычислить плотность жидкости по давлению в жидкости(газе), ускорению свободного падения и высоте столба жидкости и нормальному атомсферному давлению";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if21", f);
	}

	{
		pair<int, int> ind(7, 5);
		vector<string> val = { "h", "(p-p0)/(po*g)", "g", "h", "p", "p0", "po" };
		string des = "Формула, позволяющая вычислить высоту столба жидкости по давлению в жидкости(газе), плотности жидкости и ускорению свободного падения и нормальному атомсферному давлению";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if22", f);
	}

	{
		pair<int, int> ind(8, 0);
		vector<string> val = { "p", "p0-(h/12)", "h", "p", "p0" };
		string des = "Формула, позволяющая вычислить давление воздуха по высоте и нормальному атмосферному давлению";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if23", f);
	}

	{
		pair<int, int> ind(8, 1);
		vector<string> val = { "h", "12*(p0-p)", "h", "p", "p0" };
		string des = "Формула, позволяющая вычислить высоту по давлению воздуха и нормальному атмосферному давлению";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if24", f);
	}

	{
		pair<int, int> ind(9, 0);
		vector<string> val = { "S", "l*a", "S", "a", "l" };
		string des = "Формула, позволяющая вычислить площадь по длине и ширине";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if25", f);
	}

	{
		pair<int, int> ind(9, 1);
		vector<string> val = { "l", "S/a", "S", "a", "l" };
		string des = "Формула, позволяющая вычислить длину по площади и ширине";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if26", f);
	}

	{
		pair<int, int> ind(9, 2);
		vector<string> val = { "a", "S/l", "S", "a", "l" };
		string des = "Формула, позволяющая вычислить ширину по площади и длине";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if27", f);
	}

	{
		pair<int, int> ind(10, 0);
		vector<string> val = { "V", "S*h", "S", "V", "h" };
		string des = "Формула, позволяющая вычислить объем по площади и высоте";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if28", f);
	}

	{
		pair<int, int> ind(10, 1);
		vector<string> val = { "S", "V/h", "S", "V", "h" };
		string des = "Формула, позволяющая вычислить площадь по объему и высоте";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if29", f);
	}

	{
		pair<int, int> ind(10, 2);
		vector<string> val = { "h", "V/S", "S", "V", "h" };
		string des = "Формула, позволяющая вычислить высоту по площади и объему";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if30", f);
	}

	{
		pair<int, int> ind(11, 0);
		vector<string> val = { "F", "po*g*V", "F", "V", "g", "po" };
		string des = "Формула, позволяющая вычислить архимедову силу по плотности жидкости, ускорению свободного падения и объему тела";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if31", f);
	}

	{
		pair<int, int> ind(11, 1);
		vector<string> val = { "po", "F/(g*V)", "F", "V", "g", "po" };
		string des = "Формула, позволяющая вычислить плотность жидкости по архимедовой силе, ускорению свободного падения и объему тела";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if32", f);
	}

	{
		pair<int, int> ind(11, 2);
		vector<string> val = { "V", "F/(po*d)", "F", "V", "g", "po" };
		string des = "Формула, позволяющая вычислить объем тела по плотности жидкости, ускорению свободного падения и архимедовой силе";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if33", f);
	}

	{
		pair<int, int> ind(12, 0);
		vector<string> val = { "F", "mu*P", "F", "P", "mu" };
		string des = "Формула, позволяющая вычислить силу трения по весу тела и коэффициенту трения";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if34", f);
	}

	{
		pair<int, int> ind(12, 1);
		vector<string> val = { "F", "mu*m*g", "F", "g", "m", "mu" };
		string des = "Формула, позволяющая вычислить силу трения по массе тела, ускорению свободного падения и коэффициенту трения";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if35", f);
	}

	{
		pair<int, int> ind(12, 2);
		vector<string> val = { "P", "F/mu", "F", "P", "mu" };
		string des = "Формула, позволяющая вычислить вес тела по силе трения и коэффициенту трения";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if36", f);
	}

	{
		pair<int, int> ind(12, 3);
		vector<string> val = { "m", "F/(mu*g)", "F", "g", "m", "mu" };
		string des = "Формула, позволяющая вычислить массу тела по силе трения, ускорению свободного падения и коэффициенту трения";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if37", f);
	}

	{
		pair<int, int> ind(13, 0);
		vector<string> val = { "A", "F*S", "A", "F", "S" };
		string des = "Формула, позволяющая вычислить работу тела по силе, действующей на тело и его площади";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if38", f);
	}

	{
		pair<int, int> ind(13, 1);
		vector<string> val = { "F", "A/S", "A", "F", "S" };
		string des = "Формула, позволяющая вычислить силу, действующую на тело по работе тела и его площади";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if39", f);
	}

	{
		pair<int, int> ind(13, 2);
		vector<string> val = { "S", "A/F", "A", "F", "S" };
		string des = "Формула, позволяющая вычислить площадь тела по работе тела и силе, действующей на тело";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if40", f);
	}

	{
		pair<int, int> ind(14, 0);
		vector<string> val = { "N", "A/t", "A", "N", "t" };
		string des = "Формула, позволяющая вычислить мощность по работе и времени";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if41", f);
	}

	{
		pair<int, int> ind(14, 1);
		vector<string> val = { "A", "N*t", "A", "N", "t" };
		string des = "Формула, позволяющая вычислить работу по мощности и времени";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if42", f);
	}

	{
		pair<int, int> ind(14, 2);
		vector<string> val = { "t", "A/N", "A", "N", "t" };
		string des = "Формула, позволяющая вычислить время по мощности и работе";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if43", f);
	}

	{
		pair<int, int> ind(15, 0);
		vector<string> val = { "M", "F*l", "F", "M", "l" };
		string des = "Формула, позволяющая вычислить момент силы по силе и плечу силы";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if44", f);
	}

	{
		pair<int, int> ind(15, 1);
		vector<string> val = { "F", "M/l", "F", "M", "l" };
		string des = "Формула, позволяющая вычислить силу по моменту силы и плечу силы";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if45", f);
	}

	{
		pair<int, int> ind(15, 2);
		vector<string> val = { "l", "M/F", "F", "M", "l" };
		string des = "Формула, позволяющая вычислить плечо силы по моменту силы и силе";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if46", f);
	}

	{
		pair<int, int> ind(16, 0);
		vector<string> val = { "n", "(Ap/Az)*100%", "Ap", "Az", "n" };
		string des = "Формула, позволяющая вычислить КПД по полезной и затраченной работе";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if47", f);
	}

	{
		pair<int, int> ind(16, 1);
		vector<string> val = { "Ap", "(n*Az)/100%", "Ap", "Az", "n" };
		string des = "Формула, позволяющая вычислить полезную работу по КПД и затраченной работе";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if48", f);
	}

	{
		pair<int, int> ind(16, 2);
		vector<string> val = { "Az", "(Ap*100%)/n", "Ap", "Az", "n" };
		string des = "Формула, позволяющая вычислить затраченную работу по КПД и полезной работе";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if49", f);
	}

	{
		pair<int, int> ind(17, 0);
		vector<string> val = { "N", "F*v", "F", "N", "v" };
		string des = "Формула, позволяющая вычислить механическую мощность по силе и скорости";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if50", f);
	}

	{
		pair<int, int> ind(17, 1);
		vector<string> val = { "F", "N/v", "F", "N", "v" };
		string des = "Формула, позволяющая вычислить силу по механической мощности и скорости";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if51", f);
	}

	{
		pair<int, int> ind(17, 2);
		vector<string> val = { "v", "N/F", "F", "N", "v" };
		string des = "Формула, позволяющая вычислить скорость по механической мощности и силе";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if52", f);
	}

	{
		pair<int, int> ind(18, 0);
		vector<string> val = { "Ek", "(m*v*v)/2", "Ek", "m", "v" };
		string des = "Формула, позволяющая вычислить кинетическую энергию тела по его массе и скорости";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if53", f);
	}

	{
		pair<int, int> ind(18, 1);
		vector<string> val = { "m", "(2*Ek)/(v*v)", "Ek", "m", "v" };
		string des = "Формула, позволяющая вычислить массу тела по его кинетической энергии и скорости";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if54", f);
	}

	{
		pair<int, int> ind(18, 2);
		vector<string> val = { "v", "sqrt((2*Ek)/m)", "Ek", "m", "v" };
		string des = "Формула, позволяющая вычислить скорость тела по его кинетической энергии и массе";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if55", f);
	}

	{
		pair<int, int> ind(19, 0);
		vector<string> val = { "Ep", "m*g*h", "Ep", "g", "h", "m" };
		string des = "Формула, позволяющая вычислить потенциальную энергию силы тяжести по массе тела, высоте и ускорению свободного падения";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if56", f);
	}

	{
		pair<int, int> ind(19, 1);
		vector<string> val = { "m", "Ep/(g*h)", "Ep", "g", "h", "m" };
		string des = "Формула, позволяющая вычислить массу тела по потенциальной энергии силы тяжести, высоте и ускорению свободного падения";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if57", f);
	}

	{
		pair<int, int> ind(19, 2);
		vector<string> val = { "h", "Ep/(m*g)", "Ep", "g", "h", "m" };
		string des = "Формула, позволяющая вычислить высоту по потенциальной энергии силы тяжести, массе тела и ускорению свободного падения";
		vector<string> tag_cl = { "#Class7", "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if58", f);
	}

	{
		pair<int, int> ind(20, 0);
		vector<string> val = { "Q", "c*m*(t-t0)", "Q", "c", "m", "t", "t0" };
		string des = "Формула, позволяющая вычислить кол-во теплоты по удельной теплоёмкости, массе тела и разности температур";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Thermodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if59", f);
	}

	{
		pair<int, int> ind(20, 1);
		vector<string> val = { "m", "Q/(c*(t-t0))", "Q", "c", "m", "t", "t0" };
		string des = "Формула, позволяющая вычислить массу тела по кол-ву теплоты, удельной теплоёмкости и разности температур";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Thermodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if60", f);
	}

	{
		pair<int, int> ind(20, 2);
		vector<string> val = { "t", "Q/(c*m)-t0", "Q", "c", "m", "t", "t0" };
		string des = "Формула, позволяющая вычислить конечную температуру по кол-ву теплоты, удельной теплоёмкости, массе тела и начальной температуре";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Thermodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if61", f);
	}

	{
		pair<int, int> ind(20, 3);
		vector<string> val = { "t0", "t-Q/(c*m)t0", "Q", "c", "m", "t" };
		string des = "Формула, позволяющая вычислить начальную температуру по кол-ву теплоты, удельной теплоёмкости, массе тела и конечной температуре";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Thermodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if62", f);
	}

	{
		pair<int, int> ind(21, 0);
		vector<string> val = { "Q", "q*m", "Q", "m", "q" };
		string des = "Формула, позволяющая вычислить кол-во теплоты при сгорании топлива по удельной теплоте сгорания топлива и массе топлива";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Thermodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if63", f);
	}

	{
		pair<int, int> ind(21, 1);
		vector<string> val = { "m", "Q/q", "Q", "m", "q" };
		string des = "Формула, позволяющая вычислить массу топлива по кол-ву теплоты при сгорании топлива и удельной теплоте сгорания топлива";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Thermodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if64", f);
	}

	{
		pair<int, int> ind(22, 0);
		vector<string> val = { "Q", "lambda*m", "Q", "lambda", "m" };
		string des = "Формула, позволяющая вычислить кол-во теплоты, необходимое для плавления вещества по удельной теплоте плавления и массе вещества";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Thermodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if65", f);
	}

	{
		pair<int, int> ind(22, 1);
		vector<string> val = { "m", "Q/lambda", "Q", "lambda", "m" };
		string des = "Формула, позволяющая вычислить массу вещества по кол-ву теплоты, необходимой для плавления вещества и удельной теплоте плавления";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Thermodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if66", f);
	}

	{
		pair<int, int> ind(23, 0);
		vector<string> val = { "Q", "L*m", "L", "Q", "m" };
		string des = "Формула, позволяющая вычислить кол-во теплоты при парообразовании и конденсации по удельной теплоте парообразования и конденсации и массе вещества";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Thermodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if67", f);
	}

	{
		pair<int, int> ind(23, 1);
		vector<string> val = { "m", "Q/L", "L", "Q", "m" };
		string des = "Формула, позволяющая вычислить массу вещества по кол-ву теплоты при парообразовании и конденсации и удельной теплоте парообразования и конденсации";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Thermodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if68", f);
	}

	{
		pair<int, int> ind(24, 0);
		vector<string> val = { "po", "m/V", "V", "m", "po" };
		string des = "Формула, позволяющая вычислить абсолютную влажность воздуха по массе пара и объему воздуха";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Thermodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if69", f);
	}

	{
		pair<int, int> ind(24, 1);
		vector<string> val = { "m", "po*V", "V", "m", "po" };
		string des = "Формула, позволяющая вычислить массу пара по абсолютной влажности воздуха и объему воздуха";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Thermodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if70", f);
	}

	{
		pair<int, int> ind(24, 2);
		vector<string> val = { "V", "m/po", "V", "m", "po" };
		string des = "Формула, позволяющая вычислить объем воздуха по абсолютной влажности воздуха и массе пара";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Thermodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if71", f);
	}

	{
		pair<int, int> ind(25, 0);
		vector<string> val = { "fi", "po/pon*100%", "fi", "po", "pon" };
		string des = "Формула, позволяющая вычислить относительную влажность воздуха по абсолютной влажности и плотности насыщенного пара при данной температуре";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Thermodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if72", f);
	}

	{
		pair<int, int> ind(25, 1);
		vector<string> val = { "po", "fi*pon/100%", "fi", "po", "pon" };
		string des = "Формула, позволяющая вычислить абсолютнуюную влажность по относительной влажности воздуха и плотности насыщенного пара при данной температуре";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Thermodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if73", f);
	}

	{
		pair<int, int> ind(26, 0);
		vector<string> val = { "n", "Ap/Qn*100%", "Ap", "Qn", "n" };
		string des = "Формула, позволяющая вычислить КПД теплового двигателя по полезной работе, совершенной двигателем и кол-ву теплоты, полученного от нагревателя";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Thermodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if74", f);
	}

	{
		pair<int, int> ind(26, 1);
		vector<string> val = { "Ap", "n*Qn*100%", "Ap", "Qn", "n" };
		string des = "Формула, позволяющая вычислить полезную работу, совершенную двигателем по КПД теплового двигателя и кол-ву теплоты, полученного от нагревателя";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Thermodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if75", f);
	}

	{
		pair<int, int> ind(26, 2);
		vector<string> val = { "Qn", "Ap/(n*100%)", "Ap", "Qn", "n" };
		string des = "Формула, позволяющая вычислить кол-во теплоты, полученное от нагревателя по КПД теплового двигателя и полезной работе, совершенной двигателем";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Thermodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if76", f);
	}

	{
		pair<int, int> ind(27, 0);
		vector<string> val = { "I", "U/R", "I", "R", "U" };
		string des = "Формула, позволяющая вычислить силу тока по напряжению и сопротивлению";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if77", f);
	}

	{
		pair<int, int> ind(27, 1);
		vector<string> val = { "U", "I*R", "I", "R", "U" };
		string des = "Формула, позволяющая вычислить напряжение по силе тока и сопротивлению";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if78", f);
	}

	{
		pair<int, int> ind(27, 2);
		vector<string> val = { "R", "U/I", "I", "R", "U" };
		string des = "Формула, позволяющая вычислить спортивление по напряжению и силе тока";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if79", f);
	}

	{
		pair<int, int> ind(28, 0);
		vector<string> val = { "R", "po*L/S", "L", "R", "S", "po" };
		string des = "Формула, позволяющая вычислить сопротивление по удельному сопротивлению вещества, длине проводника и площади его поперечного сечения";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if80", f);
	}

	{
		pair<int, int> ind(28, 1);
		vector<string> val = { "L", "R*S/po", "L", "R", "S", "po" };
		string des = "Формула, позволяющая вычислить длину проводника по удельному сопротивлению вещества, сопртивлению и площади поперечного сечения проводника";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if81", f);
	}

	{
		pair<int, int> ind(28, 2);
		vector<string> val = { "S", "po*L/R", "L", "R", "S", "po" };
		string des = "Формула, позволяющая вычислить площадь поперечного сечения проводника по удельному сопротивлению вещества, длине проводника и сопротивлению";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if82", f);
	}

	{
		pair<int, int> ind(28, 3);
		vector<string> val = { "po", "R*S/L", "L", "R", "S", "po" };
		string des = "Формула, позволяющая вычислить удельное сопротивление вещества по сопротивлению, длине проводника и площади его поперечного сечения";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if83", f);
	}

	{
		pair<int, int> ind(29, 0);
		vector<string> val = { "q", "I*t", "I", "q", "t" };
		string des = "Формула, позволяющая вычислить заряд по силе тока и времени, за которое этот заряд протекает по проводнику";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if84", f);
	}

	{
		pair<int, int> ind(29, 1);
		vector<string> val = { "I", "q/t", "I", "q", "t" };
		string des = "Формула, позволяющая вычислить силу тока по заряду и времени, за которое этот заряд протекает по проводнику";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if85", f);
	}

	{
		pair<int, int> ind(29, 2);
		vector<string> val = { "t", "q/I", "I", "q", "t" };
		string des = "Формула, позволяющая вычислить время, за которое заряд протекает по проводнику по силе тока и заряду";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if86", f);
	}

	{
		pair<int, int> ind(30, 0);
		vector<string> val = { "A", "U*q", "A", "U", "q" };
		string des = "Формула, позволяющая вычислить работу электрического тока по напряжению на концах участка и заряду";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if87", f);
	}

	{
		pair<int, int> ind(30, 1);
		vector<string> val = { "U", "A/q", "A", "U", "q" };
		string des = "Формула, позволяющая вычислить напряжение на концах участка по работе электрического тока и заряду";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if88", f);
	}

	{
		pair<int, int> ind(30, 2);
		vector<string> val = { "q", "A/U", "A", "U", "q" };
		string des = "Формула, позволяющая вычислить заряд по напряжению на концах участка и работе электрического тока";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if89", f);
	}

	{
		pair<int, int> ind(31, 0);
		vector<string> val = { "A", "U*I*t", "A", "I", "U", "t" };
		string des = "Формула, позволяющая вычислить работу электрического тока по напряжению на концах участка, силе тока и времени";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if90", f);
	}

	{
		pair<int, int> ind(31, 1);
		vector<string> val = { "U", "A/(I*t)", "A", "I", "U", "t" };
		string des = "Формула, позволяющая вычислить напряжение на концах участка по работе электрического тока, силе тока и времени";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if91", f);
	}

	{
		pair<int, int> ind(31, 2);
		vector<string> val = { "I", "A/(U*t)", "A", "I", "U", "t" };
		string des = "Формула, позволяющая вычислить силу тока по работе электрического тока, напряжению на концах участка и времени";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if92", f);
	}

	{
		pair<int, int> ind(31, 2);
		vector<string> val = { "t", "A/(U*I)", "A", "I", "U", "t" };
		string des = "Формула, позволяющая вычислить время по работе электрического тока, напряжению на концах участка и силе тока";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if93", f);
	}

	{
		pair<int, int> ind(32, 0);
		vector<string> val = { "P", "A/t", "A", "P", "t" };
		string des = "Формула, позволяющая вычислить электрическую мощность по работе электрического тока и времени";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if94", f);
	}

	{
		pair<int, int> ind(32, 1);
		vector<string> val = { "A", "P*t", "A", "P", "t" };
		string des = "Формула, позволяющая вычислить работу электрического тока по электрической мощности и времени";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if95", f);
	}

	{
		pair<int, int> ind(32, 2);
		vector<string> val = { "t", "A/P", "A", "P", "t" };
		string des = "Формула, позволяющая вычислить время по работе электрического тока и электрической мощности";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if96", f);
	}

	{
		pair<int, int> ind(33, 0);
		vector<string> val = { "P", "U*I", "I", "P", "U" };
		string des = "Формула, позволяющая вычислить электрическую мощность по напряжению на концах участка и силе тока";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if97", f);
	}

	{
		pair<int, int> ind(33, 1);
		vector<string> val = { "U", "P/I", "I", "P", "U" };
		string des = "Формула, позволяющая вычислить напряжение на концах участка по электрической мощности и силе тока";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if98", f);
	}

	{
		pair<int, int> ind(33, 2);
		vector<string> val = { "I", "P/U", "I", "P", "U" };
		string des = "Формула, позволяющая вычислить силу тока по напряжению на концах участка и электрической мощности";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if99", f);
	}

	{
		pair<int, int> ind(34, 0);
		vector<string> val = { "P", "U*U/R", "P", "R", "U" };
		string des = "Формула, позволяющая вычислить электрическую мощность по напряжению на концах участка и сопротивлению";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if100", f);
	}

	{
		pair<int, int> ind(34, 1);
		vector<string> val = { "R", "P/(U*U)", "P", "R", "U" };
		string des = "Формула, позволяющая вычислить сопротивление по электрической мощности и напряжению на концах участка";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if101", f);
	}

	{
		pair<int, int> ind(34, 2);
		vector<string> val = { "U", "sqrt(P/R)", "P", "R", "U" };
		string des = "Формула, позволяющая вычислить напряжение на концах участка по электрической мощности и сопротивлению";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if102", f);
	}

	{
		pair<int, int> ind(35, 0);
		vector<string> val = { "P", "I*I*R", "I", "P", "R" };
		string des = "Формула, позволяющая вычислить электрическую мощность по силе тока и сопротивлению";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if103", f);
	}

	{
		pair<int, int> ind(35, 1);
		vector<string> val = { "R", "P/(I*I)", "I", "P", "R" };
		string des = "Формула, позволяющая вычислить сопротивление по электрической мощности по силе тока";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if104", f);
	}

	{
		pair<int, int> ind(35, 2);
		vector<string> val = { "I", "sqrt(P/R)", "I", "P", "R" };
		string des = "Формула, позволяющая вычислить силу тока по электрической мощности и сопротивлению";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if105", f);
	}

	{
		pair<int, int> ind(36, 0);
		vector<string> val = { "Q", "P*t", "P", "Q", "t" };
		string des = "Формула, позволяющая вычислить кол-во теплоты по электрической мощности и времени";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if106", f);
	}

	{
		pair<int, int> ind(36, 1);
		vector<string> val = { "P", "Q/t", "P", "Q", "t" };
		string des = "Формула, позволяющая вычислить электрическую мощность по кол-ву теплоты и времени";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if107", f);
	}

	{
		pair<int, int> ind(36, 2);
		vector<string> val = { "t", "Q/P", "P", "Q", "t" };
		string des = "Формула, позволяющая вычислить время по кол-ву теплоты и электрической мощности";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if108", f);
	}

	{
		pair<int, int> ind(37, 0);
		vector<string> val = { "Q", "I*I*R*t", "I", "Q", "R", "t" };
		string des = "Формула, позволяющая вычислить кол-во теплоты по силе тока, сопротивлению и времени";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if109", f);
	}

	{
		pair<int, int> ind(37, 1);
		vector<string> val = { "I", "sqrt(Q/(R*t))", "I", "Q", "R", "t" };
		string des = "Формула, позволяющая вычислить силу тока по кол-ву теплоты, сопротивлению и времени";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if110", f);
	}

	{
		pair<int, int> ind(37, 2);
		vector<string> val = { "R", "Q/(I*I*t)", "I", "Q", "R", "t" };
		string des = "Формула, позволяющая вычислить сопротивление по кол-ву теплоты, силе тока и времени";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if111", f);
	}

	{
		pair<int, int> ind(37, 3);
		vector<string> val = { "t", "Q/(I*I*R)", "I", "Q", "R", "t" };
		string des = "Формула, позволяющая вычислить время по кол-ву теплоты, силе тока и сопротивлению";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if112", f);
	}

	{
		pair<int, int> ind(38, 0);
		vector<string> val = { "Q", "U*I*t", "I", "Q", "U", "t" };
		string des = "Формула, позволяющая вычислить кол-во теплоты по напряжению на концах участка, силе тока и времени";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if113", f);
	}

	{
		pair<int, int> ind(38, 1);
		vector<string> val = { "U", "Q/(I*t)", "I", "Q", "U", "t" };
		string des = "Формула, позволяющая вычислить напряжение на концах участка по кол-ву теплоты, силе тока и времени";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if114", f);
	}

	{
		pair<int, int> ind(38, 2);
		vector<string> val = { "I", "Q/(U*t)", "I", "Q", "U", "t" };
		string des = "Формула, позволяющая вычислить силу тока по кол-ву теплоты, напряжению на концах участка и времени";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if115", f);
	}

	{
		pair<int, int> ind(38, 3);
		vector<string> val = { "t", "Q/(U*I)", "I", "Q", "U", "t" };
		string des = "Формула, позволяющая вычислить время по кол-ву теплоты, напряжению на концах участка и силе тока";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if116", f);
	}

	{
		pair<int, int> ind(39, 0);
		vector<string> val = { "Q", "U*U*t/R", "Q", "R", "U", "t" };
		string des = "Формула, позволяющая вычислить кол-во теплоты по напряжению на концах участка, сопротивлению и времени";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if117", f);
	}

	{
		pair<int, int> ind(39, 1);
		vector<string> val = { "U", "sqrt(Q*R/t)", "Q", "R", "U", "t" };
		string des = "Формула, позволяющая вычислить напряжение на концах участка по кол-ву теплоты, сопротивлению и времени";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if118", f);
	}

	{
		pair<int, int> ind(39, 2);
		vector<string> val = { "R", "U*U*t/Q", "Q", "R", "U", "t" };
		string des = "Формула, позволяющая вычислить сопротивление по кол-ву теплоты, напряжению на концах участка и времени";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if119", f);
	}

	{
		pair<int, int> ind(39, 3);
		vector<string> val = { "t", "Q*R/(U*U)", "Q", "R", "U", "t" };
		string des = "Формула, позволяющая вычислить время по кол-ву теплоты, напряжению на концах участка и сопротивлению";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if120", f);
	}

	{
		pair<int, int> ind(40, 0);
		vector<string> val = { "n", "c/v", "c", "n", "v" };
		string des = "Формула, позволяющая вычислить абсолютный показатель преломления вещества по скорости света в вакууме и скорости света в данной среде";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Optics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if121", f);
	}

	{
		pair<int, int> ind(40, 1);
		vector<string> val = { "v", "c/n", "c", "n", "v" };
		string des = "Формула, позволяющая вычислить скорость света в данной среде по абсолютному показателю преломления вещества и скорости света в вакууме";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Optics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if122", f);
	}

	{
		pair<int, int> ind(41, 0);
		vector<string> val = { "D", "1/F", "D", "F" };
		string des = "Формула, позволяющая вычислить оптическую силу линзы по фокусному расстоянию линзы";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Optics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if123", f);
	}

	{
		pair<int, int> ind(41, 1);
		vector<string> val = { "F", "1/D", "D", "F" };
		string des = "Формула, позволяющая вычислить фокусное расстояние линзы по оптической силе линзы";
		vector<string> tag_cl = { "#Class8", "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Optics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if124", f);
	}

	{
		pair<int, int> ind(42, 0);
		vector<string> val = { "Sx", "x2-x1", "Sx", "x1", "x2" };
		string des = "Формула, позволяющая вычислить перемещение по начальной и конечной координатам";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if125", f);
	}

	{
		pair<int, int> ind(42, 1);
		vector<string> val = { "x2", "Sx+x1", "Sx", "x1", "x2" };
		string des = "Формула, позволяющая вычислить конечную координату по перемещению и начальной координате";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if126", f);
	}

	{
		pair<int, int> ind(42, 2);
		vector<string> val = { "x1", "x2-Sx", "Sx", "x1", "x2" };
		string des = "Формула, позволяющая вычислить начальную координату по перемещению и конечной координате";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if127", f);
	}

	{
		pair<int, int> ind(43, 0);
		vector<string> val = { "x", "x0+vx*t", "t", "vx", "x", "x0" };
		string des = "Формула, позволяющая вычислить конечную координату по начальной координате, скорости и времени";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if128", f);
	}

	{
		pair<int, int> ind(43, 1);
		vector<string> val = { "x0", "x-vx*t", "t", "vx", "x", "x0" };
		string des = "Формула, позволяющая вычислить начальную координату по конечной координате, скорости и времени";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if129", f);
	}

	{
		pair<int, int> ind(43, 2);
		vector<string> val = { "vx", "(x-x0)/t", "t", "vx", "x", "x0" };
		string des = "Формула, позволяющая вычислить скорость по конечной и начальной координатам и времени";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if130", f);
	}

	{
		pair<int, int> ind(43, 3);
		vector<string> val = { "t", "(x-x0)/vx", "t", "vx", "x", "x0" };
		string des = "Формула, позволяющая вычислить время по конечной и начальной координатам и скорости";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if131", f);
	}

	{
		pair<int, int> ind(44, 0);
		vector<string> val = { "v", "~v0+a*t", "a", "t", "v", "~v0" };
		string des = "Формула, позволяющая вычислить конечную скорость по начальной скорости, ускорению и времени";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if132", f);
	}

	{
		pair<int, int> ind(44, 1);
		vector<string> val = { "~v0", "v-a*t", "a", "t", "v", "~v0" };
		string des = "Формула, позволяющая вычислить начальную скорость по конечной скорости, ускорению и времени";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if133", f);
	}

	{
		pair<int, int> ind(44, 2);
		vector<string> val = { "a", "(v-~v0)/t", "a", "t", "v", "~v0" };
		string des = "Формула, позволяющая вычислить ускорение по конечной и начальной скоростям и времени";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if134", f);
	}

	{
		pair<int, int> ind(44, 3);
		vector<string> val = { "t", "(v-~v0)/a", "a", "t", "v", "~v0" };
		string des = "Формула, позволяющая вычислить время по конечной и начальной скоростям и ускорению";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if135", f);
	}

	{
		pair<int, int> ind(45, 0);
		vector<string> val = { "x", "x0+v0*t+(a*t*t)/2", "a", "t", "v0", "x", "x0" };
		string des = "Формула, позволяющая вычислить конечную координату по начальной координате, начальной скорости, ускорению и времени";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if136", f);
	}

	{
		pair<int, int> ind(45, 1);
		vector<string> val = { "x0", "x-v0*t-(a*t*t)/2", "a", "t", "v0", "x", "x0" };
		string des = "Формула, позволяющая вычислить начальную координату по конечной координате, начальной скорости, ускорению и времени";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if137", f);
	}

	{
		pair<int, int> ind(45, 2);
		vector<string> val = { "v0", "(x-x0-(a*t*t)/2)/t", "a", "t", "v0", "x", "x0" };
		string des = "Формула, позволяющая вычислить начальную скорость по конечной и начальной координатам, ускорению и времени";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if138", f);
	}

	{
		pair<int, int> ind(45, 3);
		vector<string> val = { "a", "2*(x-x0-v0t)/(t*t)", "a", "t", "v0", "x", "x0" };
		string des = "Формула, позволяющая вычислить ускорение по начальной скорости, конечной и начальной координатам и времени";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if139", f);
	}

	{
		pair<int, int> ind(46, 0);
		vector<string> val = { "F", "m*a", "F", "a", "m" };
		string des = "Формула, позволяющая вычислить силу, действующую на тело по его массе и ускорению";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if140", f);
	}

	{
		pair<int, int> ind(46, 1);
		vector<string> val = { "m", "F/a", "F", "a", "m" };
		string des = "Формула, позволяющая вычислить массу тела по силе, действующей на него и его ускорению";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if141", f);
	}

	{
		pair<int, int> ind(46, 2);
		vector<string> val = { "a", "F/m", "F", "a", "m" };
		string des = "Формула, позволяющая вычислить ускорение тела по силе, действующей на него и его массе";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if142", f);
	}

	{
		pair<int, int> ind(47, 0);
		vector<string> val = { "h", "(g*t*t)/2", "g", "h", "t" };
		string des = "Формула, позволяющая вычислить высоту, с которой падает тело по времени и ускорению свободного падения";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if143", f);
	}

	{
		pair<int, int> ind(47, 1);
		vector<string> val = { "t", "sqrt(2*h/g)", "g", "h", "t" };
		string des = "Формула, позволяющая вычислить время падения по высоте, с которой падает тело и ускорению свободного падения";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if144", f);
	}

	{
		pair<int, int> ind(48, 0);
		vector<string> val = { "h", "v0*t-(g*t*t)/2", "g", "h", "t", "v0" };
		string des = "Формула, позволяющая вычислить высоту при движении вверх по начальной скорости, времени и ускорению свободного падения";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if145", f);
	}

	{
		pair<int, int> ind(48, 1);
		vector<string> val = { "v0", "(h+(g*t*t)/2)/t", "g", "h", "t", "v0" };
		string des = "Формула, позволяющая вычислить начальную скорость при движении вверх по высоте, времени и ускорению свободного падения";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if146", f);
	}

	{
		pair<int, int> ind(49, 0);
		vector<string> val = { "P", "m*(g+a)", "P", "a", "g", "m" };
		string des = "Формула, позволяющая вычислить вес тела при движении вверх по массе тела, его ускорению и ускорению свободного падения";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if147", f);
	}

	{
		pair<int, int> ind(49, 1);
		vector<string> val = { "m", "P/(g+a)", "P", "a", "g", "m" };
		string des = "Формула, позволяющая вычислить массу тела при движении вверх по весу тела, его ускорению и ускорению свободного падения";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if148", f);
	}

	{
		pair<int, int> ind(49, 2);
		vector<string> val = { "a", "P/m-g", "P", "a", "g", "m" };
		string des = "Формула, позволяющая вычислить ускорение тела при движении вверх по весу тела, его массе и ускорению свободного падения";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if149", f);
	}

	{
		pair<int, int> ind(50, 0);
		vector<string> val = { "P", "m*(g-a)", "P", "a", "g", "m" };
		string des = "Формула, позволяющая вычислить вес тела при движении вниз по массе тела, его ускорению и ускорению свободного падения";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if150", f);
	}

	{
		pair<int, int> ind(50, 1);
		vector<string> val = { "m", "P/(g-a)", "P", "a", "g", "m" };
		string des = "Формула, позволяющая вычислить массу тела при движении вниз по весу тела, его ускорению и ускорению свободного падения";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if151", f);
	}

	{
		pair<int, int> ind(50, 2);
		vector<string> val = { "a", "g-P/m", "P", "a", "g", "m" };
		string des = "Формула, позволяющая вычислить ускорение тела при движении вниз по весу тела, его массе и ускорению свободного падения";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if152", f);
	}

	{
		pair<int, int> ind(51, 0);
		vector<string> val = { "F", "G*m1*m2/(r*r)", "F", "G", "m1", "m2", "r" };
		string des = "Формула, позволяющая вычислить силу притяжения по масссе тел, расстоянию между ними и гравитационной постоянной";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if153", f);
	}

	{
		pair<int, int> ind(51, 1);
		vector<string> val = { "m1", "F*r*r/(G*m2)", "F", "G", "m1", "m2", "r" };
		string des = "Формула, позволяющая вычислить массу первого тела по силе притяжения, масссе второго тела, расстоянию между ними и гравитационной постоянной";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if154", f);
	}

	{
		pair<int, int> ind(51, 2);
		vector<string> val = { "m2", "F*r*r/(G*m1)", "F", "G", "m1", "m2", "r" };
		string des = "Формула, позволяющая вычислить массу второго тела по силе притяжения, масссе первого тела, расстоянию между ними и гравитационной постоянной";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if155", f);
	}

	{
		pair<int, int> ind(51, 3);
		vector<string> val = { "r", "G*m1*m2/F", "F", "G", "m1", "m2", "r" };
		string des = "Формула, позволяющая вычислить рассстояние между телами по силе притяжения, масссе тел и гравитационной постоянной";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if156", f);
	}

	{
		pair<int, int> ind(52, 0);
		vector<string> val = { "g", "G*M/(R*R)", "G", "M", "R", "g" };
		string des = "Формула, позволяющая вычислить ускорение свободного падения по массе и радиусу планеты и гравитационной постоянной";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if157", f);
	}

	{
		pair<int, int> ind(52, 1);
		vector<string> val = { "M", "g*R*R/G", "G", "M", "R", "g" };
		string des = "Формула, позволяющая вычислить массу планеты по ускорению свободного падения, радиусу планеты и гравитационной постоянной";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if158", f);
	}

	{
		pair<int, int> ind(52, 2);
		vector<string> val = { "R", "sqrt(G*M/g)", "G", "M", "R", "g" };
		string des = "Формула, позволяющая вычислить радиус планеты по ускорению свободного падения, массе планеты и гравитационной постоянной";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if159", f);
	}

	{
		pair<int, int> ind(53, 0);
		vector<string> val = { "g", "G*M/(R+H)*(R+H)", "G", "H", "M", "R", "g" };
		string des = "Формула, позволяющая вычислить ускорение свободного падения по массе и радиусу Земли, высоте тела над Землей и гравитационной постоянной";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if160", f);
	}

	{
		pair<int, int> ind(54, 0);
		vector<string> val = { "a", "v*v/r", "a", "r", "v" };
		string des = "Формула, позволяющая вычислить центростремительное ускорение по скорости и радиусу окружности";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if161", f);
	}

	{
		pair<int, int> ind(54, 1);
		vector<string> val = { "v", "sqrt(a*r)", "a", "r", "v" };
		string des = "Формула, позволяющая вычислить скорость по центростремительному ускорению и радиусу окружности";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if162", f);
	}

	{
		pair<int, int> ind(54, 2);
		vector<string> val = { "r", "v*v/a", "a", "r", "v" };
		string des = "Формула, позволяющая вычислить радиус окружности по центростремительному ускорению и скорости";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if163", f);
	}

	{
		pair<int, int> ind(55, 0);
		vector<string> val = { "T", "1/v", "T", "v" };
		string des = "Формула, позволяющая вычислить период движения по оркужности по частоте вращения";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if164", f);
	}

	{
		pair<int, int> ind(55, 1);
		vector<string> val = { "v", "1/T", "T", "v" };
		string des = "Формула, позволяющая вычислить частоту вращения по периоду движения по окружности";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if165", f);
	}

	{
		pair<int, int> ind(56, 0);
		vector<string> val = { "T", "2*pi*r/v", "T", "pi", "r", "v" };
		string des = "Формула, позволяющая вычислить период движения по окружности по радиусу окружности и частоте вращения";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if166", f);
	}

	{
		pair<int, int> ind(56, 1);
		vector<string> val = { "r", "T*v/(2*pi)", "T", "pi", "r", "v" };
		string des = "Формула, позволяющая вычислить радиус окружности по периоду движения по окружности и частоте вращения";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if167", f);
	}

	{
		pair<int, int> ind(56, 2);
		vector<string> val = { "v", "2*pi*r/T", "T", "pi", "r", "v" };
		string des = "Формула, позволяющая вычислить частоту вращения по периоду движения по окружности и радиусу окружности";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if168", f);
	}

	{
		pair<int, int> ind(57, 0);
		vector<string> val = { "T", "t/N", "N", "T", "t" };
		string des = "Формула, позволяющая вычислить период движения по окружности по времени и числу оборотов";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if169", f);
	}

	{
		pair<int, int> ind(57, 1);
		vector<string> val = { "t", "T*N", "N", "T", "t" };
		string des = "Формула, позволяющая вычислить время по периоду движения по окружности и числу оборотов";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if170", f);
	}

	{
		pair<int, int> ind(57, 2);
		vector<string> val = { "N", "t/T", "N", "T", "t" };
		string des = "Формула, позволяющая вычислить число оборотов по периоду движения по окружности и времени";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if171", f);
	}

	{
		pair<int, int> ind(58, 0);
		vector<string> val = { "w", "2*pi/T", "T", "pi", "w" };
		string des = "Формула, позволяющая вычислить угловую скорость по периоду вращения";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if172", f);
	}

	{
		pair<int, int> ind(58, 1);
		vector<string> val = { "T", "2*pi/w", "T", "pi", "w" };
		string des = "Формула, позволяющая вычислить период вращения по угловой скорости";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if173", f);
	}

	{
		pair<int, int> ind(59, 0);
		vector<string> val = { "w", "2*pi*v", "pi", "v", "w" };
		string des = "Формула, позволяющая вычислить угловую скорость по частоте вращения";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if174", f);
	}

	{
		pair<int, int> ind(59, 1);
		vector<string> val = { "v", "w/(2*pi)", "pi", "v", "w" };
		string des = "Формула, позволяющая вычислить частоту вращения по угловой скорости";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if175", f);
	}

	{
		pair<int, int> ind(60, 0);
		vector<string> val = { "w", "v*r", "r", "v", "w" };
		string des = "Формула, позволяющая вычислить угловую скорость по линейной скорости и радиусу окружности";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if176", f);
	}

	{
		pair<int, int> ind(60, 1);
		vector<string> val = { "v", "w/r", "r", "v", "w" };
		string des = "Формула, позволяющая вычислить линейную скорость по угловой скорости и радиусу окружности";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if177", f);
	}

	{
		pair<int, int> ind(60, 2);
		vector<string> val = { "r", "w/v", "r", "v", "w" };
		string des = "Формула, позволяющая вычислить радиус окружности по угловой и линейной скоростям";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if178", f);
	}

	{
		pair<int, int> ind(61, 0);
		vector<string> val = { "p", "m*v", "m", "p", "v" };
		string des = "Формула, позволяющая вычислить импульс тела по массе тела и скорости";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if179", f);
	}

	{
		pair<int, int> ind(61, 1);
		vector<string> val = { "m", "p/v", "m", "p", "v" };
		string des = "Формула, позволяющая вычислить массу по импульсу тела и скорости";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if180", f);
	}

	{
		pair<int, int> ind(61, 2);
		vector<string> val = { "v", "p/m", "m", "p", "v" };
		string des = "Формула, позволяющая вычислить скорость по массе и импульсу тела";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if181", f);
	}

	{
		pair<int, int> ind(62, 0);
		vector<string> val = { "p", "F*t", "F", "p", "t" };
		string des = "Формула, позволяющая вычислить импульс силы по силе и времени";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if182", f);
	}

	{
		pair<int, int> ind(62, 1);
		vector<string> val = { "F", "p/t", "F", "p", "t" };
		string des = "Формула, позволяющая вычислить силу по импульсу силы и времени";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if183", f);
	}

	{
		pair<int, int> ind(62, 2);
		vector<string> val = { "t", "p/F", "F", "p", "t" };
		string des = "Формула, позволяющая вычислить время по силе и импульсу силы";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if184", f);
	}

	{
		pair<int, int> ind(63, 0);
		vector<string> val = { "x", "x0*cos(w*t+fi0)", "fi0", "t", "w", "x", "x0" };
		string des = "Формула, позволяющая вычислить смещение по амплитуде колебаний, циклической частоте, времени и начальной фазе";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if185", f);
	}

	{
		pair<int, int> ind(63, 1);
		vector<string> val = { "x0", "x/cos(w*t+fi0)", "fi0", "t", "w", "x", "xo" };
		string des = "Формула, позволяющая вычислить амплитуду колебаний по смещению, циклической частоте, времени и начальной фазе";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if186", f);
	}

	{
		pair<int, int> ind(64, 0);
		vector<string> val = { "T", "2*pi*sqrt(L/g)", "L", "T", "g", "pi" };
		string des = "Формула, позволяющая вычислить период математического маятника по длине нити и ускорению свободного падения";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if187", f);
	}

	{
		pair<int, int> ind(64, 1);
		vector<string> val = { "L", "g*T*T/(4*pi*pi)", "L", "T", "g", "pi" };
		string des = "Формула, позволяющая вычислить длину нити по периоду математического маятника и ускорению свободного падения";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if188", f);
	}

	{
		pair<int, int> ind(65, 0);
		vector<string> val = { "T", "2*pi*sqrt(m/k)", "T", "k", "m", "pi" };
		string des = "Формула, позволяющая вычислить период пружинного маятника по массе груза и жесткости пружины";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if189", f);
	}

	{
		pair<int, int> ind(65, 1);
		vector<string> val = { "m", "k*T*T/(4*pi*pi)", "T", "k", "m", "pi" };
		string des = "Формула, позволяющая вычислить массу груза по периоду пружинного маятника и жесткости пружины";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if190", f);
	}

	{
		pair<int, int> ind(65, 2);
		vector<string> val = { "k", "4*pi*pi*m/(T*T)", "T", "k", "m", "pi" };
		string des = "Формула, позволяющая вычислить жесткость пружины по периоду пружинного маятника и массе груза";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if191", f);
	}

	{
		pair<int, int> ind(66, 0);
		vector<string> val = { "lambda", "u*T", "T", "lambda", "u" };
		string des = "Формула, позволяющая вычислить длину волны по ее скорости и периоду";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if192", f);
	}

	{
		pair<int, int> ind(66, 1);
		vector<string> val = { "u", "lambda/T", "T", "lambda", "u" };
		string des = "Формула, позволяющая вычислить скорость волны по ее длине и периоду";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if193", f);
	}

	{
		pair<int, int> ind(66, 2);
		vector<string> val = { "T", "lambda/u", "T", "lambda", "u" };
		string des = "Формула, позволяющая вычислить период по длине и скорости волны";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if194", f);
	}

	{
		pair<int, int> ind(67, 0);
		vector<string> val = { "lambda", "u/v", "lambda", "u", "v" };
		string des = "Формула, позволяющая вычислить длину волны по ее скорости и частоте";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if195", f);
	}

	{
		pair<int, int> ind(67, 1);
		vector<string> val = { "u", "lambda*v", "lambda", "u", "v" };
		string des = "Формула, позволяющая вычислить скорость волны по ее длине и частоте";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if196", f);
	}

	{
		pair<int, int> ind(67, 2);
		vector<string> val = { "v", "u/lambda", "lambda", "u", "v" };
		string des = "Формула, позволяющая вычислить частоту по длине и скорости волны";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if197", f);
	}

	{
		pair<int, int> ind(68, 0);
		vector<string> val = { "F", "B*I*L*sin(a)", "B", "F", "I", "L", "a" };
		string des = "Формула, позволяющая вычислить силу Ампера по магнитной индукции, силе тока, длине проводника и углу между вектором индукции магнитного поля и проводником";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electromagnetism" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if198", f);
	}

	{
		pair<int, int> ind(68, 1);
		vector<string> val = { "B", "F/(I*L*sin(a))", "B", "F", "I", "L", "a" };
		string des = "Формула, позволяющая вычислить магнитную индукцию по силе Ампера, силе тока, длине проводника и углу между вектором индукции магнитного поля и проводником";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electromagnetism" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if199", f);
	}

	{
		pair<int, int> ind(68, 2);
		vector<string> val = { "I", "F/(B*L*sin(a))", "B", "F", "I", "L", "a" };
		string des = "Формула, позволяющая вычислить силу тока по магнитной индукции, силе Ампера, длине проводника и углу между вектором индукции магнитного поля и проводником";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electromagnetism" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if200", f);
	}

	{
		pair<int, int> ind(68, 3);
		vector<string> val = { "L", "F/(B*I*sin(a))", "B", "F", "I", "L", "a" };
		string des = "Формула, позволяющая вычислить длину проводника по силе Ампера, магнитной индукции, силе тока и углу между вектором индукции магнитного поля и проводником";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electromagnetism" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if201", f);
	}

	{
		pair<int, int> ind(69, 0);
		vector<string> val = { "F", "q*B*v*sin(a)", "B", "F", "a", "q", "v" };
		string des = "Формула, позволяющая вычислить силу Лоренца по заряду частицы, магнитной индукции, скорости движения частицы и углу между вектором магнитного поля и скоростью движения частицы";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electromagnetism" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if202", f);
	}

	{
		pair<int, int> ind(69, 1);
		vector<string> val = { "q", "F/(B*v*sin(a))", "B", "F", "a", "q", "v" };
		string des = "Формула, позволяющая вычислить заряд частицы по силе Лоренца, магнитной индукции, скорости движения частицы и углу между вектором магнитного поля и скоростью движения частицы";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electromagnetism" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if203", f);
	}

	{
		pair<int, int> ind(69, 2);
		vector<string> val = { "B", "F/(q*v*sin(a))", "B", "F", "a", "q", "v" };
		string des = "Формула, позволяющая вычислить магнитную индукцию по силе Лоренца, заряду частицы, скорости движения частицы и углу между вектором магнитного поля и скоростью движения частицы";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electromagnetism" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if204", f);
	}

	{
		pair<int, int> ind(69, 3);
		vector<string> val = { "v", "F/(q*B*sin(a))", "B", "F", "a", "q", "v" };
		string des = "Формула, позволяющая вычислить скорость движения частицы по силе Лоренца, заряду частицы, магнитной индукции и углу между вектором магнитного поля и скоростью движения частицы";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electromagnetism" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if205", f);
	}

	{
		pair<int, int> ind(70, 0);
		vector<string> val = { "r", "m*v/(q*B)", "B", "m", "q", "r", "v" };
		string des = "Формула, позволяющая вычислить радиус движения по массе частицы, магнитной индукции, заряду и скорости движения частицы";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electromagnetism" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if206", f);
	}

	{
		pair<int, int> ind(70, 1);
		vector<string> val = { "m", "r*q*B/v", "B", "m", "q", "r", "v" };
		string des = "Формула, позволяющая вычислить массу частицы по радиусу движения, магнитной индукции, заряду и скорости движения частицы";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electromagnetism" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if207", f);
	}

	{
		pair<int, int> ind(70, 2);
		vector<string> val = { "v", "r*q*B/m", "B", "m", "q", "r", "v" };
		string des = "Формула, позволяющая вычислить скорость движения частицы по радиусу движения, массе частицы, магнитной индукции и заряду";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electromagnetism" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if208", f);
	}

	{
		pair<int, int> ind(70, 3);
		vector<string> val = { "q", "m*v/(r*B)", "B", "m", "q", "r", "v" };
		string des = "Формула, позволяющая вычислить заряд по радиусу движения, массе частицы, магнитной индукции и скорости движения частицы";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electromagnetism" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if209", f);
	}

	{
		pair<int, int> ind(70, 4);
		vector<string> val = { "B", "m*v/(r*q)", "B", "m", "q", "r", "v" };
		string des = "Формула, позволяющая вычислить магнитную индукцию по радиусу движения, массе частицы, заряду и скорости движения частицы";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electromagnetism" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if210", f);
	}

	{
		pair<int, int> ind(71, 0);
		vector<string> val = { "F", "B*S*cos(a)", "B", "F", "S", "a" };
		string des = "Формула, позволяющая вычислить магнитный поток по магнитной индукции, площади контура и углу между нормалью к контуру и вектором магнитной индукции";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electromagnetism" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if211", f);
	}

	{
		pair<int, int> ind(71, 1);
		vector<string> val = { "B", "F/(S*cos(a))", "B", "F", "S", "a" };
		string des = "Формула, позволяющая вычислить магнитную индукцию по магнитному потоку, площади контура и углу между нормалью к контуру и вектором магнитной индукции";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electromagnetism" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if212", f);
	}

	{
		pair<int, int> ind(71, 2);
		vector<string> val = { "S", "F/(B*cos(a))", "B", "F", "S", "a" };
		string des = "Формула, позволяющая вычислить прощадь контура по магнитному потоку, магнитной индукции и углу между нормалью к контуру и вектором магнитной индукции";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electromagnetism" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if213", f);
	}

	{
		pair<int, int> ind(72, 0);
		vector<string> val = { "F", "d*f/(f+d)", "F", "d", "f" };
		string des = "Формула, позволяющая вычислить фокусное расстояние линзы по расстоянию от предмета до линзы и расстоянию от линзы до изображения";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Optics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if214", f);
	}

	{
		pair<int, int> ind(72, 1);
		vector<string> val = { "d", "F*f/(f-F)", "F", "d", "f" };
		string des = "Формула, позволяющая вычислить расстояние от предмета до линзы по фокусному расстоянию и расстоянию от линзы до изображения";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Optics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if215", f);
	}

	{
		pair<int, int> ind(72, 2);
		vector<string> val = { "f", "F*d/(d-F)", "F", "d", "f" };
		string des = "Формула, позволяющая вычислить расстояние от линзы до изображения по фокусному расстоянию и расстоянию от предмета до линзы";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Optics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if216", f);
	}

	{
		pair<int, int> ind(73, 0);
		vector<string> val = { "M", "Z+N", "M", "N", "Z" };
		string des = "Формула, позволяющая вычислить масовое число по числу протонов и числу нейтронов";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Physics of the atom and atomic nucleus" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if217", f);
	}

	{
		pair<int, int> ind(73, 1);
		vector<string> val = { "Z", "M-N", "M", "N", "Z" };
		string des = "Формула, позволяющая вычислить число протонов по масовому числу и числу нейтронов";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Physics of the atom and atomic nucleus" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if218", f);
	}

	{
		pair<int, int> ind(73, 2);
		vector<string> val = { "N", "M-Z", "M", "N", "Z" };
		string des = "Формула, позволяющая вычислить число нейтронов по масовому числу и числу протонов";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Physics of the atom and atomic nucleus" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if219", f);
	}

	{
		pair<int, int> ind(74, 0);
		vector<string> val = { "M", "Ma-Z*m", "M", "Ma", "Z", "m" };
		string des = "Формула, позволяющая вычислить массу ядра по массе изотопа и числу и массе электронов";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Physics of the atom and atomic nucleus" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if220", f);
	}

	{
		pair<int, int> ind(74, 1);
		vector<string> val = { "Ma", "M+Z*m", "M", "Ma", "Z", "m" };
		string des = "Формула, позволяющая вычислить массу изотопа по массе ядра и числу и массе электронов";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Physics of the atom and atomic nucleus" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if221", f);
	}

	{
		pair<int, int> ind(74, 2);
		vector<string> val = { "Z", "(Ma-M)/m", "M", "Ma", "Z", "m" };
		string des = "Формула, позволяющая вычислить число электронов по массе изотопа, массе ядра и массе электрона";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Physics of the atom and atomic nucleus" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if222", f);
	}

	{
		pair<int, int> ind(75, 0);
		vector<string> val = { "dm", "Z*mp+N*mn-M", "M", "N", "Z", "dm", "mn", "mp" };
		string des = "Формула, позволяющая вычислить дефект масс по числу и массе протонов, числу и массе нейтронов и массе ядра";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Physics of the atom and atomic nucleus" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if223", f);
	}

	{
		pair<int, int> ind(75, 1);
		vector<string> val = { "Z", "(dm-N*mn+M)/mp", "M", "N", "Z", "dm", "mn", "mp" };
		string des = "Формула, позволяющая вычислить число протонов по дефекту масс, массе протона, числу и массе нейтронов и массе ядра";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Physics of the atom and atomic nucleus" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if224", f);
	}

	{
		pair<int, int> ind(75, 2);
		vector<string> val = { "N", "(dm-Z*mp+M)/mn", "M", "N", "Z", "dm", "mn", "mp" };
		string des = "Формула, позволяющая вычислить число нейтронов по дефекту масс, массе нейтрона, числу и массе протонов и массе ядра";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Physics of the atom and atomic nucleus" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if225", f);
	}

	{
		pair<int, int> ind(75, 3);
		vector<string> val = { "M", "Z*mp+N*mn-dm", "M", "N", "Z", "dm", "mn", "mp" };
		string des = "Формула, позволяющая вычислить массу ядра по дефекту масс, числу и массе протонов и числу и массе нейтронов";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Physics of the atom and atomic nucleus" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if226", f);
	}

	{
		pair<int, int> ind(76, 0);
		vector<string> val = { "E", "dm*c*c", "E", "c", "dm" };
		string des = "Формула, позволяющая вычислить энергию связи по изменению массы ядра и скорости света";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Physics of the atom and atomic nucleus" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if227", f);
	}

	{
		pair<int, int> ind(76, 1);
		vector<string> val = { "dm", "E/(c*c)", "E", "c", "dm" };
		string des = "Формула, позволяющая вычислить изменение массы ядра по энергии связи и скорости света";
		vector<string> tag_cl = { "#Class9", "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Physics of the atom and atomic nucleus" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if228", f);
	}

	{
		pair<int, int> ind(77, 0);
		vector<string> val = { "E", "k*x*x/2", "E", "k", "x" };
		string des = "Формула, позволяющая вычислить полную механическую энергию колебательного движения по жесткости пружины и амплитуде колебаний";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if229", f);
	}

	{
		pair<int, int> ind(77, 1);
		vector<string> val = { "k", "2*E/(x*x)", "E", "k", "x" };
		string des = "Формула, позволяющая вычислить жесткоть пружины по полной механической энергии колебательного движения и амплитуде колебаний";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if230", f);
	}

	{
		pair<int, int> ind(77, 2);
		vector<string> val = { "x", "sqrt(2*E/k)", "E", "k", "x" };
		string des = "Формула, позволяющая вычислить амплитуду колебаний по полной механической энергии колебательного движения и жесткости пружины";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if231", f);
	}

	{
		pair<int, int> ind(78, 0);
		vector<string> val = { "R", "2*G*M/(c*c)", "G", "M", "R", "c" };
		string des = "Формула, позволяющая вычислить радиус Шварцшильда по графитвационной постоянной, массе черной дыры и скорости света";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if232", f);
	}

	{
		pair<int, int> ind(79, 0);
		vector<string> val = { "t", "T/(sqrt(1-v*v/(c*c))", "T", "c", "t", "v" };
		string des = "Формула, позволяющая вычислить собственное время по времени в движущейся системе отсчета, скорости движущейся системы отсчета и скорости света";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if233", f);
	}

	{
		pair<int, int> ind(79, 1);
		vector<string> val = { "T", "t*(sqrt(1-v*v/(c*c))", "T", "c", "t", "v" };
		string des = "Формула, позволяющая вычислить время в движущейся системе отсчета по собственному времени, скорости движущейся системы отсчета и скорости света";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if234", f);
	}

	{
		pair<int, int> ind(79, 2);
		vector<string> val = { "v", "sqrt(t*t-T*T)/(t*c)", "T", "c", "t", "v" };
		string des = "Формула, позволяющая вычислить скорость движущейся системы отсчета по собственному времени, времени в движущейся системе отсчета и скорости света";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if235", f);
	}

	{
		pair<int, int> ind(80, 0);
		vector<string> val = { "m", "m0/(sqrt(1-v*v/(c*c))", "c", "m", "m0", "v" };
		string des = "Формула, позволяющая вычислить массу тела в СО, относительно которой оно покоится по массе тела в подвижной СО, скорости движущейся СО и скорости света";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if236", f);
	}

	{
		pair<int, int> ind(80, 1);
		vector<string> val = { "m0", "m0*(sqrt(1-v*v/(c*c))", "c", "m", "m0", "v" };
		string des = "Формула, позволяющая вычислить массу тела в подвижной СО по массе тела в СО, относительно которой оно покоится, скорости движущейся СО и скорости света";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if237", f);
	}

	{
		pair<int, int> ind(80, 2);
		vector<string> val = { "v", "sqrt(m*m-m0*m0)/(t*c)", "c", "m", "m0", "v" };
		string des = "Формула, позволяющая вычислить скорость движущейся СО по массе тела в СО, относительно которой оно покоится, массе тела в подвижной СО и скорости света";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Classic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if238", f);
	}

	{
		pair<int, int> ind(81, 0);
		vector<string> val = { "E", "m*c*c", "E", "c", "m" };
		string des = "Формула, позволяющая вычислить энергию по массе и скорости света";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Relativistic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if239", f);
	}

	{
		pair<int, int> ind(81, 1);
		vector<string> val = { "m", "E/(c*c)", "E", "c", "m" };
		string des = "Формула, позволяющая вычислить массу по энергии и скорости света";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Mechanics", "#Relativistic" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if240", f);
	}

	{
		pair<int, int> ind(82, 0);
		vector<string> val = { "p", "m*R*T/(M*V)", "M", "R", "T", "V", "m", "p" };
		string des = "Формула, позволяющая вычислить давление идеального газа по его объему, массе, молярной массе, температуре и молярной газовой постоянной";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Molecular physics and thermodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if241", f);
	}

	{
		pair<int, int> ind(82, 1);
		vector<string> val = { "m", "p*M*V/(R*T)", "M", "R", "T", "V", "m", "p" };
		string des = "Формула, позволяющая вычислить массу идеального газа по его объему, давлению, молярной массе, температуре и молярной газовой постоянной";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Molecular physics and thermodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if242", f);
	}

	{
		pair<int, int> ind(82, 2);
		vector<string> val = { "T", "p*M*V/(m*R)", "M", "R", "T", "V", "m", "p" };
		string des = "Формула, позволяющая вычислить температуру идеального газа по его объему, массе, молярной массе, давлению и молярной газовой постоянной";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Molecular physics and thermodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if243", f);
	}

	{
		pair<int, int> ind(82, 3);
		vector<string> val = { "M", "m*R*T/(p*V)", "M", "R", "T", "V", "m", "p" };
		string des = "Формула, позволяющая вычислить молярную массу идеального газа по его объему, массе, давлению, температуре и молярной газовой постоянной";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Molecular physics and thermodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if244", f);
	}

	{
		pair<int, int> ind(82, 4);
		vector<string> val = { "V", "m*R*T/(p*M)", "M", "R", "T", "V", "m", "p" };
		string des = "Формула, позволяющая вычислить объем идеального газа по его давлению, массе, молярной массе, температуре и молярной газовой постоянной";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Molecular physics and thermodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if245", f);
	}

	{
		pair<int, int> ind(83, 0);
		vector<string> val = { "U", "i*v*R*T/2", "R", "T", "U", "i", "v" };
		string des = "Формула, позволяющая вычислить внутреннюю энергию идеального газа по количеству моль газа, его температуре, универсальной газовой постоянной и количеству степеней свободы молекулы газа";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Molecular physics and thermodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if246", f);
	}

	{
		pair<int, int> ind(83, 1);
		vector<string> val = { "v", "2*U/(i*R*T)", "R", "T", "U", "i", "v" };
		string des = "Формула, позволяющая вычислить количество моль идеального газа по его внутренней энергии, температуре, универсальной газовой постоянной и количеству степеней свободы молекулы газа";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Molecular physics and thermodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if247", f);
	}

	{
		pair<int, int> ind(83, 2);
		vector<string> val = { "T", "2*U/(i*v*R)", "R", "T", "U", "i", "v" };
		string des = "Формула, позволяющая вычислить температуру идеального газа по количеству моль газа, его внутренней энергии, универсальной газовой постоянной и количеству степеней свободы молекулы газа";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Molecular physics and thermodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if248", f);
	}

	{
		pair<int, int> ind(84, 0);
		vector<string> val = { "U", "i*p*V/2", "U", "V", "i", "p" };
		string des = "Формула, позволяющая вычислить внутреннюю энергию идеального газа по его давлению, объему и количеству степеней свободы молекулы газа";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Molecular physics and thermodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if249", f);
	}

	{
		pair<int, int> ind(84, 1);
		vector<string> val = { "p", "2*U/(i*V)", "U", "V", "i", "p" };
		string des = "Формула, позволяющая вычислить давление идеального газа по его внутренней энергии, объему и количеству степеней свободы молекулы газа";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Molecular physics and thermodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if250", f);
	}

	{
		pair<int, int> ind(84, 2);
		vector<string> val = { "V", "2*U/(i*p)", "U", "V", "i", "p" };
		string des = "Формула, позволяющая вычислить объем идеального газа по его внутренней энергии, давлению и количеству степеней свободы молекулы газа";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Molecular physics and thermodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if251", f);
	}

	{
		pair<int, int> ind(85, 0);
		vector<string> val = { "A", "p*dV", "A", "dV", "p" };
		string des = "Формула, позволяющая вычислить работу, совершаемую газом по его давлению и изменению объема";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Molecular physics and thermodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if252", f);
	}

	{
		pair<int, int> ind(85, 1);
		vector<string> val = { "p", "A/dV", "A", "dV", "p" };
		string des = "Формула, позволяющая вычислить давление по работе, совершаемой газом и изменению объема";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Molecular physics and thermodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if253", f);
	}

	{
		pair<int, int> ind(85, 2);
		vector<string> val = { "dV", "A/p", "A", "dV", "p" };
		string des = "Формула, позволяющая вычислить изменение объема по работе, совершаемой газом и давлению";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Molecular physics and thermodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if254", f);
	}

	{
		pair<int, int> ind(86, 0);
		vector<string> val = { "Q", "dU+A", "A", "Q", "dU" };
		string des = "Формула, позволяющая вычислить количество теплоты по работе газа и изменению его внутренней энергии";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Molecular physics and thermodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if255", f);
	}

	{
		pair<int, int> ind(86, 1);
		vector<string> val = { "dU", "Q-A", "A", "Q", "dU" };
		string des = "Формула, позволяющая вычислить изменение внутренней энергии газа по количеству теплоты и работе газа";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Molecular physics and thermodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if256", f);
	}

	{
		pair<int, int> ind(86, 2);
		vector<string> val = { "A", "Q-dU", "A", "Q", "dU" };
		string des = "Формула, позволяющая вычислить работу газа по изменению его внутренней энергии и количеству теплоты";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Molecular physics and thermodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if257", f);
	}

	{
		pair<int, int> ind(87, 0);
		vector<string> val = { "F", "sigma*l", "F", "l", "sigma" };
		string des = "Формула, позволяющая вычислить силу поверхностного натяжения по поверхностному натяжение и длине участка поверхности слоя";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Molecular physics and thermodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if258", f);
	}

	{
		pair<int, int> ind(87, 1);
		vector<string> val = { "sigma", "F/l", "F", "l", "sigma" };
		string des = "Формула, позволяющая вычислить поверхностное натяжение по силе поверхностного натяжения и длине участка поверхности слоя";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Molecular physics and thermodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if259", f);
	}

	{
		pair<int, int> ind(87, 2);
		vector<string> val = { "l", "F/sigma", "F", "l", "sigma" };
		string des = "Формула, позволяющая вычислить длину участка поверхности слоя по силе поверхностного натяжения и поверхностному натяжению";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Molecular physics and thermodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if260", f);
	}

	{
		pair<int, int> ind(88, 0);
		vector<string> val = { "sigma", "E*e", "E", "e", "sigma" };
		string des = "Формула, позволяющая вычислить механическое напряжение по модулю Юнга и относительному удлинению тела";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Molecular physics and thermodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if261", f);
	}

	{
		pair<int, int> ind(88, 1);
		vector<string> val = { "E", "sigma/e", "E", "e", "sigma" };
		string des = "Формула, позволяющая вычислить модуль Юнга по механическому напряжению и относительному удлинению тела";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Molecular physics and thermodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if262", f);
	}

	{
		pair<int, int> ind(88, 2);
		vector<string> val = { "e", "sigma/E", "E", "e", "sigma" };
		string des = "Формула, позволяющая вычислить относительное удлинение тела по механическому напряжению и модулю Юнга";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Molecular physics and thermodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if263", f);
	}

	{
		pair<int, int> ind(89, 0);
		vector<string> val = { "F", "k*q1*q2/(r*r)", "F", "k", "q1", "q2", "r" };
		string des = "Формула, позволяющая вычислить силу Кулона по величине зарядов, расстоянию между ними и коэффициенту пропорциональности";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if264", f);
	}

	{
		pair<int, int> ind(89, 1);
		vector<string> val = { "q1", "F*r*r/(k*q2)", "F", "k", "q1", "q2", "r" };
		string des = "Формула, позволяющая вычислить величину первого заряда по силе Кулона, величине второго заряда, расстоянию между ними и коэффициенту пропорциональности";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if265", f);
	}

	{
		pair<int, int> ind(89, 2);
		vector<string> val = { "q2", "F*r*r/(k*q1)", "F", "k", "q1", "q2", "r" };
		string des = "Формула, позволяющая вычислить величину второго заряда по силе Кулона, величине первого заряда, расстоянию между ними и коэффициенту пропорциональности";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if266", f);
	}

	{
		pair<int, int> ind(89, 3);
		vector<string> val = { "r", "sqrt(k*q1*q2/F)", "F", "k", "q1", "q2", "r" };
		string des = "Формула, позволяющая вычислить расстояние между зарядами по силе Кулона, величине зарядов и коэффициенту пропорциональности";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if267", f);
	}

	{
		pair<int, int> ind(90, 0);
		vector<string> val = { "E", "F/q", "E", "F", "q" };
		string des = "Формула, позволяющая вычислить напряженность поля по пробному положительному заряду и силе Кулона";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if268", f);
	}

	{
		pair<int, int> ind(90, 1);
		vector<string> val = { "F", "E*q", "E", "F", "q" };
		string des = "Формула, позволяющая вычислить силу Кулона по напряженности поля и пробному положительному заряду";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if269", f);
	}

	{
		pair<int, int> ind(90, 2);
		vector<string> val = { "q", "F/E", "E", "F", "q" };
		string des = "Формула, позволяющая вычислить пробный положительный заряд по напряженности поля и силе Кулона";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if270", f);
	}

	{
		pair<int, int> ind(91, 0);
		vector<string> val = { "E", "k*q/(r*r)", "E", "k", "q", "r" };
		string des = "Формула, позволяющая вычислить напряженность поля точечного заряда по пробному положительному заряду, расстоянию от заряда до точки поля и коэффициенту пропорциональности";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if271", f);
	}

	{
		pair<int, int> ind(91, 1);
		vector<string> val = { "q", "E*r*r/k", "E", "k", "q", "r" };
		string des = "Формула, позволяющая вычислить пробный положительный заряд по напряженности поля точечного заряда, расстоянию от заряда до точки поля и коэффициенту пропорциональности";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if272", f);
	}

	{
		pair<int, int> ind(91, 2);
		vector<string> val = { "r", "sqrt(k*q/E)", "E", "k", "q", "r" };
		string des = "Формула, позволяющая вычислить расстояние от заряда до точки поля по напряженности поля точечного заряда, пробному положительному заряду и коэффициенту пропорциональности";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if273", f);
	}

	{
		pair<int, int> ind(92, 0);
		vector<string> val = { "fi", "W/q", "W", "fi", "q" };
		string des = "Формула, позволяющая вычислить потенциал электростатического поля по энергии и заряду";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if274", f);
	}

	{
		pair<int, int> ind(92, 1);
		vector<string> val = { "W", "fi*q", "W", "fi", "q" };
		string des = "Формула, позволяющая вычислить энергию по потенциалу электростатического поля и заряду";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if275", f);
	}

	{
		pair<int, int> ind(92, 2);
		vector<string> val = { "q", "W/fi", "W", "fi", "q" };
		string des = "Формула, позволяющая вычислить заряд по потенциалу электростатического поля и энергии";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if276", f);
	}

	{
		pair<int, int> ind(93, 0);
		vector<string> val = { "fi", "q/(4*pi*e*r)", "e", "fi", "pi", "q", "r" };
		string des = "Формула, позволяющая вычислить потенциал поля точечного заряда по заряду, диэлектрической проницаемости и расстоянию от заряда до точки";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if277", f);
	}

	{
		pair<int, int> ind(93, 1);
		vector<string> val = { "q", "fi*4*pi*e*r", "e", "fi", "pi", "q", "r" };
		string des = "Формула, позволяющая вычислить заряд по потенциалу поля точечного заряда, диэлектрической проницаемости и расстоянию от заряда до точки";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if278", f);
	}

	{
		pair<int, int> ind(93, 2);
		vector<string> val = { "r", "q/(4*pi*e*fi)", "e", "fi", "pi", "q", "r" };
		string des = "Формула, позволяющая вычислить расстояние от заряда до точки по потенциалу поля точечного заряда, заряду и диэлектрической проницаемости";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if279", f);
	}

	{
		pair<int, int> ind(93, 3);
		vector<string> val = { "e", "q/(4*pi*r*fi)", "e", "fi", "pi", "q", "r" };
		string des = "Формула, позволяющая вычислить диэлектрическую проницаемость по потенциалу поля точечного заряда, заряду и расстоянию от заряда до точки";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if280", f);
	}

	{
		pair<int, int> ind(94, 0);
		vector<string> val = { "U", "E*d", "E", "U", "d" };
		string des = "Формула, позволяющая вычислить разность потенциалов по напряженности поля и расстоянию между точками";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if281", f);
	}

	{
		pair<int, int> ind(94, 1);
		vector<string> val = { "E", "U/d", "E", "U", "d" };
		string des = "Формула, позволяющая вычислить напряженность поля по разности потенциалов и расстоянию между точками";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if282", f);
	}

	{
		pair<int, int> ind(94, 2);
		vector<string> val = { "d", "U/E", "U", "d", "e" };
		string des = "Формула, позволяющая вычислить расстояние между точками по разности потенциалов и напряженности поля";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if283", f);
	}

	{
		pair<int, int> ind(95, 0);
		vector<string> val = { "C", "q/fi", "C", "fi", "q" };
		string des = "Формула, позволяющая вычислить электроемкость уединенного проводника по потенциалу и заряду";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if284", f);
	}

	{
		pair<int, int> ind(95, 1);
		vector<string> val = { "q", "C*fi", "C", "fi", "q" };
		string des = "Формула, позволяющая вычислить заряд по электроемкости уединенного проводника и потенциалу";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if285", f);
	}

	{
		pair<int, int> ind(95, 2);
		vector<string> val = { "fi", "q/C", "C", "fi", "q" };
		string des = "Формула, позволяющая вычислить потенциал по электроемкости уединенного проводника и заряду";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if286", f);
	}

	{
		pair<int, int> ind(96, 0);
		vector<string> val = { "C", "q/U", "C", "U", "q" };
		string des = "Формула, позволяющая вычислить электроемкость конденсатора по разности потенциалов и заряду";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if287", f);
	}

	{
		pair<int, int> ind(96, 1);
		vector<string> val = { "q", "C*U", "C", "U", "q" };
		string des = "Формула, позволяющая вычислить заряд по электроемкости конденсатора и разности потенциалов";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if288", f);
	}

	{
		pair<int, int> ind(96, 2);
		vector<string> val = { "U", "q/C", "C", "U", "q" };
		string des = "Формула, позволяющая вычислить разность потенциалов по электроемкости конденсатора и заряду";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if289", f);
	}

	{
		pair<int, int> ind(97, 0);
		vector<string> val = { "W", "C*U*U/2", "C", "U", "W" };
		string des = "Формула, позволяющая вычислить энергию ЭСП по электроемкости и разности потенциалов";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if290", f);
	}

	{
		pair<int, int> ind(97, 1);
		vector<string> val = { "C", "2*W/U*U", "C", "U", "W" };
		string des = "Формула, позволяющая вычислить электроемкость по энергии ЭСП и разности потенциалов";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if291", f);
	}

	{
		pair<int, int> ind(97, 2);
		vector<string> val = { "U", "sqrt(2*W/C)", "C", "U", "W" };
		string des = "Формула, позволяющая вычислить разность потенциалов по энергии ЭСП и электроемкости";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Electrostatics and electrodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if292", f);
	}

	{
		pair<int, int> ind(98, 0);
		vector<string> val = { "b", "a*(n-1)", "a", "b", "n" };
		string des = "Формула, позволяющая вычислить угол отклонения по углу падения и показателю преломления среды";
		vector<string> tag_cl = { "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Optics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if293", f);
	}

	{
		pair<int, int> ind(98, 1);
		vector<string> val = { "a", "b/(n-1)", "a", "b", "n" };
		string des = "Формула, позволяющая вычислить угол падения по углу отклонения и показателю преломления среды";
		vector<string> tag_cl = { "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Optics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if294", f);
	}

	{
		pair<int, int> ind(98, 2);
		vector<string> val = { "n", "b/a+1", "a", "b", "n" };
		string des = "Формула, позволяющая вычислить показатель преломления среды по углу отклонения и углу падения";
		vector<string> tag_cl = { "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Optics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if295", f);
	}

	{
		pair<int, int> ind(99, 0);
		vector<string> val = { "G", "H/h", "G", "H", "h" };
		string des = "Формула, позволяющая вычислить линейное увеличение оптической системы по размеру изображения и размеру предмета";
		vector<string> tag_cl = { "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Optics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if296", f);
	}

	{
		pair<int, int> ind(99, 1);
		vector<string> val = { "H", "G*h", "G", "H", "h" };
		string des = "Формула, позволяющая вычислить размер изображения по линейному увеличению оптической системы и размеру предмета";
		vector<string> tag_cl = { "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Optics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if297", f);
	}

	{
		pair<int, int> ind(99, 2);
		vector<string> val = { "h", "H/G", "G", "H", "h" };
		string des = "Формула, позволяющая вычислить размер предмета по линейному увеличению оптической системы и размеру изображения";
		vector<string> tag_cl = { "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Optics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if298", f);
	}

	{
		pair<int, int> ind(100, 0);
		vector<string> val = { "dt", "m*T", "T", "dt", "m" };
		string des = "Формула, позволяющая вычислить максимальную результирующую интенсивность по периоду колебаний";
		vector<string> tag_cl = { "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Vibrations and waves" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if299", f);
	}

	{
		pair<int, int> ind(100, 1);
		vector<string> val = { "T", "dt/m", "T", "dt", "m" };
		string des = "Формула, позволяющая вычислить период колебаний по максимальной результирующей интенсивности";
		vector<string> tag_cl = { "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Vibrations and waves" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if300", f);
	}

	{
		pair<int, int> ind(101, 0);
		vector<string> val = { "dt", "(2*m+1)*T/2", "T", "dt", "m" };
		string des = "Формула, позволяющая вычислить минимальную результирующую интенсивность по периоду колебаний";
		vector<string> tag_cl = { "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Vibrations and waves" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if301", f);
	}

	{
		pair<int, int> ind(101, 1);
		vector<string> val = { "T", "2*dt/(2*m+1)", "T", "dt", "m" };
		string des = "Формула, позволяющая вычислить период колебаний по минимальной результирующей интенсивности";
		vector<string> tag_cl = { "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Vibrations and waves" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if302", f);
	}

	{
		pair<int, int> ind(102, 0);
		vector<string> val = { "delta", "m*lambda", "delta", "lambda", "m" };
		string des = "Формула, позволяющая вычислить геометрическую разность хода интерферирующих волн по длине волны";
		vector<string> tag_cl = { "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Vibrations and waves" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if303", f);
	}

	{
		pair<int, int> ind(102, 1);
		vector<string> val = { "lambda", "delta/m", "delta", "lambda", "m" };
		string des = "Формула, позволяющая вычислить длину волны по геометрической разности хода интерферирующих волн";
		vector<string> tag_cl = { "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Vibrations and waves" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if304", f);
	}

	{
		pair<int, int> ind(102, 2);
		vector<string> val = { "delta", "(2*m+1)*lambda/2", "delta", "lambda", "m" };
		string des = "Формула, позволяющая вычислить геометрическую разность хода интерферирующих волн по длине волны при условии интерференционного минимума";
		vector<string> tag_cl = { "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Vibrations and waves" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if305", f);
	}

	{
		pair<int, int> ind(102, 3);
		vector<string> val = { "lambda", "2*delta/(2*m+1)", "delta", "lambda", "m" };
		string des = "Формула, позволяющая вычислить длину волны по геометрической разности хода интерферирующих волн при условии интерференционного минимума";
		vector<string> tag_cl = { "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Vibrations and waves" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if306", f);
	}

	{
		pair<int, int> ind(103, 0);
		vector<string> val = { "A", "m*lambda/sin(a)", "A", "a", "lambda", "m" };
		string des = "Формула, позволяющая вычислить ширину щели по длине волны";
		vector<string> tag_cl = { "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Vibrations and waves" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if307", f);
	}

	{
		pair<int, int> ind(103, 1);
		vector<string> val = { "lambda", "A*sin(a)/m", "A", "a", "lambda", "m" };
		string des = "Формула, позволяющая вычислить длину волны по ширине щели";
		vector<string> tag_cl = { "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Vibrations and waves" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if308", f);
	}

	{
		pair<int, int> ind(104, 0);
		vector<string> val = { "d", "m*lambda/sin(a)", "a", "d", "lambda", "m" };
		string des = "Формула, позволяющая вычислить период решетки по длине волны";
		vector<string> tag_cl = { "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Vibrations and waves" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if309", f);
	}

	{
		pair<int, int> ind(104, 1);
		vector<string> val = { "lambda", "d*sin(a)/m", "a", "d", "lambda", "m" };
		string des = "Формула, позволяющая вычислить длину волны по периоду решетки";
		vector<string> tag_cl = { "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Vibrations and waves" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if310", f);
	}

	{
		pair<int, int> ind(105, 0);
		vector<string> val = { "E", "h*v", "E", "h", "v" };
		string des = "Формула, позволяющая вычислить энергию кванта излучения по частоте излучения и постоянной Планка";
		vector<string> tag_cl = { "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Quantum Physics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if311", f);
	}

	{
		pair<int, int> ind(105, 1);
		vector<string> val = { "v", "E/h", "E", "h", "v" };
		string des = "Формула, позволяющая вычислить частоту излучения по энергии кванта излучения и постоянной Планка";
		vector<string> tag_cl = { "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Quantum Physics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if312", f);
	}

	{
		pair<int, int> ind(106, 0);
		vector<string> val = { "lambda", "b/T", "T", "b", "lambda" };
		string des = "Формула, позволяющая вычислить длину волны по постоянной Вина и температуре черного тела";
		vector<string> tag_cl = { "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Quantum Physics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if313", f);
	}

	{
		pair<int, int> ind(106, 1);
		vector<string> val = { "T", "b/lambda", "T", "b", "lambda" };
		string des = "Формула, позволяющая вычислить температуру черного тела по длине волны и постоянной Вина";
		vector<string> tag_cl = { "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Quantum Physics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if314", f);
	}

	{
		pair<int, int> ind(107, 0);
		vector<string> val = { "R", "sigma*pow(T,4)", "R", "T", "sigma" };
		string des = "Формула, позволяющая вычислить интегральную светимость абсолютно черного тела по постоянной Стефана-Больцмана и абсолютной температуре черного тела";
		vector<string> tag_cl = { "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Quantum Physics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if315", f);
	}

	{
		pair<int, int> ind(108, 0);
		vector<string> val = { "E", "A+U*e", "A", "E", "U", "e" };
		string des = "Формула, позволяющая вычислить энергию одного фотона по работе выхода, разности потенциалов и заряду электрона";
		vector<string> tag_cl = { "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Quantum Physics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if316", f);
	}

	{
		pair<int, int> ind(108, 1);
		vector<string> val = { "A", "E-U*e", "A", "E", "U", "e" };
		string des = "Формула, позволяющая вычислить работу выхода по энергии одного фотона, разности потенциалов и заряду электрона";
		vector<string> tag_cl = { "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Quantum Physics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if317", f);
	}

	{
		pair<int, int> ind(108, 2);
		vector<string> val = { "U", "(E-A)/e", "A", "E", "U", "e" };
		string des = "Формула, позволяющая вычислить разность потенциалов по энергии одного фотона, работе выхода и заряду электрона";
		vector<string> tag_cl = { "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Quantum Physics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if318", f);
	}

	{
		pair<int, int> ind(109, 0);
		vector<string> val = { "v", "(A+U*e)/h", "A", "U", "e", "h", "v" };
		string des = "Формула, позволяющая вычислить частоту излучения по работе выхода, разности потенциалов, заряду электрона и постоянной Планка";
		vector<string> tag_cl = { "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Quantum Physics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if319", f);
	}

	{
		pair<int, int> ind(109, 1);
		vector<string> val = { "A", "h*v-U*e", "A", "U", "e", "h", "v" };
		string des = "Формула, позволяющая вычислить работу выхода по частоте излучения, разности потенциалов, заряду электрона и постоянной Планка";
		vector<string> tag_cl = { "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Quantum Physics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if320", f);
	}

	{
		pair<int, int> ind(109, 2);
		vector<string> val = { "U", "(h*v-A)/e", "A", "U", "e", "h", "v" };
		string des = "Формула, позволяющая вычислить разность потенциалов по частоте излучения, работе выхода, заряду электрона и постоянной Планка";
		vector<string> tag_cl = { "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Quantum Physics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if321", f);
	}

	{
		pair<int, int> ind(110, 0);
		vector<string> val = { "E", "A+m*v*v/2", "A", "E", "m", "v" };
		string des = "Формула, позволяющая вычислить энергию фотона по его массе и скорости и работе выхода";
		vector<string> tag_cl = { "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Quantum Physics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if322", f);
	}

	{
		pair<int, int> ind(110, 1);
		vector<string> val = { "A", "E-m*v*v/2", "A", "E", "m", "v" };
		string des = "Формула, позволяющая вычислить работу выхода по энергии фотона, его массе и скорости";
		vector<string> tag_cl = { "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Quantum Physics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if323", f);
	}

	{
		pair<int, int> ind(110, 2);
		vector<string> val = { "m", "2*(E-A)/v*v", "A", "E", "m", "v" };
		string des = "Формула, позволяющая вычислить массу фотона по его энергии и скорости и работе выхода";
		vector<string> tag_cl = { "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Quantum Physics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if324", f);
	}

	{
		pair<int, int> ind(110, 3);
		vector<string> val = { "v", "sqrt(2*(E-A)/m)", "A", "E", "m", "v" };
		string des = "Формула, позволяющая вычислить скорость фотона по его энергии и массе и работе выхода";
		vector<string> tag_cl = { "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Quantum Physics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if325", f);
	}

	{
		pair<int, int> ind(111, 0);
		vector<string> val = { "v", "(A+m*V*V/2)/h", "A", "V", "h", "m", "v" };
		string des = "Формула, позволяющая вычислить частоту излучения по энергии фотона, его массе и скорости, работе выхода и постоянной Планка";
		vector<string> tag_cl = { "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Quantum Physics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if326", f);
	}

	{
		pair<int, int> ind(111, 1);
		vector<string> val = { "A", "h*v-m*V*V/2", "A", "V", "h", "m", "v" };
		string des = "Формула, позволяющая вычислить работу выхода по частоте излучения, энергии фотона, его массе и скорости и постоянной Планка";
		vector<string> tag_cl = { "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Quantum Physics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if327", f);
	}

	{
		pair<int, int> ind(111, 2);
		vector<string> val = { "m", "2*(h*v-A)/V*V", "A", "V", "h", "m", "v" };
		string des = "Формула, позволяющая вычислить массу фотона по частоте излучения, скорости и энергии фотона, работе выхода и постоянной Планка";
		vector<string> tag_cl = { "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Quantum Physics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if328", f);
	}

	{
		pair<int, int> ind(111, 3);
		vector<string> val = { "V", "sqrt(2*(h*v-A)/m)", "A", "V", "h", "m", "v" };
		string des = "Формула, позволяющая вычислить скорость фотона по частоте излучения, массе и энергии фотона, работе выхода и постоянной Планка";
		vector<string> tag_cl = { "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Quantum Physics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if329", f);
	}

	{
		pair<int, int> ind(112, 0);
		vector<string> val = { "D", "E/m", "D", "E", "m" };
		string des = "Формула, позволяющая вычислить дозу поглощенного излучения по энергии излучения и массе тела";
		vector<string> tag_cl = { "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Quantum Physics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if330", f);
	}

	{
		pair<int, int> ind(112, 1);
		vector<string> val = { "E", "D*m", "D", "E", "m" };
		string des = "Формула, позволяющая вычислить энергию излучения по дозе поглощенного излучения и массе тела";
		vector<string> tag_cl = { "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Quantum Physics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if331", f);
	}

	{
		pair<int, int> ind(112, 2);
		vector<string> val = { "m", "E/D", "D", "E", "m" };
		string des = "Формула, позволяющая вычислить массу тела по дозе поглощенного излучения и энергии излучения";
		vector<string> tag_cl = { "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Quantum Physics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if332", f);
	}

	{
		pair<int, int> ind(113, 0);
		vector<string> val = { "H", "D*k", "D", "H", "k" };
		string des = "Формула, позволяющая вычислить эквивалентную дозу поглощенного излучения по дозе поглощенного излучения и коэффициенту качества";
		vector<string> tag_cl = { "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Quantum Physics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if333", f);
	}

	{
		pair<int, int> ind(113, 1);
		vector<string> val = { "D", "H/k", "D", "H", "k" };
		string des = "Формула, позволяющая вычислить дозу поглощенного излучения по эквивалентной дозе поглощенного излучения и коэффициенту качества";
		vector<string> tag_cl = { "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Quantum Physics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if334", f);
	}

	{
		pair<int, int> ind(113, 2);
		vector<string> val = { "k", "H/D", "D", "H", "k" };
		string des = "Формула, позволяющая вычислить коэффициент качества по эквивалентной дозе поглощенного излучения и дозе поглощенного излучения";
		vector<string> tag_cl = { "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Quantum Physics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if335", f);
	}

	{
		pair<int, int> ind(114, 0);
		vector<string> val = { "p", "2*n*E/3", "E", "n", "p" };
		string des = "Формула, позволяющая вычислить давление идеального газа по средней кинетической энергии и концентрации молекул";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Molecular physics and thermodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if336", f);
	}

	{
		pair<int, int> ind(114, 1);
		vector<string> val = { "n", "3*p/(2*E)", "E", "n", "p" };
		string des = "Формула, позволяющая вычислить концентрацию молекул по давлению идеального газа и средней кинетической энергии молекул";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Molecular physics and thermodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if337", f);
	}

	{
		pair<int, int> ind(114, 2);
		vector<string> val = { "E", "3*p/(2*n)", "E", "n", "p" };
		string des = "Формула, позволяющая вычислить среднюю кинетическую энергию молекул по давлению идеального газа и концентрации молекул";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Molecular physics and thermodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if338", f);
	}

	{
		pair<int, int> ind(115, 0);
		vector<string> val = { "E", "3*k*T/2", "E", "T", "k" };
		string des = "Формула, позволяющая вычислить среднюю кинетическую энергию молекул по абсолютной температуре и постоянной Больцмана";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Molecular physics and thermodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if339", f);
	}

	{
		pair<int, int> ind(115, 1);
		vector<string> val = { "T", "2*E/(3*k)", "E", "T", "k" };
		string des = "Формула, позволяющая вычислить абсолютную температуру по средней кинетической энергии молекул и постоянной Больцмана";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Molecular physics and thermodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if340", f);
	}

	{
		pair<int, int> ind(116, 0);
		vector<string> val = { "p", "n*k*T", "T", "k", "n", "p" };
		string des = "Формула, позволяющая вычислить давление идеального газа по концентрации молекул, абсолютной температуре и постоянной Больцмана";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Molecular physics and thermodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if341", f);
	}

	{
		pair<int, int> ind(116, 1);
		vector<string> val = { "n", "p/(k*T)", "T", "k", "n", "p" };
		string des = "Формула, позволяющая вычислить концентрацию молекул по давлению идеального газа, абсолютной температуре и постоянной Больцмана";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Molecular physics and thermodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if342", f);
	}

	{
		pair<int, int> ind(116, 2);
		vector<string> val = { "T", "p/(n*k)", "T", "k", "n", "p" };
		string des = "Формула, позволяющая вычислить абсолютную температуру по давлению идеального газа, концентрации молекул и постоянной Больцмана";
		vector<string> tag_cl = { "#Class10", "#Class11" };
		vector <string> tag_loc = { "#Physics", "#Molecular physics and thermodynamics" };
		Form f(ind, val, des, tag_cl, tag_loc);
		form_.emplace("if343", f);
	}
}