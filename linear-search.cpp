#include<iostream>
using namespace std;

void linear(int a[],int n,int data)
{
    int i=0,f=0;
    for(i=0;i<n;i++)
    {
        if(data==a[i])
        {
            cout<<endl<<"Element is found at position :: "<<(i+1);
            f=1;
            break;
        }
    }
    if(f!=1)
        cout<<endl<<"Element is NOT found ";
}

int main()
{
    int i,n,data;
    cout<<"Enter the number of elements in the list(Array) :: ";
    cin>>n;
    int a[n];
    cout<<endl<<"Enter the elements of list(Array) :: "<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter the element to search in  the list(Array) :: ";
    cin>>data;
    linear(a,n,data);

    return(0);
}
