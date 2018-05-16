#include "stdafx.h"
#include "Parser.h"
#include "Lexer.h"
#include "Tree.h"
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <fstream>
#include <list>



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

	if (toke.compare("import") == 1)
	{
		cout << toke;
		res = lookImport();
		return res;
	}

	if (toke.compare("EOF") == 1)
	{
		return "END";
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
	result = lex.getToken();
	Tree tree = Tree();
	tree.CreateNode(result, tree.package);
	return result;
}

string Parser::lookImport()
{
	string result;
	
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

	result = lex.getToken();
	Tree tree = Tree();
	tree.CreateNode(result, tree.Imports);
	return result;
}
Parser::~Parser()
{
}

