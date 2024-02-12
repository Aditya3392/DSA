#include<iostream>
using namespace std;

bool search_k(int a[], int s, int key)
{
    for(int i=0;i<s;i++)
    {
        if(key==a[i])
        {
            return 1;
        }
    }
    return 0;
}


int main()
{
    int n;
    cin >> n;

    int a[100];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k ;
    cin >> k;

    bool f= search_k(a,n,k);
    if(f)
    {
        cout<< "Number founded"<<endl;
    }
    else{
        cout<<"Number is not in array list"<<endl;
    }
}
