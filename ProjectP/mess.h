#pragma once
#include <iostream>
#include <string>
using namespace std;

class mess
{
private:
	string _message;
	

public:

	mess(): _message{ "Dou" }{};
	mess(string name);

	string getName();
	
	void print();
	void setMess(string name);

	mess& operator= (mess old);


};

