#include <iostream>
using namespace std;

int gcd(int a, int b)		//function for gcd
{
	if(b == 0)	//if the modular division gets 0 then return b
	{
		return a;
	}
	return gcd(b, a % b);	//else return b as a, and the remainder of a and b as b
}

//this program gets the greatest common denominator
int main ()
{
	int a, b;
	
	cout << "This program calculates the greatest common divisor (GCD) for two integers." << endl << endl;
	
	cout << "Enter a number: ";	//inputs
	cin >> a;
	
	cout << "Enter another: ";
	cin >> b;
	
	cout << endl;	//outputs
	cout << "GCD = " << gcd(a,b);
}