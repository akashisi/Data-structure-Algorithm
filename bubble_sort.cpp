#include<iostream>
using namespace std;

void bubble(int a[],int n)
{
    int i=0,j=0,temp=0,flag;
    for(i=0;i<n-1;i++)
    {
        flag=0;
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
              temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
            }
            flag=1;
        }
        if(flag==0)
            break;
    }

}

int main()
{
    int i=0,j=0,temp,flag,n;
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

    bubble(a,n);

    cout<<endl<<"Array elements After sorting::\n";
    for(i=0;i<n;i++)
        cout<<a[i]<<"\t";

  return(0);
}
