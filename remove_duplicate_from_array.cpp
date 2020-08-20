#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a[]={1,2,4,2,3,5,4,7,6,5,8,6,7,6,5,4,5,4,5,4,3,2,1,2,3,4,5,6,7,8,9,0,9,8,9,0,9,8,7,6,7,6,5,3};
    int i=0,j=0,n,k=0;
    n=sizeof(a)/sizeof(a[0]);

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                for(k=j+1;k<n;k++)
                {
                    a[k-1]=a[k];
                }
                j--;
                n--;
            }
        }
    }

    cout<<endl<<"ARRAY ELEMENTS AFTER REMOVING DUPLICATE ELEMENTS "<<endl;

    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return(0);
}
