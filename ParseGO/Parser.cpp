#include "stdafx.h"
#include "Parser.h"
#include "Lexer.h"
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <fstream>

Lexer lex;
Parser::Parser()
{

}

string Parser::getNext()
{
	string toke;
	string res;
	toke = lex.getToken();

	if (toke.compare("package")==1)
	{	
		cout << toke;
		res=lookPackage();
		return res;
	}
	return res;
}

string Parser::lookPackage()
{
	string result;
	/*
	string package;
	string literal;
	
	package = lex.getToken();

	if (package.compare("package")) {
		result = "Package found";
		return result;
	}
	else
	{
		cout << "Didnt work";
		return 0;
	}
	*/
	result ="	-->"+ lex.getToken();
	return result;
}

Parser::~Parser()
{
}

