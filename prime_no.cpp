#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n" <<endl;
    cin >> n;
    int c=0;
    for(int i=2;i<n;i++)
    {
        if((n%i) == 0)
        {
            c++;
        }
    }
    if(c==0)
    {
        cout << "It is the prime number";
    }
    else
    {
        cout << "its not the prime number";
    }
}
