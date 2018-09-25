#ifndef queue_h
#define queue_h

template <class T>

class Queue
{
private:
	Node<T> *top;
public: 
	Queue()
	{
		top = 0;
	};

	void EnQueue(T value)
	{
		Node<T> *n = new Node<T>;
		n->data = value;
		n->next = 0;

		if(top == 0)
			top = n;
		else
		{
			Node<T> *p = top;
			while(p->next != 0)
				p = p->next;
			p->next = n;
		}
	};

	T DeQueue()
	{
		T t = top->data;
		Node<T> *q = top;
		top = top->next;
		delete q;
		return t;
	};
	bool IsEmpty() const
	{
		return top == 0;
	};
};

#endif