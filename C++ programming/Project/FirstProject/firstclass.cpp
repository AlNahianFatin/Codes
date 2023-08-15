#include "firstclass.h"
#include<iostream>
using namespace std;

FirstClass::FirstClass()
{
    cout<<"Inside the constructor."<<endl;
}
FirstClass::~FirstClass()
{
    cout<<"Inside the destructor."<<endl;
}
void FirstClass :: display()
{
    cout<<"Inside the display function."<<endl;
}
