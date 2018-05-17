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

Tree::treeNode Tree::findChild(Tree::treeNode *&n, Tree::treeNode* child)
{


	if (n ->firstChild != NULL)
	{
		
		cout << "first child already exists,"<< n ->firstChild ->value << "moving on\n";
		findNode(*&n ->firstChild,child);
	}
	else
	{
		cout << "adding new first child "<<child<<"\n";
		n->firstChild = child;
		cout << n->firstChild << "\n";
	}
	return *n -> firstChild;
}
 Tree::treeNode Tree::findNode(Tree::treeNode *&n, Tree::treeNode* child)
{
	 cout << "Parent Node address:" << n << "\n";
	 cout << "parent Node value:" << n->value;
		if (n ->nextSibling != NULL)
		{
			cout <<"end not found, moving to next \n";
			findNode(n->nextSibling,child);
		}
		else
		{
			cout << "end found, appending \n";
			cout << "original value:" << n ->nextSibling << "\n";
			n -> nextSibling = child;
			cout << "final value:" << n ->nextSibling << "\n";
		}
		 
	 
	return *n;
};

 Tree::treeNode Tree::CreateNode(string value,Tree::treeNode* base)
 {
	Tree::treeNode x;
	Tree::treeNode *temp = new Tree::treeNode;
	temp -> value = value;

	x=Tree::findChild(*&base, temp);
	return x;
 }

