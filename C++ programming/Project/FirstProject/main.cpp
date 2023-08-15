#include<iostream>
using namespace std;
int main()
{
    char word[30];
    cout<<"Enter a word : ";
    cin>>word;
    cout<<"The vowels are ";
    for(int i=0;i<30;i++)
    {
        word[i]=tolower(word[i]);
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u')
        {
            cout<<"'"<<word[i]<<"' ";
        }
    }
    return 0;
}
