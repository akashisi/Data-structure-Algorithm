#include<iostream>
using namespace std;

void swp(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

void selection(int a[],int n)
{
    int i=0,j=0,mi=0;
    for(i=0;i<n-1;i++)
    {
        mi=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[mi])
            {
                mi=j;
            }
        }
        if(mi!=i)
        {
            swp(a[i],a[mi]);
        }
    }
}

int main()
{
    int i=0,j=0,temp,flag=0,n,c=0;
    cout<<"Enter the size of array:";
    cin>>n;
    int a[n],mi=0;

    cout<<"Enter the array elements::\n";
    for(i=0;i<n;i++)
    {
       cin>>a[i];
    }
    cout<<endl<<"Array elements before sorting::\n";
    for(i=0;i<n;i++)
        cout<<a[i]<<"\t";

    selection(a,n);

    cout<<endl<<"Array elements After sorting::\n";
    for(i=0;i<n;i++)
        cout<<a[i]<<"\t";

  return(0);
}

