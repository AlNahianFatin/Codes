#include<iostream>
using namespace std;
int display(int num)
{
    num=20;
    return num;
}
int main()
{
    int x=10;
    cout<<"Before calling the function, x = "<<x<<endl;
    display(x);
    cout<<"After calling the function, x = "<<x<<endl<<"The value of x is not changed because only a copy of the argument was passed to the function, not the original argument."<<endl;
    int y=display(x);
    cout<<"After initializing the value of the function to a new variable, y = "<<y<<endl;
    return 0;
}
