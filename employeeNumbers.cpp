#include <iostream>
using namespace std;

int main ()
{
	int a;
	string e;
	int c[100];
	string d[100];
	
	cout << "How many employees? ";	//inputs size
	cin >> a;
	
	cout << endl << "Enter employee names and numbers:" << endl;
	
	for(int i = 0; i < a; i++)
	{
		cin >> d[i];	//inputs string then int
		cin >> c[i];
	}
	cout << endl << "Enter a name, or Quit to stop the program." << endl;
	
	while(true)
	{
		cout << "Name? ";
		cin >> e;
		
		if(e == "Quit")	//if the name is equal to Quit then it exits the for loop
		{
			break;
		}
		cout << e << " is employee number ";
		
		for(int i = 0; i < a; i++)
		{
			if(e == d[i])	//if the name is equal to the name in the array then it is outputted and the loop ends
			{
				cout << c[i] << endl << endl;
				break;
			}
		}
	}
}