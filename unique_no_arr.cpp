#include<iostream>
using namespace std;


int unique_no(int a[],int n)
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans^a[i];
    }
    return ans;

}
int main()
{
    int n;
    cin>> n;

    int a[100];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int d=unique_no(a,n);
    cout<< d ;

}
