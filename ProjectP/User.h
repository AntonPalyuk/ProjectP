#pragma once
#pragma once
#include "Chatt.h"
#include "mess.h"
#include <iostream>
#include <string>

using namespace std;

class User: public Chatt
{
public:

		string _login;
		string _pasword;
		string _name;
		Chatt* _chats;

		int _Ulength = 1;



	User();
	User(string log, string pas, string name);

	void addChat(string name);
	void addMessToChat(string name);
	
	void setU(string log, string pas, string name);  /// сеттеры

	void PrintUser();
	void print();

	string getLogin();   /// геттеры  
	string getPassword();
	string getName();
};

