//Colin Bondy
//Ex03-03

#include <iostream>

using namespace std;

class EvenNumber
{

private:
	int object;
public:
	EvenNumber()
	{
		object = 0;
	}
	EvenNumber(int O)
	{
		O = object;
	}
	int getValue()
	{
		return object;
	}
	int getNext()
	{
		return EvenNumber;
	}

	int getPrevious()
	{
		return object
	}



};