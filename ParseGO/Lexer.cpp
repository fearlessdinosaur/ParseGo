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
	char character;
	if (myfile.is_open())
	{
		myfile.get(character);
		while (character != ' ')
		{
			cout << character;
			myfile.get(character);
		}
		myfile.close();
	}
	return x;
}