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
	count = 0;
}

string Lexer::getToken()
{
	char character;
	string discard;
	string token = "";
	if (myfile.is_open())
	{
		
		
		myfile.get(character);

		if (myfile.eof())
		{
			return "EOF";
		}

		if(character == '\n' || character == '\r')
		{
			myfile.get(character);
		}

			while (character != ' ' && character != '\n')
			{
					token.append(1,character);
					myfile.get(character); 
				

			
			}
		token.append("\n");
		count++;
		return token;
	}


}