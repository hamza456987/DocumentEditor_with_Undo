#pragma once
#include<iostream>
#include<string>
#include "Stack.h"
using namespace std;
class DocumentEditor 
{
private:
	string doc;
	Stack temp;
public:
	DocumentEditor(int size) : temp(size) {
		doc = "";
	}
	void type(char c)
	{
		temp.push(c);
		doc += c;
	}

	void undo() {
		char last = temp.pop();
		if (last != '\0') {
			cout << "Undo: '" << last << "' removed" << endl;
		}
		else {
			cout << "Stack is empty - nothing to undo!" << endl;
		}
	}

	void display() {
		cout << "Document: \"" << doc << "\"" << endl;
	}






};

