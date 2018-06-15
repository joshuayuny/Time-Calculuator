// Conversion program
#include <iostream>
using namespace std;
int main()
{
	// defining seconds variable
	int seconds;
	// Enter number of seconds
	cout << "Please enter the number of seconds to convert: ";
	cin >> seconds;
	//using if statements to make conversions
	if(seconds >= 86400)
	{
	cout << seconds << " seconds is around " << seconds/86400 << " days";	
	}
	else if(seconds < 86400 && seconds >= 3600)
	{
	cout << seconds << " seconds is around " << seconds/3600 << " hours";
	}
	else if(seconds < 3600 && seconds >= 60)
	{
	cout << seconds << " seconds is around " << seconds/60 << " minutes";
	}
	else if(seconds < 60)
	{
	cout << "You inputted " << seconds << " seconds";
	}
	return 0;
}
