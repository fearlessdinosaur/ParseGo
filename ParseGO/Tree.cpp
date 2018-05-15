#include "Tree.h"
#include "stdafx.h"
#include <cstdio>

Tree::treeNode root;
Tree::treeNode package;
Tree::treeNode Imports;
Tree::treeNode functions;
Tree::treeNode decs;


Tree::Tree()
{
	root.firstChild = &package;
	package.nextSibling = &Imports;
	Imports.nextSibling = &functions;
	functions.nextSibling = &decs;
}

