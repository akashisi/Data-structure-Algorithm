#include<iostream>
using namespace std;

int binary(int a[],int n,int data)
{
    int l=0,u=n,mid;

    while(l<u)
    {
        mid=(l+u)/2;
        if(a[mid]==data)
            return(mid);
        else if(data>a[mid])
            l=mid+1;
        else
            u=mid-1;
    }
    return(-1);

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
    d=binary(a,n,data);
    if(d==-1)
        cout<<endl<<"Data is NOT in the list (Array)"<<endl;
    else
        cout<<endl<<"Element is found at position :: "<<(d+1);

    return(0);
}
