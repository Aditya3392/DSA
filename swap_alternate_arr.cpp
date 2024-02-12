#include<iostream>
using namespace std;

int swap_arr(int a[], int n)
{
    int b=0;
    while(b<n-1)
    {
        swap(a[b],a[b+1]);
        b+=2;
    }
}
int print_arr(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

int main(){
    int n;
    cin>> n;

    int a[100];
    for(int i=0; i<n ;i++)
    {
        cin>>a[i];
    }

    swap_arr(a,n);
    print_arr(a,n);
}
