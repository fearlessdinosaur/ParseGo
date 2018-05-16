// ParseGO.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Lexer.h"
#include "Parser.h"
#include "Tree.h"
#include <cstdlib>
#include <cstdio>
#include <iostream>
using namespace std;


int main()
{
	string ex;
	
	
	Parser parse;
	parse = Parser();
	ex = parse.getNext();
	while (ex !="END")
	{
		cout << ex;
		ex = parse.getNext();
	}
	
	

	cin.get();
}

