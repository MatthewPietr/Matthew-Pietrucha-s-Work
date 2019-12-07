#include <iostream>
using namespace std;

bool isPalindrome(string c)		//function for palindrome
{
	int size = 0;
	
	for(int i = 0; c[i] != 0; i++)	//gets the size of the string
	{
		size++;
	}
	
	for(int i = 0; i < size; i++)	//adds one, subtracts one from size and i and see if these characters equal to each other
	{
		if(toupper(c[i]) != toupper(c[size - 1]))	//if not then return false
		{
			return false;
		}
		size--;
	}
	return true;	//if it makes it here it is true
}

//this program determines if a string is aa palindrome while ignoring cases
int main ()
{
	string a;
	bool b;
	
	cout << "Enter a string: ";
	cin >> a;
	
	cout << endl;
	
	b = isPalindrome(a);
	
	if(b)
	{
		cout << a << " is a palindrome.";
	}
	else
	{
		cout << a << " is not a palindrome.";
	}
	
}