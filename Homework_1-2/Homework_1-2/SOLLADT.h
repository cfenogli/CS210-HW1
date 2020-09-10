#pragma once
#include <string>
#include "SOLLNode.h"

template <class T>
class SOLLADT
{
public:
	SOLLADT();

	~SOLLADT();

	void search(T);
	void search_mtf(T);
	void search_t(T);
	bool insert(T);
	std::string showSOLL();

private:
	SOLLNode<T>* head;
};