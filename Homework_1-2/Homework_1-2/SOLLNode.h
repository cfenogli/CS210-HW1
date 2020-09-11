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

	//variables
	T data;
	SOLLNode<T>* link;
};