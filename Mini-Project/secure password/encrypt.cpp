// Encryption is happening

#include<iostream>
#include<fstream>
#include<stdio.h>
using namespace std;

int main()
{
    char ch;
    fstream fps ,fpt; 
    // fstream = has the capabilities of both ofstream and ifstream
    // fps and fpt are two variable 
    
    fps.open("ansh.txt", fstream::in); // opening the file in the reading mode
    if(!fps) //checking wether file is opened or not
    {
        cout<<"\nError in opening the main file "<<endl;
        return 0;
    } 

    fpt.open("temp.txt",fstream::out); //opening the temporary file for copying the data from main file to temp and later will revert it encrpted string into the  main file

    if(!fpt)
    {
        cout<<"Error occured while opening the temporary file "<<endl;
        return 0;
    }


    // in this while loop trying to copy content of main file to temporary file and encrption is done.
    while (fps>>noskipws>>ch) // noskipws = When we set noskipws format flag, then it does not skip any number of whitespaces before the next input. Tab spaces, blank spaces and carriage returns are considered whitespaces. It will consider any whitespace as part of the next input field
    {
        ch = ch +100;
        fpt<<ch;
    }

    fps.close();
    fpt.close();

    fps.open("ansh.txt",fstream::out); //opening for writing 
    if(!fps)
    {
        cout<<"Error occured while opening main file "<<endl;
        return 0;
    }
    fpt.open("temp.txt",fstream::in);
    if(!fpt)
    {
        cout<<"Error occured while opening temporary file "<<endl;
        return 0;
    }
    while (fpt>>noskipws>>ch)
    {
        fps<<ch;   
    }

    fpt.close();
    fps.close();

    cout<<"Message ENCRYPTED"<<endl;
    cout<<"\n";
    return 0;

}