#include <iostream>
using namespace std;
#include "stack.h"


int main()
{

	Stack<int> s;
	s.Push(10);
	s.Push(15);
	s.Push(30);

	cout<<s.Pop()<<endl;
	cout<<s.Pop()<<endl;
	cout<<s.Pop()<<endl;

	return 0;
}