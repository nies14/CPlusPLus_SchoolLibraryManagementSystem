#include "task1DB.h"
#include <fstream>
#include <cstdlib>

int main()
{
    cout << "\t\t\t Welcome to The Programme" << endl << endl << endl;
    cout << "Please Enter the Password to Gain Access to This Program: ";
	string pass;
	cin >> pass;
	if(pass == "project")
	{
	   StudentDB *ob;
       ob = new StudentDB();
       ob->Handler();
       delete ob;
	}
	else
	cout << "Wrong Password" << endl;
    return 0;
}
