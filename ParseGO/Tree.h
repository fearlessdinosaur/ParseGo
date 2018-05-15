#pragma once
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;
class Tree
{
public:
	Tree();

	struct treeNode
	{
		string value;
		treeNode* firstChild = NULL;
		treeNode* nextSibling = NULL;
	};

	treeNode root;
	treeNode package;
	treeNode Imports;
	treeNode functions;
	treeNode decs;

	treeNode findNode(treeNode n);
};