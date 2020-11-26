#include<iostream>
using namespace std;
/*
student-test
student-sports
marks-result
sporst=-result
*/
class student
{
	protected:
		int roll_num;
	public:
		void getrollnum(int a)
		{
			roll_num=a;
		}
		void display_number()
		{
			cout<<"Student roll number is : "<<roll_num<<endl;
		}
		
};
class test:public virtual student
{
	protected:
		float physcis;
		float maths;
		public:
			void getmarks(float p,float m)
			{
				physcis=p;
				maths=m;
			}
			void display_marks()
			{
				cout<<"Your marks in the subject are :"<<endl<<"Physcis  marks : "<<physcis<<endl<<"Maths marks : "<<maths<<endl;
			}
};

class sports:public virtual student
{
	protected:
		int score;
		public:
			void getscore(int s)
			{
				score =s;
			}
			void display_score()
			{
				cout<<"Your score is : "<<score<<endl;
			}
};

class result: public test,public sports
{
	protected:
		float result;
		public:
			void getresult()
			{
				//result=r;
				result = physcis + maths+ score;
			}
			void displayresult()
			{
				cout<<"\nSTUDENT FINAL RESULT"<<endl;
			//	cout<<"Your subject result is : "<<result<<endl<<"Your sports score is : "<<score<<endl;
			    display_number();
			    display_marks();
			    display_score();
			    cout<<"Your total score is  "<<result<<endl;
			    
			}
};
int main()
{
	result ansh;
	ansh.getrollnum(190);
	ansh.display_number();
	ansh.getmarks(89,99);
	ansh.display_marks();
	ansh.getscore(9);
	ansh.display_score();
	ansh.getresult();
	ansh.displayresult();
	
	
	return 0;
}
