#pragma once
#include<iostream>
using namespace std;
class Stack
{
	char* arr;
	int size, top;

public:
	Stack(int size)
	{
		this->size = size;
		arr = new char[size];
		top = -1;
	}

	void push(char data)
	{
		if (top < size - 1)
		{
			top++;
			arr[top] = data;
		}
		else
		{
			cout << "Stack is full";
		}
	}

	char pop()
	{
		if (top == -1)
			cout << "Stack if empty" << endl;
		else
			return(arr[top--]);
		return '\0';
	}

	void display()
	{
		for (int i = top; i >= 0; i--)
			cout << arr[i] << " ";
		cout << endl;
	}
};

