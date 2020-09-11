#pragma once
#include <string>
#include "SOLLNode.h"

/*
CS 210-01
Homework 1 Programming Assignment 1
Linked list ADT header
*/

template <class T>
class SOLLADT
{
public:
	SOLLADT(); //constructor

	~SOLLADT(); //destructor

	//---------- methods ----------

	void search(T);
	void search_mtf(T);
	void search_t(T);
	bool insert(T);

	std::string showSOLL();

private:
	//variables
	SOLLNode<T>* head;
};