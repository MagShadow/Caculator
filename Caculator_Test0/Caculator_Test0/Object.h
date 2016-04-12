#pragma once

#include "stdafx.h"

struct Object
{
	std::string op;
	double num;
	int f;	//f表征是运算符还是数，1代表数，2代表运算符符
};