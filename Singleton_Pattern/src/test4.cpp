//implements the buffer as a singleton class
/*
#include<iostream>
using namespace std;

class buffer{
	private:
	bool empty, full;
	static int fill_indicator;
	static buffer* oneInstance;
	buffer()
	{
		empty=true;
		full=false;
	}
	public:
    static buffer* getInstance()
    {
    	if (!oneInstance)
    		oneInstance= new buffer;
    	return oneInstance;
    }
	//fill only when buffer is empty
	//fill a buffer to its full
	void fill()
	{
		if(isEmpty()&& (!isFull()))
		{
			fill_indicator++;
			empty=false;
			full=true;
		}
		else
			cout<<"Can't fill a full buffer"<<endl;
	}
	void extract()
	{
		if((!isEmpty())&& isFull())
		{
			fill_indicator--;
			empty=true;
			full=false;
		}
		else
			cout<<"Can't extract from an empty buffer"<<endl;
	}
	bool isEmpty()
	{
		if (empty)
			return true;
		else
			return false;
	}
	bool isFull()
	{
		if(full)
			return true;
		else
			return false;
	}
	void display()
	{
		cout<<"Fill Indicator: "<<fill_indicator<<endl;
	}
};

int buffer::fill_indicator=0;
buffer* buffer::oneInstance=0;

int main()
{
	buffer* buff1=buffer::getInstance();
	buff1->fill();
	buff1->display();
	buff1->fill();
	buff1->display();


	cout<<endl;
	//try to create a second object buff2 using getInstance()
	//try to fill the buffer using buff2
	//note how the fill indicator value remains unchanged when using singleton pattern
	buffer* buff2=buffer::getInstance();
	buff2->fill();
	buff2->display();

	cout<<endl;

	//try to extract the buffer using buff1 and buff2
	buff1->extract();
	buff1->display();
	buff1->extract();
	buff1->display();

	buff2->extract();
	buff2->display();

	//proof that buffer1 and buffer 2 are the same object
	cout<<"buff1 Address: "<<buff1<<endl<<"buff2 Address: "<<buff2<<endl;
}
*/





