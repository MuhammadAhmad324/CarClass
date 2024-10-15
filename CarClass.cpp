
#include<iostream>
using namespace std;
class Car
{
private:
	int yearModel;
	string make;
	int speed;
public:
	Car(int ym, string m, int s = 0)
	{
		yearModel = ym;
		make = m;
		speed = 0;
	}
	void setYearModel(int y)
	{
		yearModel = y;
	}
	int getYearModel() const
	{
		return yearModel;
	}

	void setMake(string m)
	{
		make = m;
	}
	string getMake() const
	{
		return make;
	}
	void setSpeed(int s)
	{
		speed = s;
	}
	int getSpeed() const
	{
		return speed;
	}
	void accelerate()
	{
		speed = speed + 5;
	}
	void brake()
	{
		speed = speed - 5;
	}
};
int main()
{
	int year;
	cout << "Enter the year model:";
	cin >> year;
	string make;
	cout << "Enter the information for make of car:";
	cin >> make;
	Car c(year, make);
	int speed;
	cout << "Please enter the speed of car:";
	cin >> speed;
	c.setSpeed(speed);
	for (int i = 0; i < 5; i++)
	{
		c.accelerate();
		cout << "Speed " << i + 1 << ":" << c.getSpeed() << "\n";
	}
	for (int i = 0; i < 5; i++)
	{
		c.brake();
		cout << "Speed" << i + 1 << ":" << c.getSpeed() << "\n";
	}


	return 0;
}
