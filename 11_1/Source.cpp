
#include <iostream>
#include "SearchTree.h"
using namespace std;

#ifndef nullptr
#define nullptr NULL
#endif

int main()
{
	SearchTree<int> T1;
	//T1.inOrder();
	cout << "enter 10 numbers\n";
	int x, y;
	for (int i = 0; i < 10; i++)
	{
		cin >> x;
		T1.add(x);
	}
	cout << "inorder: ";
	T1.inOrder();
	
	return 0;
}
