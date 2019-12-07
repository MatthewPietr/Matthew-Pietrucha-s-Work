#include <iostream>
using namespace std;

//this program changes a word into its plural form
int main ()
{
	string a;
	int c = 0;
	
	cout << "This program converts an English word to its plural form." << endl << endl;
	
	cout << "English word: ";
	cin >> a;
	
	while(a[c] != 0)	//gets the size of the string
	{
		c++;
	}
	c--;
	
	if(a[c] == 's'|| a[c] == 'x' || a[c] == 'z' || (a[c] == 'h' && (a[c - 1] == 'c' || a[c - 1] == 's')))	//gets whether the last character or last two characters is equal to certain characters
	{
		a += "es";	//adds es to the string
	}
	else if(a[c] == 'o' && (a[c - 1] != 'a' && a[c - 1] != 'e' && a[c - 1] != 'i' && a[c - 1] != 'o' && a[c - 1] != 'u'))	//gets whether the last letter is o while having a consanant before it
	{
		a += "es";	//adds es
	}
	else if(a[c] == 'y' && (a[c - 1] != 'a' && a[c - 1] != 'e' && a[c - 1] != 'i' && a[c - 1] != 'o' && a[c - 1] != 'u'))	//gets whether the last letter is y while having a consanant before it
	{
		a[c] = 'i';	//changes y to ies
		a += "es";
	}
	else	//this is for all the cases that are not in any of the other cases
	{
		a += "s";	//adds s
	}
	
	cout << "Plural form: " << a;	//prints
}