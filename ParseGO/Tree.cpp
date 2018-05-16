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

Tree::treeNode Tree::findChild(Tree::treeNode *n, Tree::treeNode* child)
{
	cout << n;
	if (n ->firstChild != NULL)
	{
		Tree::treeNode* x = n->firstChild;
		cout << n -> value + "\n";
		cout << "moving to first child \n";
		findNode(x,child);

	}
	else
	{

		cout << "appending to first child \n";
		cout << "child address:";
		cout << n ->firstChild;
		cout << "\n";
		n -> firstChild = child;
		
	}
	return *n -> firstChild;
}
 Tree::treeNode Tree::findNode(Tree::treeNode *&n, Tree::treeNode* child)
{


		cout << n->nextSibling;
		if (n ->nextSibling != NULL)
		{
			cout << n ->value + "\n";
			cout << "moving to next sibling \n";

			findNode(n->nextSibling,child);


		}
		else
		{
			cout << "appending value:";
			cout << child;
			n -> nextSibling = child;

			
		}
		 
	 
	return *n;
};

 Tree::treeNode Tree::CreateNode(string value,Tree::treeNode* base)
 {
	Tree::treeNode x;
	Tree::treeNode temp;
	temp.value = value;
	cout << base -> value;
	cout << "\n";

	x=Tree::findChild(base, &temp);
	return x;
 }

