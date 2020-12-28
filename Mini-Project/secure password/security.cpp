#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int ch; //ch=choice of input
    char data[200];
    string pass,oldp,password,pass1,pass2; // old = old password, p =password,p1=new password ,p2=newpasword
    bool flag =false;
    
    cout<<"HELLO AND WELCOME TO THE SECURITY SYSTEM"<<endl;
    cout<<"\n----------FILE DECRYPTION IS PERFORMING---------------"<<endl;

    //decryption
        fstream t1,t2;
        char d;
        t1.open("ansh.txt",fstream::out);
        if(!t1)
        {
            cout<<"Error in opening the t1 or main file "<<endl;
            return 0;
        }
        t2.open("temp.txt",fstream::in);
        if(!t2)
        {
            cout<<"Error occured while opening t2 or temporary file "<<endl;
            return 0;
        }
        while (t2>>noskipws>>d)
        {
            d = d-100;
            t1<<d;
        }
        t1.close();
        t2.close();
        cout<<endl;

    do{
        cout<<"\n1) DO YOU WANT TO RESET THE PASSWORD ?"<<endl;
        cout<<"\n2) DO YOU WANT TO ACCESS THE DATA ? "<<endl;
        cout<<"\n3) DO YOU WANT EXIT ?"<<endl;
        cout<<"ENTER YOUR CHOICE -- "<<endl;
        cin>>ch;

        switch (ch)
        {
            case 1:
            {
                ifstream myfile; //ifstream -  It represents input Stream and this is used for reading from files.
                myfile.open("ansh.txt"); //opening file

                cout<<"\n__YOU HAVE CHOOSEN TO RESET THE PASSWORD __"<<endl;
                cout<<"ENTER THE OLD PASSWORD"<<endl;
                cin>>oldp;

                if(myfile.is_open()) //checking the stage of my file opened or not
                {
                    while (!myfile.eof()) //work till the end of file
                    {
                        myfile>>pass;
                        if(oldp==pass)
                        {
                            myfile.close();
                            ofstream myfile1; // ofstream - This data type represents the output file stream and is used to create files and to write information to files.
                            myfile1.open("ansh.txt");
                            if(myfile1.is_open())
                            {
                                cout<<"ENTER NEW PASSWORD "<<endl;
                                cin>>pass1;
                                cout<<"ENTER PASSWORD AGAIN TO CONFIRM "<<endl;
                                cin>>pass2;

                                if(pass1==pass2)
                                {
                                    myfile1<<pass1;
                                    cout<<"\nPASSWORD CHANGED SUCCESSFULLY "<<endl;
                                    cout<<"\nTHANK YOU"<<endl;
                                }

                            }

                        }
                        else
                        {
                            cout<<"---WARNING---ENTER CORRECT PASSWORD"<<endl;
                        }

                    }
                    
                }
                break;
                
            }

            case 2:
            {
                ifstream myfile2;
                myfile2.open("ansh.txt");
                cout<<"\nYOU HAVE CHOOSED OPTION TO VIEW THE DEATAILS"<<endl;
            
                cout<<"ENTER THE PASSWORD FOR CONFIRMATION"<<endl;
                cin>>password;

                if(myfile2.is_open())
                {
                    while (!myfile2.eof())
                    {
                        myfile2>>pass;
                        if(password==pass)
                        {
                            cout<<"THANKS FOR CONFORMATION"<<endl;
                            cout<<"ACCESS GRANTED"<<endl;
                            cout<<endl;
                            cout<<"\nYOUR PRIVATE DATA IS HERE"<<endl;
                            cout<<"\n"<<endl;
                            cout<<"--------------------------"<<endl;
                            flag =true;
                        }
                        else
                        {
                            cout<<"---WARNING---PASSWORD WRONG"<<endl;
                        }

                    }
                    
                }
                if(flag==true)
                {
                    ifstream myfile3;
                    myfile3.open("ansh1.txt");
                    myfile3>>data;
                    cout<<data;
                    myfile3.close();
                }
                break;
            }
            case 3:
            {
                break;
            }
            default:
                cout<<"\nENTER THE VALID CHOICE"<<endl;
        }
    }
    while (ch!=3);
    {
        return 0;
    }  
}