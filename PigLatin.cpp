#include <iostream>
using namespace std;

string PigLatinize(string a)		//function for pig latin
{
	string b = "", c = "";
	int d = 0;
	bool e = false;
	
	while(a[d] != 0)
	{
		if(e)	//if a vowel has been found make the rest of the letters get added to b
		{
			b += a[d];
		}
		else if(d == 0 && a[d] == 'y')	//if y is the first letter then add it to c instead of b
		{
			c += a[d];
		}
		else
		{
			if(a[d] == 'a' || a[d] == 'e' || a[d] == 'i' || a[d] == 'o' || a[d] == 'u' || a[d] == 'y')	//gets whether if it is a vowel and adds to b
			{
				e = true;
				b += a[d];
			}
			else	//if it is a consanant add to c
			{
				c += a[d];
			}
		}
		d++;	//counts up
	}
	
	if(c == "")	//adds a y to the string of b if c is empty
	{
		c += "y";
	}
	b += "-";	//add to b the end portion
	b += c;
	b += "ay";
	
	return b;	//returns
}

//this program changes a word into pig latin
int main ()
{
	string a;
	bool b;
	
	cout << "Enter a string: ";
	cin >> a;
	
	cout << endl;
	
	a = PigLatinize(a);
}