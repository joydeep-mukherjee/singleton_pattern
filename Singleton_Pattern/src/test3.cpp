//this program can fill and extract from a single buffer
//the single buffer has a fill_indicator parameter
//fill_indicator is 1 when buffer is full and 0 when buffer is empty
//note that the fill_indicator value should always vary between 0 and 1
//in spite of well-meaning safeguards, this program without singleton design pattern,
//fails to maintain the fill_indicator value for the buffer

#include<iostream>
using namespace std;

class buffer{
	private:
	bool empty, full;
	//fill indicator declared as static as it is used by all buffer objects
	static int fill_indicator;
	public:
	buffer()
	{
		empty=true;
		full=false;
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

	//extract only when buffer is full
	//extract buffer from full to empty
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

int main()
{
	//the program does well in not letting a single buffer object fill or extract incorrectly
	//the fill_indicator value remains between 0 and 1
	buffer buff1;
	buff1.fill();
	buff1.display();
	buff1.fill();
	buff1.display();
	buff1.extract();
	buff1.display();
	buff1.extract();
	buff1.display();


	cout<<endl;

	//second buffer object instantiated by accident
	buffer buff2;
	buff1.fill();
	buff2.fill();
	buff2.display(); //will cause fill_indicator to incorrectly display '2'

}






