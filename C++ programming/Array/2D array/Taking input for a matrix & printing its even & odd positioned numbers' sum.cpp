#include<iostream>
using namespace std;
int main()
{
    int row,col,sumo=0,sume=0;
    cout<<"Enter row number : ";
    cin>>row;
    cout<<"Enter column number : ";
    cin>>col;
    cout<<endl;
    int A[row][col];
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<"Enter matrix row "<<i+1<<" column "<<j+1<<" value : ";
            cin>>A[i][j];
        }
    }
    cout<<endl;
    cout<<"\nyour matrix is : "<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(j%2==0)
            {
                sume+=A[i][j];
            }
            else
            {
                sumo+=A[i][j];
            }
        }
    }
    cout<<"Summation of even positioned numbers is: "<<sume<<"."<<endl;
    cout<<"Summation of odd positioned numbers is: "<<sumo<<"."<<endl;
    cout<<"Summation of all the odd & even positioned numbers is: "<<sumo+sume<<"."<<endl;
    return 0;
}
