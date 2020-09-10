#pragma once

template<class T>
class SOLLNode
{
public:
	SOLLNode() {};
	SOLLNode(const T& theData, SOLLNode<T>* theLink) : data(theData), link(theLink) {};

	T data;
	SOLLNode<T>* link;
};