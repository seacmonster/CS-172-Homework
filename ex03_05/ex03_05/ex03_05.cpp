//Colin Bondy
//EX03-05


#include <iostream>
using namespace std;

class MyInteger //Integer
{
private:
	int value;

public:
	int getValue() const //Gets value
	{
		return value;
	}

	MyInteger(int value) 
	{
		this->value = value;
	}

	bool isPrime() const //prime true or false
	{
		return isPrime(value);
	}

	static bool isPrime(const MyInteger& o) //Returns prime
	{
		return isPrime(o.getValue());
	}

	static bool isPrime(int num) //Determines prime
	{
		if ((num == 1) || (num == 2))
		{
			return true;
		}

		for (int i = 2; i <= num / 2; i++)
		{
			if (num % i == 0)
				return false;
		}

		return true;
	}

	bool isEven() const //Even true or false
	{
		return isEven(value);
	}

	static bool isEven(int n) //Returns Even
	{
		return n % 2 == 0;
	}

	static bool isEven(const MyInteger& n)  //Determines Even
	{
		return isEven(n.getValue());
	}

	bool equals(int anotherNum) const
	{
		return value == anotherNum;
	}

	bool equals(const MyInteger& o) const
	{
		return value == o.getValue();
	}
};

int main()
{
	MyInteger n1(5);
	cout << "n1 is even? " << n1.isEven() << endl;
	cout << "n1 is prime? " << n1.isPrime() << endl;
	cout << "5 is prime? " << MyInteger::isPrime(5) << endl;
}
 