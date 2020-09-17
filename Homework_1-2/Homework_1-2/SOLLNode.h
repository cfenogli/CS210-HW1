//Homework 1
//CS 210
//SOLLNode.h
//Node class for self-organizing linked list

#pragma once

/*
CS 210-01
Homework 1 Programming Assignment 1
Node header
*/

template<class T>
class SOLLNode
{
public:
	//constructors
	SOLLNode() {};
	SOLLNode(const T& theData, SOLLNode<T>* theLink) : data(theData), link(theLink) {};
	//copy constructor
	SOLLNode(const SOLLNode<T>& srcNode)
	{
		data = srcNode.data;
		link = srcNode.link;
	}

	//variables
	T data;
	SOLLNode<T>* link;
};