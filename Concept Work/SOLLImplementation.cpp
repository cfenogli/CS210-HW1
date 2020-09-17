#include "SOLLADT.h"
#include "SOLLNode.h"
#include <string>

/*
CS 210-01
Homework 1 Programming Assignment 1
Linked list implementation
*/

using namespace std;

//note: added return types to methods. Also, do methods in implementation normally have their brackets end with a semi-colon?

//NOTE ON PSEUDOCODE: I have some doubt about whether this will work with references

//constructor
template<class T>
SOLLADT<T>::SOLLADT() : head(NULL)
{
};

//destructor
SOLLADT<T>::~SOLLADT()
{
};

//---------- methods ----------

void SOLLADT<T>::search(T element)
{
	SOLLNode::Node<T> current;
	while (current::link != null)
	{

	};
};
	
void SOLLADT<T>::search_mtf(T element)
{
	/*
	if (head.next == null)
		--do nothing, is empty and target element is not there
	else
		--initialize scanning
		bool found = false
		node previous = null
		node current = head.next
		
		--search for target
		while(!found)
                if (target = current.element
                    found = true
                else
                    previous = current
                    current = current.next
		
		--remove target
		previous.next = current.next
		
		--insert target at front
		current.next = head.next
		head.next = current
		
	*/
};

void SOLLADT<T>::search_t(T element)
{
	/*
	if (head.next == null)
		--do nothing, is empty and target element is not there
	else
		--initialize scanning
		bool found = false
		node previous = null
		node current = head.next
		
		--search for target
		while(!found)
                if (target = current.element
                    found = true
                else
                    previous = current
                    current = current.next
		
		--move target, if not already at front
		if(previous != null)
			node tempPrevious = previous
			previous = current
			current = tempPrevious
	*/
};

bool SOLLADT<T>::insert(T element) //bool return type must have something to do with it being found or not
{
	/*
	create newNode
	bool found = false
	
	--scan list
	node current = head.next
	while (current != null and !found)
		if (current.element == newNode.element)
			found = true
		else
			current = current.next
	
	if (!found)
		--insert to front
		newNode.next = head.next
		head.next = newNode
	
	return bool --unsure if it should be inverted or not
	*/
};

//should print out all node elements in sequence
std::string SOLLADT<T>::showSOLL()
{
	/*
	node current = head.next
	while (current != null)
		print current.element
		current = current.next
	*/
};
