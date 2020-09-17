//Homework 1
//CS 210
//SOLLNode.h
//Node class for self-organizing linked list

#pragma once

template<class T>
class SOLLNode
{
public:
	SOLLNode() {};
	SOLLNode(const T& theData, SOLLNode<T>* theLink) : data(theData), link(theLink) {};
	//copy constructor
	SOLLNode(const SOLLNode<T>& srcNode)
	{
		data = srcNode.data;
		link = srcNode.link;
	}

	T data;
	SOLLNode<T>* link;
};