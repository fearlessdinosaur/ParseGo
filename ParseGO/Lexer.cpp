#include "stdafx.h"
#include "stdafx.h"
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



		while(character == '\n' || character == '\r' || character == '{' || character == '\t')
		{
			myfile.get(character);
		}

		if (character == '"')
		{
			myfile.get(character);
			while (character != '"')
			{

				if (character == '\n')
				{
					cout << "error 2: missing \" \n ";
				}

				token.append(1, character);
				myfile.get(character);

				


			}
		}
		else
		{
			while (character != ' ' && character != '\n')
			{
				token.append(1, character);
				myfile.get(character);



			}
		}		
		
		
		if (myfile.eof())
		{
			return "EOF";
		}

		token.append("\n");
		cout << token;
		count++;
		return token;
	}


}