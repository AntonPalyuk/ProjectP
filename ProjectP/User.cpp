#include "User.h"
#include <string>
using namespace std;

User::User():_login("defLog"), _pasword("defPas"), _name("defName")
{
	_chats = new Chatt[_Ulength];

}

User::User(string log, string pas, string name) :_login(log), _pasword(pas), _name(name)
{
	_chats = new Chatt[_Ulength];

}



void User::addMessToChat(string message)
{
	_chats[0].addMess(message);

}

void User::print()
{
	
	_chats[0].print();

}

void User::setU(string log, string pas, string name)
{
	_login = log;
	_pasword = pas;
	_name = name;

}

void User::PrintUser()
{
	cout << _login << endl;
	cout << _pasword << endl;
	cout << _name << endl;

}

string User::getLogin() { return _login;}        /// геттеры  
string User::getPassword() { return _pasword; }
string User::getName() { return _name; }