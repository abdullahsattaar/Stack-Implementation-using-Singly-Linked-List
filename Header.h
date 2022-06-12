#pragma once
#include<iostream>
#include<string.h>
using namespace std;

template<class T>
void Reverse(Mystack<T> ST ,string& s)
{
	int siz;
	for(int i =0;s[i]!='\0';i++)
		siz++;
	Mystack<T> tmp;
	
	for(int i=siz;i>=0;i--)
		tmp.push(s[i]);

	for(int j=0;j<siz;j++)
	{
		ST.push(tmp.Top());
		tmp.pop();
	}
}
template<class T>
bool isBalanced(Mystack<T> ST,string exp)
{
		int siz;
	for(int i =0;s[i]!='\0';i++)
		siz++;
	St.push(exp[0]);
	for(int j=1;j<siz;j++)
	{
		if(ST.Top=='[')
		{
			if(exp[j]==']')
				ST.pop;
			else
				ST.push(exp[j]);
		}
		else if(ST.Top=='{')
		{
			if(exp[j]=='}')
				ST.pop;
			else
				ST.push(exp[j]);
		}
		else if(ST.Top=='(')
		{
			if(exp[j]==')')
				ST.pop;
			else
				ST.push(exp[j]);
		}
	}
	if(ST.isEmpty())
		return true;
	else 
		return false;

}

template<class T>
class Node
{
public:
	T data;
	Node<T>* next;
	Node() 
	{
		data = 0;
		next = 0;
	}
	Node(T element)
	{
		data = element;
	}
	Node(Node* obj) 
	{
		data = obj->data;
		next = obj->next;
	}
};
template<class T>
class Mystack
{
private:
	Node<T>* top;
	static int size;
public:
	Mystack()
	{
		top = 0;
		size = 0;
	}
	int Size()
	{
		return size;
	}
	bool isEmpty()
	{
		if (size == 0)
			return true;
		return false;
	}
	bool Top(T &e) 
	{
		if (top) 
		{
			e = top->data;
			return true;
		}
		return false;
	}
	void Pop()
	{
		if (top) 
		{
			Node<T>* tmp(top);
			top = top->next;
			delete tmp;
			size--;
		}
		else
			cout << "Stack is Empty " << endl;
	}
	void Push(T const& e)
	{
		if (top == 0) 
		{
			Node<T>* node = new Node<T>(e);
			top = node;
			top->next = 0;
		}
		else
		{
			Node<T>* node = new Node<T>(e);
			node->next = top;
			top = node;

		}
		size++;
	}
	void Print()
	{
		Node<T>* i(top);
		for (; i != 0; i = i->next)
			cout << i->data << " ";
	}
};
template<class T>
int Mystack<T> ::size = 0;