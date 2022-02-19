#pragma once
#include "User.h"
#include "Chatt.h"
#include "mess.h"
#include <string>
#include <iostream>
using namespace std;



class Program : public User
{
private:

	User* _currentUser = nullptr;
	User* _users;
	int _usersLength = 3;
	bool _chatIsON = true;
	

public:

	Program();
	void setUser(string log, string pas, string name, int index);
	
	
	
	void addMessageTo(string name, int index);

	void printCurrentUser();
	void print(int index);
	void printU(int index);

	void login();
	bool programStatus();
	void setStatusOFF();

	User* getUserByLogin(string login);
	User* getCurrentUser();
	void showUserMenu();
};

