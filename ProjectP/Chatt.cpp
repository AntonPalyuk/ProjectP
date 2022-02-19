#include "Chatt.h"
#include "mess.h"


Chatt::Chatt()
{
	 _data = new mess[_length];
	  
}

void Chatt::print() 
{
	for (int i = 0; i < _length; ++i)
	{
	_data[i].print();

	}
}


void Chatt::addMess(string name)
{
	mess new_m(name);

	mess* n_d = new mess[_length + 1];

	for (int i = 0; i < _length; ++i)
	{
		n_d[i] = _data[i] ;
	}
	
	n_d[_length] = new_m;

	delete[] _data;
	_data = n_d;
	++_length;
}

void Chatt::setChat(string name, int index)
{
	_data[index].setMess(name);


}
