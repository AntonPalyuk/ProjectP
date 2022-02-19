#include "mess.h"

string mess::getName() { return _message; }


void mess::print()
{
	cout << "Name is:  " << _message << endl;
	

}


mess::mess(string name) : _message(name){}

mess& mess::operator= (mess old)
{
	this->_message = old._message;
	
	
	return *this;
}

void mess::setMess(string name)
{
	_message = name;
	


}