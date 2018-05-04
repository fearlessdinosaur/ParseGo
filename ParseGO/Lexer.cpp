#include "stdafx.h"
#include "stdafx.h"
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include "Lexer.h"
#include <fstream>

ifstream myfile("sample.go");
Lexer::Lexer()
{

}

string Lexer::getToken()
{
	string x = "lexer Active";
	string line;
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			cout << line << '\n';
		}
		myfile.close();
	}
	return x;
}