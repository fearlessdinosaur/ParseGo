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
	string ex;
	
	Parser parse;
	ex = parse.lookPackage();
	cout << ex;

	cin.get();

	
}

