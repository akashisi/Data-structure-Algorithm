#include<iostream>
#include<math.h>
using namespace std;


int binary(int a[],int l,int r,int data)
{
    int mid;
    if(r>=l)
    {
        mid=l+(r-l)/2;
        if(a[mid]==data)
            return(mid);
        if(a[mid]>data)
            return(binary(a,l,mid-1,data));
        return(binary(a,mid+1,r,data));
    }

    return(0);

}


int expo(int a[],int n,int k)
{
    if(a[0]==k)
    {
        return(0);
    }
    int i=1,d,m;
    while(i<n && a[i]<=k)
    {
        i=i*2;
        m=min(i,n);
        d=binary(a,i/2,m,k);
    }
    return(d);
}


int main()
{
    int i,n,data,d;
    cout<<"Enter the number of elements in list(Array) :: ";
    cin>>n;
    int a[n];
    cout<<endl<<"Enter the values of list(Array) in sorted order :: "<<endl;

    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<endl<<"Enter the data to search in the array :: ";
    cin>>data;
    d=expo(a,n,data);
    if(d==-1)
        cout<<endl<<"Data is NOT in the list (Array)"<<endl;
    else
        cout<<endl<<"Element is found at position :: "<<(d+1);

    return(0);
}
