#include<iostream>
#include<math.h>
using namespace std;

int jump(int a[],int n,int data)
{
    int i=0,m;
    m=sqrt(n);
    while(a[m]<=data && m<n)
    {
        i=m;
        m=m+sqrt(n);
        if(m>n-1)
            return(-1);
    }
    for(int j=i;j<m;j++)
    {
        if(a[j]==data)
            return(j);
    }
    return(-1);
}

int main()
{
    int i,n,data,p;
    cout<<"Enter the number of elements in the list(Array) :: ";
    cin>>n;
    int a[n];
    cout<<endl<<"Enter the elements of list(Array) :: "<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter the element to search in  the list(Array) :: ";
    cin>>data;
    p=jump(a,n,data);
    if(p<0)
        cout<<endl<<"Element is not Found in the list(Array)";
    else
        cout<<endl<<"Element is found at position :: "<<(p+1);
    return(0);
}

