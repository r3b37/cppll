// cppll.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class list{
private:
	class node;
	node *head, *tail;
public:
	list();
	void push_front(int i);
	int remove_front();
	void push_back(int i);
	int remove_back();
	unsigned int count();
	void deletelist();
	void printlist();
};

class list::node{
public:
	int info;
	node *next;

	node()
	{
		info = 0; next = 0;
	}

	node(int i, node *n)
	{
		info = i; next = n;
	}
};

list::list()
{
	head = 0; tail = 0;
}

void list::push_front(int i)
{
	node *newnode = new node(i,0);
	if(head == 0 && tail == 0)
	{
		// List is empty
		head = newnode;
		tail = newnode;
	}
	else
	{
		newnode->next = head;
		head = newnode;
	}
}

void list::printlist()
{
	node *crawl = head;
	while(crawl)
	{
		cout<<crawl->info<<" ---> ";
		crawl=crawl->next;
	}
	cout<<"NULL"<<endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	list l;
	l.push_front(8);
	l.push_front(7);
	l.push_front(6);
	l.push_front(5);
	l.push_front(4);
	l.push_front(3);
	l.push_front(2);
	//l.printlist();

	int maxv = pow(2,10.0);
	for(int i = 1 ; i <= maxv; i*=2)
		cout<<i<<endl;

	getchar();
	return 0;
}

