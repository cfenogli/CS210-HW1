//Homework 1
//CS 210
//SOLLImplementation.cpp
//Implementation file for self-organizing linked list ADT

#include "SOLLADT.h"
#include "SOLLNode.h"

#include <string>
#include <iostream>

using namespace std;

template<class T>
SOLLADT<T>::SOLLADT() : head(NULL)
{
};

template<class T>
SOLLADT<T>::~SOLLADT()
{
};

template<class T>
SOLLNode<T>* SOLLADT<T>::search(T element)
{
	SOLLNode<T>* current = head;
	if (current->data == element)
	{
		return current;
	}
	while (current->link != NULL)
	{
		current = current->link;
		if (current->data == element)
		{
			return current;
		}
	};
	return NULL;
};

template<class T>
bool SOLLADT<T>::search_mtf(T element)
{
	SOLLNode<T>* searchResult = search(element);
	//if the element is in the list, search for the node before it
	if (searchResult != NULL)
	{
		SOLLNode<T>* beforeNode = NULL;
		SOLLNode<T>* current = head;
		if (current == searchResult)
		{
			return true;
		}
		else if (current->link == searchResult)
		{
			beforeNode = current;
		}
		else
		{
			while (current->link->link != NULL)
			{
				current = current->link;
				if (current->link == searchResult)
				{
					beforeNode = current;
				}
			};
		}
		//link the node before the search result to the one after the search result
		beforeNode->link = searchResult->link;
		//move the search result to the front of the list
		searchResult->link = head;
		head = searchResult;
		return true;
	}
	return false;
};

template<class T>
bool SOLLADT<T>::search_t(T element)
{
	SOLLNode<T>* searchResult = search(element);
	//if the element is in the list, search for the node two nodes before it
	if (searchResult != NULL)
	{
		SOLLNode<T>* twoBeforeNode = NULL;
		SOLLNode<T>* beforeNode = NULL;
		SOLLNode<T>* current = head;
		//if the target is the head, do nothing
		if (current == searchResult)
		{
			return true;
		}
		//if the target is the second node
		else if (current->link == searchResult)
		{
			//swap them, making the target the head
			head->link = searchResult->link;
			searchResult->link = head;
			head = searchResult;
			return true;
		}
		//if the target is the third node
		else if (current->link->link == searchResult)
		{
			twoBeforeNode = current;
			beforeNode = current->link;
		}
		//general case, traversing forward
		else
		{
			while (current->link->link->link != NULL)
			{
				current = current->link;
				if (current->link->link == searchResult)
				{
					twoBeforeNode = current;
					beforeNode = current->link;
				}
			}
		}
		//twoBeforeNode: node 1, beforeNode: node 2, searchResult: node 3, after searchResult: node 4
		//link node 1 to node 3
		twoBeforeNode->link = searchResult;
		//link node 2 to node 4
		beforeNode->link = searchResult->link;
		//link node 3 to node 2
		searchResult->link = beforeNode;
		
		return true;
	}
	return false;
};

template<class T>
bool SOLLADT<T>::insert(T element)
{
	//i.e. if the list is empty
	if (head == NULL)
	{
		head = new SOLLNode<T>(element, NULL);
		return true;
	}
	else
	{
		SOLLNode<T>* searchResult = search(element);
		//if the element to be added is found in the list already
		if (searchResult != NULL)
		{
			//return false; could not add the element
			return false;
		}
		else
		{
			SOLLNode<T>* current = head;
			while (current->link != NULL)
			{
				current = current->link;
			};
			SOLLNode<T>* temp = new SOLLNode<T>(element, NULL);
			//add the new element to the end of the list
			current->link = temp;
		}
	}
};

template<class T>
void SOLLADT<T>::showSOLL()
{
	SOLLNode<T>* current = head;
	cout << current->data;
	while (current->link != NULL)
	{
		current = current->link;
		cout << ", " << current->data;
	}
};
