#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout<<"enter the number for swapping"<<endl;
    cin>> n >>m;
    n=n+m;
    m=n-m;
    n=n-m;
    cout<<n<<" "<<m<<" ";
}
