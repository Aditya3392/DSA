#include<iostream>
using namespace std;


int reverse_arr(int a[], int s )
{
    int st=0;
    int ed= s-1;

    while(st<=ed)
    {
        swap(a[st],a[ed]);
        st++;
        ed--;
    }

}
int printarr(int a[], int s)
{
    for(int i=0;i<s;i++)
    {
        cout<< a[i] <<' ';
    }
}

int main()
{
    int n;
    cin >> n;

    int a[100];

    for(int i=0; i<n ; i++)
    {
        cin >> a[i];
    }

    reverse_arr(a,n);
    printarr(a,n);
}
