#pragma once

#include "stdafx.h"
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;
class Lexer
{
public:
	Lexer();
	string getToken();
	int count;
};