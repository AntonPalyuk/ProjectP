#include "Program.h"


Program::Program()
{
	_users = new User[_usersLength];
}

void Program::setUser(string log, string pas, string name, int index)
{
	_users[index].setU(log, pas, name);

}

void Program::printU(int index)
{
	_users[index].PrintUser();


}

void Program::addMessageTo(string message, int index)
{
	_users[index].addMessToChat(message);


}

void Program::print(int index)
{
	_users[index].print();

}

void Program::login()
{
	string login, password, name;

	cout << "Enter your login:  " << endl;
	cin >> login;
	cout << "Enter your password:  " << endl;
	cin >> password;
	

	_currentUser = getUserByLogin(login);


}

User* Program::getUserByLogin(string login)
{
	for (int i = 0; i < _usersLength; ++i)
	{
		if (_users[i].getLogin() == login)
		{		
			return  &_users[i];
		}
		else
		{
			return nullptr;
		}
	}
}

void Program::printCurrentUser()
{
	cout << "Current user is:  " << _currentUser->getName() << endl;	

}

bool Program::programStatus()
{
	return _chatIsON;
	
}

void Program::setStatusOFF()
{
	_chatIsON = false;
}

User* Program::getCurrentUser() { return _currentUser; }


void Program::showUserMenu()
{
	int key = 0;
	int userIndex = 0;
	string message;

	cout << "0 - Quit" << endl << "1 - add message to " << endl << "2 - show chat" << endl;

	cin >> key;

	switch (key)
	{
	case 0:
		setStatusOFF();
		_currentUser = nullptr;
		break;

	case 1:
		cout << "choose user: " << endl;
		cin >> userIndex;
		
		cout << "enter message" << endl;
		cin >> message;

		addMessageTo(message, userIndex);
		break;

	case 2:
		_currentUser->print();
		break;
	}


          	


}