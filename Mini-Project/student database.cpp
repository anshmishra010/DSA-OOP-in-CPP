#include <iostream>
#include <string>
using namespace std;
 class student
 {private:
     string name, DoB , blood_grp , addr, year_class, mob;
     int div;
     int *rollno; //Declaration Of Pointer
 public :
     friend class faculty; //faculty class is a friend of student class
    // default constructor
    student()
    {
        rollno = new int;  //reserve single location for roll no
        *rollno=div=-1;
        name=blood_grp=DoB=addr=year_class=mob=" ";


    }


    // destructor
    ~student()
    {
        delete rollno;  //deallocation of roll no
    }
    // function to add information in student database
    void add_data()
    {
        cout << "\nEnter Student Information :";


        cout << "\nEnter Name : ";
        cin.ignore();
        getline(cin,name);
        cout << "Enter Roll No: ";
        cin >> *rollno;
        cout << "Enter Year(SE/TE/BE) :";
        cin >> year_class;
        cout << "Enter Div(1/2/3/4/5) :";
        cin >> div;
        cout  << "Enter DoB :";
        cin >> DoB;
        cout << "Enter Blood Group :";
        cin >> blood_grp;
        cout << "Enter Mobile No : ";
        cin >> mob;
        cout << "Enter Address : ";
        cin >> addr;


        }
        // function to display student information
        void display()
        {
            cout << "\n-------------------------------------------------";
            cout << "\nName           :"<< name;
            cout << "\nRoll no        :"<< *rollno;
            cout << "\nYear(SE/TE/BE) :"<<  year_class;
            cout << "\nDiv(1/2/3/4/5) :"<< div;
            cout << "\nDoB            :"<< DoB;
            cout << "\nBlood Group    :"<< blood_grp;
            cout << "\nMobile No      :"<<  mob;
            cout << "\nAddress        :"<< addr;
            cout << "\n-------------------------------------------------";
        }
        // static member function
        static void header()
        {
            cout << "\n * * * Student Information System * * *";
        }
    }; // student class ends here


    class faculty
    {
    private:
        int id;
    public:
        // default constructor
        faculty()
        {
            id=000;
        }
        // copy constructor
        faculty (const faculty &f1)
        {
            id = f1.id;
        }
        // function to display specific division information
        void f_display(student &obj, int f_d)
        {
            try
            {
                if (obj.div == f_d)
                    obj.display();
                else
                    throw (obj.div);
            }
            catch (int x)
            {
         cout << "\n Invalid Division/ you are not teaching to this div ....";
            }
        }


    }; // faculty class ends here

int main()
{
    student st[5];
    faculty f;
    int ch=0, count=0;
    do
    {
        cout << "\n * * * * Student Information System * * * * ";
        cout << "\n * * * * Menu * * * * ";
        cout << "\n 1. Add Information ";
        cout << "\n 2. Display Information ";
        cout << "\n 3. Faculty wise Information ";
        cout << "\n 4. Exit";
        cout << "\n Enter Choice : ";
        cin >> ch;




        switch(ch)
        {
        case 1 :
            st[count].add_data();
            count++;
            break;
        case 2 :
            for (int j =0; j< count ; j++)
            {
                student::header(); // static function call
                st[j].display();
            }
            break;
        case 3 :
            int f_div;
            cout << "\n Enter Division of Faculty : "<<endl;
            cin >> f_div;


            for(int j=0; j < count; j++)
            { cout << "\n * * * Student Information System ( Faculty of OOP ) * * *"<<endl; 
                f.f_display(st[j], f_div);
            }
            break;
        case 4 :
            exit(0);
        }
    } while (ch!=4);//end of while
  return 0;
}//end of main
