//INSERTION  SORT
#include<iostream>
using namespace std;

void insertion(int a[],int n)
{
    int i=0,j=0,temp=0;
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
}

int main()
{
    int i=0,j,temp,flag,n;
    cout<<"Enter the size of array:";
    cin>>n;
    int a[n];

    cout<<"Enter the array elements::\n";
    for(i=0;i<n;i++)
    {
       cin>>a[i];
    }
    cout<<endl<<"Array elements before sorting::\n";
    for(i=0;i<n;i++)
        cout<<a[i]<<"\t";

    insertion(a,n);

    cout<<endl<<"Array elements After sorting::\n";
    for(i=0;i<n;i++)
        cout<<a[i]<<"\t";

  return(0);
}
