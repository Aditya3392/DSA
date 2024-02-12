#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    int i=n;
    while(i>=1)
    {
        int j=i;
        while(j>=1){
            cout<<"*" ;
            j=j-1;
        }
        cout<<endl;
        i=i-1;
    }
}
