// ParseGO.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Lexer.h"
#include "Parser.h"
#include <cstdlib>
#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
	Parser par;
	cout << par.lookPackage();
	cin.get();

	
}

