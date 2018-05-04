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
	char character;
	string token = "";
	if (myfile.is_open())
	{
		myfile.get(character);
		while (character != ' ')
		{
			token.append(1,character);
			myfile.get(character);
			
		}
	}
	token.append("\n");
	return token;
}