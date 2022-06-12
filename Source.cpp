#include<iostream>
#include"Header.h"
using namespace std;

int main() 
{
	Mystack<int> s;
	s.Push(5);
	s.Push(4);
	s.Push(3);
	s.Push(2);
	s.Push(1);
	s.Print();
	cout << endl<< "Size of Stack is: " << s.Size() << endl;
	
	s.Pop();
	s.Pop();
	s.Print();
	cout << endl << "Size of stack is: " << s.Size() << endl;

	int D;
	s.Top(D);
	cout <<"Top element is: " << D << endl;

	if (s.isEmpty() == true)
		cout << "Stack is empty" << endl;
	else
		cout << "Stack is not empty" << endl;

	s.Pop();
	s.Pop();
	s.Pop();

	if (s.isEmpty() == true)
		cout << "Stack is empty" << endl;
	else
		cout << "Stack is not empty" << endl;



	system("Pause");
	return 0;
}