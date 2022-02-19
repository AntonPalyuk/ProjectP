#pragma once
#include "mess.h"
#include <iostream>
#include <string>
using namespace std;

class Chatt : public mess
{
private:
	int _length = 0;
	mess* _data;

public:

	Chatt();
	

	void print();
	void addMess(string name);
	void setChat(string name, int index);
};

