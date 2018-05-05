#pragma once
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;
class Parser
{
public:
	Parser();
	string lookPackage();
	string getNext();
	~Parser();
};

