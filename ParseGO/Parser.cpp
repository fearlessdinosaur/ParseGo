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
Tree tree;
Parser::Parser()
{
	tree = Tree();
}

string Parser::getNext()
{
	string toke;
	string res;
	toke = lex.getToken();

	if (toke.compare("package")==1)
	{	
		res=lookPackage();
		return res;
	}

	if (toke.compare("import") == 1)
	{
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
	result = lex.getToken();
	if (result != "func" || result != "package" || result != "import")
	{
		tree.CreateNode(result, &tree.package);
		return result;
	}
	else
	{
		cout << "ERROR 1:" << result << " is a reserved keyword";
	}
	
}

string Parser::lookImport()
{
	string result;

	result = lex.getToken();

	
	

	if (result != "func" || result != "package" || result != "import")
	{
		tree.CreateNode(result, &tree.Imports);
		return result;
	}
	else
	{
		cout << "ERROR 1:" << result << " is a reserved keyword";
		return result;
	}
}
Parser::~Parser()
{
}

