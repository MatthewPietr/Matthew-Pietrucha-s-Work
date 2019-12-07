#include <iostream>
using namespace std;

//this program makes a minesweeper board
int main ()
{
	int size1, size2, counter;	//size1 is the size of the row, size2 is the size of the column, counter is the amount of bombs nearby
	string arr[40];	//the array
	string temp1, temp2, temp3;	//temp1 is the string, temp 2 is the string before, temp3 is the string after.
	
	cin >> size1;	//inputs
	cin >> size2;
	
	for(int i = 0; i < size1; i++)
	{
		cin >> arr[i];
	}
	
	for(int i = 0; i < size1; i++)	//row
	{
		temp1 = arr[i];	//sets
		
		if(!(i == 0))	//sets only if it wont cause an error
		{
			temp2 = arr[i - 1];
		}
		
		if(!(i == size1 - 1))
		{
			temp3 = arr[i + 1];
		}
		
		for(int j = 0; j < size2; j++)	//column
		{
			if(temp1[j] == '*')	//prints out bomb
			{
				cout << '*';
			}
			else
			{
				if(!(j == 0))	//adds one for to the left
				{
					if(temp1[j - 1] == '*')
					{
						counter++;
					}
				}
				
				if(!(j == size2 - 1))	//to the right
				{
					if(temp1[j + 1] == '*')
					{
						counter++;
					}
				}
				
				if(!(i == 0))
				{
					if(!(j == 0))
					{
						if(temp2[j - 1] == '*')	//below left
						{
							counter++;
						}
					}
					
					if(!(j == size2 - 1))
					{
						if(temp2[j + 1] == '*')	//below right
						{
							counter++;
						}
					}
					
					if(temp2[j] == '*')	//below
					{
						counter++;
					}
				}
		
				if(!(i == size1 - 1))
				{
					if(!(j == 0))
					{
						if(temp3[j - 1] == '*')	//up left
						{
							counter++;
						}
					}
					
					if(!(j == size2 - 1))
					{
						if(temp3[j + 1] == '*')	//up right
						{
							counter++;
						}
					}
					
					if(temp3[j] == '*')	//up
					{
						counter++;
					}
				}
				
				cout << counter;	//prints out
				
				counter = 0;	//resets
			}
		}
		cout << endl;	//ends line
	}
	
	
}