#include<iostream>
using namespace std;

int main()
{
    int n,i=0,m,k=0,j=0;
    cout<<"Enter the value of m ::";
    cin>>m;
    n=2*m;
    int a[n],b[n];
    cout<<"\nEnter the array elements ::\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"\nArray elements before shuffle ::\n";
    cout<<"\nArray elements after rearranging ::\n";

    for(i=0,j=n/2,k=0;i<n/2,j<n,k<n;i++,j++)
    {
        b[k]=a[i];
        k++;
        b[k]=a[j];
        k++;
    }
    for(i=0;i<n;i++)
    {
        a[i]=b[i];
        cout<<a[i]<<" ";
    }
    return(0);

}
