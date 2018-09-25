#include <iostream>
using namespace std;
#include "list.h"

int main()
{
 	List<int> l;
 	l.PushBack(1);
 	l.PushBack(2);
 	l.PushBack(3);
 	l.PushBack(4);
 	l.PushBack(5);
 	l.PushBack(6);

 	l.Change(2,3);
 	l.PrintAll();
	return 0;
}
