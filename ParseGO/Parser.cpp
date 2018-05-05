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

	if (package.compare("package")) {
		result = "Package found";
		return result;
	}
	else
	{
		cout << "Didnt work";
		return 0;
	}
}

string Parser::lookImport()
{
	string import;
	string literal;
	string result;
	Lexer lex;
	
	//Used to see if if import could be found
	/*
	if (import.compare("import")) {
		result = "Import found";
		return result;
	}
	else
	{
		cout << "Didnt work";
		return 0;
	}
	
	
	do {
		import = lex.getToken();
		result = "Import found";
		return result;
	} while (import.compare("import"));
	*/

	import = lex.getToken();
	while (import.compare("import")) {
		result = "Import found";
		return result;
		import = lex.getToken();

		if (import.compare("import")) {
			result = "import found";
			return result;
		}
		else
		{
			cout << "Import not found";
			return 0;
		}
	}
}
Parser::~Parser()
{
}

