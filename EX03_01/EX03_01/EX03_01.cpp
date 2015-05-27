//Colin Bondy
//EX03-01

#include<iostream>
#include<string>

using namespace std;

class Fan //Fan class
{
public:

	Fan()
	{ //Defaults
		speed = 1;
		on = false;
		radius = 5;
	
	}

	int getSpeed() //gets and returns speed
	{
		return speed;
	}

	void setSpeed(int speed) //sets speed
	{
		this->speed = speed;
	}

	bool isOn() //turns on
	{
		return on;
	}

	void setOn(bool trueOrFalse) //sets fan 
	{
		this->on = trueOrFalse;
	}

	double getRadius()
	{
		return radius;
	}

	void setRadius(double radius)
	{
		this->radius = radius;
	}
private: //variables
	int speed;
	bool on;
	double radius;

};


int main()
{
	cout << "First fan properties: " << endl;
	Fan fan; //Fan 0 settings
	fan.setSpeed(3);
	fan.setRadius(10);
	fan.setOn(true);

	//Fan 0 output
	cout << "Fan speed: " << fan.getSpeed() << endl;
	cout << "Fan radius: " << fan.getRadius() << endl;
	cout << "Fan on? " << fan.isOn() << endl;

	Fan fan1; //fan 1 settings
	fan1.setSpeed(2);
	fan1.setRadius(5);
	fan1.setOn(false);

	//Fan 1 output
	cout << "\nSecond fan properties: " << endl;
	cout << "Fan speed: " << fan1.getSpeed() << endl;
	cout << "Fan radius: " << fan1.getRadius() << endl;
	cout << "Fan on? " << fan1.isOn() << endl;
	


	return 0;
}

