//implementation of the singleton design patter
/*
#include<iostream>
using namespace std;

class Singleton{
	private:
	Singleton()
	{
	}
	int id;
	//static variables in a class are initialized once and shared by all objects (in this case only one object)
	static Singleton* oneInstance;
	public:
	//static methods belong to the class, so can only be called by the class
	static Singleton* getInstance()
	{
		if (!oneInstance)
			oneInstance= new Singleton;
		return oneInstance;
	}
	void setID(int num)
	{
		id=num;
	}
	void display()
	{
		cout<<"Singleton class with ID: "<<id<<" instantiated at address "<<oneInstance<<endl;
	}
};

Singleton *Singleton::oneInstance = 0;

int main()
{
	//have to use the class name for calling static function; prevents from being called on its own
	Singleton::getInstance()->setID(10);
	Singleton::getInstance()->display();

	//note that further calls to getInstance() does not produce more instances; address remain same
	Singleton::getInstance()->setID(20);
	Singleton::getInstance()->display();
}

*/
