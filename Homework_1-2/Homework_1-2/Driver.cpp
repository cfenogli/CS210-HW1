//Homework 1
//CS 210
//Driver.cpp
//Testing for self-organizing linked list

#include "SOLLImplementation.cpp"

#include <iostream>

using namespace std;

int main()
{
	SOLLADT<char> testList = SOLLADT<char>();
	SOLLADT<char> testListTranspose = SOLLADT<char>();
	SOLLADT<char> testListMTF = SOLLADT<char>();
	
	cout << "Supplied test cases: \n";

	cout << "Standard search test: \n";

	testList.insert('A');
	testList.insert('C');
	testList.insert('B');
	testList.search('C');
	testList.insert('D');
	testList.search('A');
	testList.search('D');
	testList.search('A');
	testList.search('C');
	testList.search('A');
	testList.search('C');
	testList.search('C');
	testList.insert('E');
	testList.search('E');
	testList.showSOLL();

	
	cout << "\nTranspose search test: \n";

	testListTranspose.insert('A');
	testListTranspose.insert('C');
	testListTranspose.insert('B');
	testListTranspose.search_t('C');
	testListTranspose.insert('D');
	testListTranspose.search_t('A');
	testListTranspose.search_t('D');
	testListTranspose.search_t('A');
	testListTranspose.search_t('C');
	testListTranspose.search_t('A');
	testListTranspose.search_t('C');
	testListTranspose.search_t('C');
	testListTranspose.insert('E');
	testListTranspose.search_t('E');
	testListTranspose.showSOLL();

	

	cout << "\nMTF search test: \n";

	testListMTF.insert('A');
	testListMTF.insert('C');
	testListMTF.insert('B');
	testListMTF.search_mtf('C');
	testListMTF.insert('D');
	testListMTF.search_mtf('A');
	testListMTF.search_mtf('D');
	testListMTF.search_mtf('A');
	testListMTF.search_mtf('C');
	testListMTF.search_mtf('A');
	testListMTF.search_mtf('C');
	testListMTF.search_mtf('C');
	testListMTF.insert('E');
	testListMTF.search_mtf('E');
	testListMTF.showSOLL();

	cout << "\n\nOur group's test cases:\n";
	
	SOLLADT<int> testListInt = SOLLADT<int>();
	SOLLADT<int> testListTransposeInt = SOLLADT<int>();
	SOLLADT<int> testListMTFInt = SOLLADT<int>();

	cout << "Standard search test: \n";
	
	for (int i = 0; i < 10; i++)
	{
		testListInt.insert(i);
	}
	testListInt.search(0);
	testListInt.search(9);
	testListInt.search(6);
	testListInt.search(4);
	testListInt.showSOLL();

	cout << "\nTranspose search test: \n";

	for (int i = 0; i < 10; i++)
	{
		testListTransposeInt.insert(i);
	}
	testListTransposeInt.search_t(0);
	testListTransposeInt.search_t(9);
	testListTransposeInt.search_t(6);
	testListTransposeInt.search_t(4);
	testListTransposeInt.showSOLL();

	cout << "\nMTF search test: \n";

	for (int i = 0; i < 10; i++)
	{
		testListMTFInt.insert(i);
	}
	testListMTFInt.search_mtf(0);
	testListMTFInt.search_mtf(9);
	testListMTFInt.search_mtf(6);
	testListMTFInt.search_mtf(4);
	testListMTFInt.showSOLL();
}