#include "mess.h"
#include "Chatt.h"
#include "User.h"
#include <iostream>
#include <string>
#include "Program.h"

using namespace std;

int main()
{
	




	Program p1;

	p1.setUser("LOG1", "1", "NAME1", 0);
	p1.setUser("LOG2", "2", "NAME2", 1);
	p1.setUser("LOG3", "3", "NAME3", 2);
	
	p1.addMessageTo("Hello!", 0);
	p1.addMessageTo("Aloha!",  1);
	p1.addMessageTo("Chears!",  2);

	while (p1.programStatus())
	{
		p1.login();
		while (p1.getCurrentUser())
		{
			p1.showUserMenu();

		}


	}
		
	p1.print(0);
	p1.print(1);
	p1.print(2);

	return 0;
}