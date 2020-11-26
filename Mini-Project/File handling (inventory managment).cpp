#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Item
{
	public:
		char name[50];  //assigning the parameters
		int quantity;
		int cost;
		int code;
		
		bool operator==(const Item& i1)
		{
			if(code==i1.code) 
			{
				return 1;
				return 0;
			}
		}
		bool operator<(const Item& i1)
		{
			if(code<i1.code)
			{
				return 1;
				return 0;
			}
		}
};
vector<Item> o1;
void print(Item &i1);
void display();
void insert();
void search();
void dlt();

bool compare(const Item &i1,const Item &i2) //as it accepts 2 parameters and used in sorting
{
	return i1.cost< i2.cost;
}

void insert() //insert function 
{
	Item i1;
	cout<<"\nEnter the Item name :"<<endl;
	cin>>i1.name;
	cout<<"Enter the item amount you want ? "<<endl;
	cin>>i1.quantity;
	cout<<"Enter Item code : "<<endl;
	cin>>i1.code;
	o1.push_back(i1);
}

void display()  //display function
{
	for_each(o1.begin(),o1.end(),print);
}

void print(Item &i1) 
{
	cout<<"\nItem name : "<<i1.name<<endl;
	cout<<"\nItem quantity : "<<i1.quantity<<endl;
	cout<<"\nItem Cost : "<<i1.cost<<endl;
	cout<<"\nItem code : "<<i1.code<<endl;
}

void search()  //searching the particular data
{
	vector<Item>::iterator p;
	Item i1;
	cout<<"\nEnter the item code you want to search : "<<endl;
	cin>>i1.code;
	p=find(o1.begin(),o1.end(),i1);
	if(p==o1.end())
	{
		cout<<"\nThe item you entered is not found , kindly re-check at your side "<<endl;
		
	}
	else
	{
		cout<<"\nYour item found"<<endl;
	}
}

void dlt() // delete the particular data using item code keyword
{
	vector<Item>::iterator p;
	Item i1;
	cout<<"\nEnter the item CODE to be deleted"<<endl;
	cin>>i1.code;
	p=find(o1.begin(),o1.end(),i1);
	if(p==o1.end())
	{
		cout<<"\nItem not found please re-check at your end"<<endl;
		
	}
	else
	{
		cout<<"\nItem found"<<endl;
		o1.erase(p);
		cout<<"\nItem deleted"<<endl;
	}
}

int main()
{
	int ch;
	do
	{
		cout<<"\n--- MENU ----"<<endl;
		cout<<"1.Insert the DATA "<<endl;
		cout<<"2.Display the data "<<endl;
		cout<<"3.Search the item "<<endl;
		cout<<"4.Sort the data by the price of the item : "<<endl;
		cout<<"5.Delete the item "<<endl;
		cout<<"6.Exit"<<endl;
		
		cout<<"Enter the choice you want to perform :"<<endl;
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				insert();
				break;
			case 2:
				display();
				break;
			case 3:
				search();
				break;
			case 4:
				sort(o1.begin(),o1.end(),compare);
				cout<<"\nSorted on cost "<<endl;
				display();
				break;
			case 5:
				dlt();
				break;
			case 6:
				exit(0);
				
		}
	}while(ch!=7);
	 return 0;
}
