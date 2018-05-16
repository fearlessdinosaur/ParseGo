#include "stdafx.h"
#include "Tree.h"

Tree::treeNode root;
Tree::treeNode package;
Tree::treeNode Imports;
Tree::treeNode functions;
Tree::treeNode decs;


Tree::Tree()
{
	Tree:root.firstChild = &package;
	package.nextSibling = &Imports;
	Imports.nextSibling = &functions;
	functions.nextSibling = &decs;

	root.value = "ROOT";
	package.value = "PACKAGE";
	Imports.value = "IMPORTS";
	functions.value = "FUNCTIONS";
	decs.value = "Yay, it worked";
};


 Tree::treeNode Tree::findNode(Tree::treeNode n)
{

	if (n.firstChild != NULL)
	{
		cout << n.value+"\n";
		cout << "moving to first child \n";
		
		findNode(*n.firstChild);
		
	}
	else
	{
		if (n.nextSibling != NULL)
		{
			cout << n.value+"\n";
			cout << "moving to next sibling \n";
			
			findNode(*n.nextSibling);
			
			
		}
		else
		{
			cout << n.value;
		}
	}
	return n;
};

