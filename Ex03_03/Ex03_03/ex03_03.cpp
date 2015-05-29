//Colin Bondy
//Ex03-03

#include <iostream>

using namespace std;

class EvenNumber
{
private:

	int val;

public:

	EvenNumber::EvenNumber()
	{
		val = 0;
	}

	EvenNumber::EvenNumber(int dval)
	{
		val = dval;
	}

	int EvenNumber::getValue()
	{
		return val;
	}

	bool EvenNumber::IsEven()
	{
		if (this->getValue() % 2 == 0) {
			return true;
		}
		else
		{
			return false;
		}
	}

	EvenNumber EvenNumber::getNext()
	{
		int nval;
		if (this->IsEven())
		{
			nval = val + 2;

		}
		else {
			nval = val + 3;
		}
		return EvenNumber(nval);
	}

	EvenNumber EvenNumber::getPrevious()
	{
		int nval;
		if (this->getValue())
		{
			nval = val - 2;
		}
		else
		{
			nval = val - 3;
		}
		return EvenNumber(nval);
	}
};


	int main() {

		EvenNumber e = EvenNumber(4);

		cout << e.getValue() << endl;

		EvenNumber e2 = e.getNext();

		cout << e2.getValue() << endl;

		EvenNumber e3 = e.getPrevious();

		cout << e3.getValue() << endl;

		cout << "Enter a number \n";

		int x;

		cin >> x;

		EvenNumber e4 = EvenNumber(x);

		cout << e4.getValue() << endl;

		cout << e4.getNext().getValue() << endl;

		return 0;
	}
