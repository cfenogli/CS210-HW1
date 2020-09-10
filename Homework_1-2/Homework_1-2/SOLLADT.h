#pragma once
#include <string>

class SOLLADT
{
private:
	void search();
	void search_mtf();
	void search_t();
	bool insert();
	std::string showSOLL();
};

struct Node
{
	Node* next;
	dataType data;
};