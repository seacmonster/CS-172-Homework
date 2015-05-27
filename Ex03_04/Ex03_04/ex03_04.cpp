//Colin Bondy
//EX03-04
//This is like the exercise we did the last day of class with everyone

#include <iostream>
#include <string>
using namespace std;

string sort(string &s)
{
	for (int i = s.length() - 1; i >= 1; i--)// Finds the max
	{
		char Max = s[0];
		int Maxvalue = 0;

		for (int j = 1; j <= i; j++)
		{
			if (Max < s[j])
			{
				Max = s[j];
				Maxvalue = j;
			}
		}

		if (Maxvalue != i)//Swaps values 
		{
			s[Maxvalue] = s[i];
			s[i] = Max;
		}
	}

	return s;
}

int main()
{
	cout << "Enter a string s: "; //Asks for input string of characters
	string s;
	getline(cin, s);

	cout << "The sorted string is " << sort(s) << endl << endl;

	return 0;
}

