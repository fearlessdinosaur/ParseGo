#include "stdafx.h"
#include "Parser.h"
#include "Lexer.h"
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <fstream>

Parser::Parser()
{

}

string Parser::lookPackage()
{
	string package;
	string literal;
	string result;
	Lexer lex;
	package = lex.getToken();

	if (package.compare("package") == 0) {
		result = "Package found";
		return result;
	}
	else
	{
		cout << "Didnt work";
		return 0;
	}
}

Parser::~Parser()
{
}

