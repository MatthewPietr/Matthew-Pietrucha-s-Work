#include <iostream>
#include <iomanip>
using namespace std;

//this program gets the number of chapters read in the bible over a period of several weeks and uses that data to get the average, high, low, mid, Total read, amount of weeks needed to complete
int main ()
{
	int a, sum = 0, compS, mid, compL, intWeeks;
	float avg, num, compM = 10000, percentage, weeks, floatWeeks;
	int aa[52];
	
	cout << "How many weeks have you been reading? ";	//inputs
	cin >> a;
	
	cout << "Enter the number of chapters read for each week." << endl;
	
	for(int i = 0; i < a; i++)
	{
		cout << "Week #" << i + 1 << ": ";	//inputs and gets sum
		cin >> aa[i];
		sum += aa[i];
	}
	avg = sum / (float) a;	//gets average
	compS = aa[0];		//gets the first array value
	compL = aa[0];
	percentage = (sum / 1189.0) * 100;	//gets the percentage
	weeks = (1189 - sum) / avg;	//gets the amount of weeks to complete the Bible
	intWeeks = weeks;	//converts it to int then back to float
	floatWeeks = intWeeks;
	
	if (intWeeks != weeks)	//if there is a decimal then add one to weeks and convert it to int
	{
		weeks = (int) weeks + 1;
	}
	cout << fixed;	//outputs
	cout << endl << "* Reading statistics *" << endl << endl;
	cout << "Weekly average: " << setprecision(1) << avg << endl;
	
	for(int i = 0; i < a; i++)
	{
		num = aa[i] - avg;	//gets number compared to average
		cout << "Week #" << i + 1 << ": " << num << endl;
		
		if(num < 0)	//converts negative numbers to positive
		{
			num *= -1;
		}
		
		if(aa[i] < compS)	//gets the smallest number
		{
			compS = aa[i];
		}
		
		if(num < compM)	//gets the number closest to the average
		{
			compM = num;
			mid = aa[i];
		}
		
		if(aa[i] > compL)	//gets the largest number
		{
			compL = aa[i];
		}
	}
	cout << endl << "Chapters read to date: " << sum << endl;	//outputs
	cout << "Percent complete: " << setprecision(2) << percentage << "%" << endl << endl;
	cout << "At current average rate, reading will be complete in " << setprecision(0) << weeks << " weeks." << endl << endl;
	cout << "High point: " << compL << endl;
	cout << "Mid point: " << mid << endl;
	cout << "Low point: " << compS;
	
}