#include <iostream>
using namespace std;

//this program gets parents of people and prints them out
int main()
{
	int a = 0, b, c = 0;	//a is counter for the list of people, b is the total number of children for this parent, c is the index for a person already in the array
	string list[50], par[50];	//list is the list of people, par is the list of parents
	string temp = "", chil = "";	//temp is the temporary parent string, chil is the temporary child string
	bool within = false;	//is whether a name is already in the list of people
	char un[50], dos[50];	//un is the first character in the string of the people list, dos is the second character
	int w = 1, ind;	//w is a counter for the selection sort, ind is the index of the array that is being used for the selection sort
	char order = 'z', ch;	//order is the lowest char in the first character of the string, ch is the lowest of the second character
	string str;	//str is used to swap strings in selection sort
	string wow = "          ", pars;	//wow is the child string used to print out, pars is the parent string
	
	cout << "This program prints parent-child pairs." << endl;	//begins
	cout << "Enter parents and children below, use 'quit' to stop." << endl;
	
	while (temp != "quit")	//as long as the parent string is not quit it continues
	{
		cout << "Parent: ";	//inputs parent string
		cin >> temp;
		
		if(temp == "quit")	//if the parent string is quit, break the loop
		{
			break;
		}
		
		for(int i = 0; i < a; i++)	//makes sure that the parent string is not already in the loop
		{
			if(temp == list[i])
			{
				within = true;
				break;
			}
		}
		if(!within)	//if it is not in the loop get the first and second character , then add them and the string into the arrays, then up the counter.
		{
			list[a] = temp;
			un[a] = temp[0];
			dos[a] = temp[1];
			a++;	//counts up
		}
		
		within = false;	//resets the boolean
		
		cout << "How many children does " << temp << " have? ";	//inputs amount of children
		cin >> b;
		
		cout << "Children of " << temp << ": ";
		
		if(b == 0)	//edge case ends line if there are no children
		{
			cout << endl;
		}
		
		for(int i = 0; i < b; i++)	//gets all children
		{
			cin >> chil;
			
			for (int j = 0; j < a; j++)	//see if the child is already in the people array
			{
				if(chil == list[j])
				{
					c = j;	//gets the index of the array that the name is in if it is already in the array
					within = true;
					break;
				}
			}
			if(!within)
			{
				list[a] = chil;	//adds to the array of people, parents, first char, and second char.
				par[a] = temp;
				un[a] = chil[0];
				dos[a] = chil[1];
				a++;	//counts up
			}
			else
			{
				par[c] = temp;
			}
			within = false;
		}
	}
	cout << endl;	//outputs
	cout << "Child    Parent" << endl;
	cout << "-----    ------" << endl;
	
	for(int i = 0; i < a; i++)	//uses selection sort to sort the list by the alphabet
	{
		order = un[i];	//resets variables
		ind = i;
		w = i + 1;
		
		while(w < a)
		{
			if (un[w] < order)	//gets the lowest first character in the alphabet
			{
				ind = w;
				order = un[w];
			}
			else if(un[w] == order)	//if so gets the lowest second character
			{
				if(dos[w] < dos[ind])
				{
					ind = w;
				}
			}
			w++;	//counts up
		}
		str = list[ind];	//swaps the two strings of people
		list[ind] = list[i];
		list[i] = str;
		
		str = par[ind];	//swaps the two strings of the parents
		par[ind] = par[i];
		par[i] = str;
		
		ch = un[ind];	//swaps the two first characters
		un[ind] = un[i];
		un[i] = ch;
		
		ch = dos[ind];	//swaps the two second characters
		dos[ind] = dos[i];
		dos[i] = ch;
	}
	
	for(int i = 0; i < a; i++)	//outputs the names and parents
	{
		wow = list[i];	//sets the strings to the arrays content
		pars = par[i];
		
		for(int j = 0; j < 9; j++)	//each people string needs 9 characters
		{
			if(wow[j] < 60)	//if the character is less than a letter then add a space
			{
				wow += " ";
			}
		}
		cout << wow << par[i] << endl;	//prints out the result and ends line
		wow = "          ";	//resets the wow string
	}
}