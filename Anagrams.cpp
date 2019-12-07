#include <iostream>
using namespace std;

bool anagrams(string a, string b)	//function for anagrams
{
	bool r = false;
	int m = 0, n = 0, size = 0, size2 = 0;
	
	for(int i = 0; a[i] != 0; i++)	//makes all of string a uppercase
	{
		a[i] = toupper(a[i]);
		
		size++;
	}
	
	for(int i = 0; b[i] != 0; i++)	//makes all of string b uppercase
	{
		b[i] = toupper(b[i]);
		size2++;
	}
	
	if(size2 > size)	//gets the bigger string's size
	{
		size = size2;
	}
	
	for(int i = 0; i < size; i++)	//gets whether a character is uppercase and puts it back to the string
	{
		if(isupper(a[i]))
		{
			a[m] = a[i];
			m++;
		}
		
		if(isupper(b[i]))
		{
			b[n] = b[i];
			n++;
		}
	}
	
	if( m != n)	//if the sizes are not the same return false
	{
		return r;
	}
	
	a[m] = 0;	//ends the two strings
	b[n] = 0;
	
	for(int i = 0; a[i] != 0; i++)
	{
		r = false;	//resets variable
		
		for(int j = 0; a[j] != 0; j++)	//if they are equal to each other make b's character erased, then make the variable true then get out of the inner loop
		{
			if(a[i] == b[j])
			{
				b[j] = 0;
				r = true;
				break;
			}
		}
		
		if(!r)	//if it is false exit out of for loop
		{
			break;
		}
	}
	return r;	//return answer
}


//this program determines if a string is an anagram of another string while ignoring cases, spaces, and punctuation
int main ()
{
	string a, b;
	
	a = "asteroid threats";
	b = "disaster to Earth";
	
	cout << anagrams(a, b);
}