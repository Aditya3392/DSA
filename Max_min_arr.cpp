#include<iostream>
using namespace std;


int max_arr(int b[],int s)
{
    int maxi=INT_MIN;
    for(int i=0; i < s; i++ )
    {
        if(b[i]>maxi)
        {
            maxi=b[i];
        }
    }
    return maxi;
}

int min_arr(int b[],int s)
{
    int mini=INT_MAX;
    for(int i=0; i < s; i++ )
    {
        if(b[i]<mini)
        {
            mini=b[i];
        }
    }
    return mini;
}

int main(){
    int n;
    cin>> n ;
    int a[100];
    for(int i=0; i<n ;i++){
        cin>>a[i];
    }
    cout<< "Maximum number of array is " << max_arr(a,n)<< endl;
    cout<< "Minimum number of array is " << min_arr(a,n)<< endl;

}
