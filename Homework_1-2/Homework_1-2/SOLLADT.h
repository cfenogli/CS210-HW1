//Homework 1
//CS 210
//SOLLADT.cpp
//Generalized ADT for self-organizing linked list

#pragma once
#include <string>
#include "SOLLNode.h"

template <class T>
class SOLLADT
{
public:
	SOLLADT();

	~SOLLADT();

	SOLLNode<T>* search(T);
	bool search_mtf(T);
	bool search_t(T);
	bool insert(T);
	void showSOLL();

protected:
	SOLLNode<T>* head;
};