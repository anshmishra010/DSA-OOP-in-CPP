#include<iostream>
using namespace std;

class human
{
	public:
		virtual void eat()
		{
			cout<<"I am human and I eat food. "<<endl;
		}
};

class vegitarian: public human
{
	public:
		void eat()
		{
			cout<<"I am a vegitarian human. "<<endl;
		}
};

class non_vegitarian: public human
{
	public:
		void eat()
		{
			cout<<"I am a non-vegitarian human. "<<endl;
		}
};

void function1(human *xyz)
{
	xyz->eat();
}

int main()
{
	human *ptr;
	
	vegitarian vegobj;
	non_vegitarian nonvegobj;
	
	ptr=&vegobj;
	function1(ptr);
	
	ptr=&nonvegobj;
	function1(ptr);
	
}
