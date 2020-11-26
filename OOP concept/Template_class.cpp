#include<iostream>
using namespace std;
template<typename T>
class weight{
    private:
           T kg;
    public:
           void setdata(T x)
           {
               kg=x;
           }
           T getdata()
           {
               return kg;
           }
};



int main()
{
    weight <int>w1;
    w1.setdata(5);
    cout<<"Value is "<<w1.getdata()<<endl;

    weight <double>w2; //this is where template class comes into the picture that you don't have to right seperate class for double or any other data type.
    w2.setdata(3.44456);
    cout<<"Value of the double is  "<<w2.getdata()<<endl;
    
}