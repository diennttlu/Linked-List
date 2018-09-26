#include <iostream>
using namespace std;
#include "list.h"

int main()
{
 	List<int> l1;
 	l1.PushBack(3);

 	l1.PushBack(5);

 	l1.PushBack(7);

 	List<int> l2 = l1;

 	l1.DeleteAtPos(2);

	l1.PrintAll();
	l2.PrintAll();

	return 0;
}
