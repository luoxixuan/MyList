// MyList.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "List.h"

using std::cout;
using std::endl;

int _tmain(int argc, _TCHAR* argv[])
{
	List<int> * myList = new List<int>();

	for (int i = 0; i < 10; i++) {
		myList->push_back(i);
	}

	List<int>::iterator iter = myList->begin();
	List<int>::iterator endIter = iter++;

	while (iter != endIter) {
		cout << *iter++;
	}
		
	cout << endl;
	int a;
	std::cin >> a;

	delete myList;
	return 0;
}

