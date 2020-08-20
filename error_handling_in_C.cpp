
//NOTE  PRESS ENTER AFTER ENTERING EVERY ELEMENT OF ARRAY..

#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;


int main()
{
    int n,i=0,e;
    cout<<"Enter the number of elements in th array :: ";
    cin>>n;
    int a[n];
    cout<<"\nEnter array elements :: \n";
    for(i=0;i<10;i++)
    {
        if(i>=n)
        {
            fprintf(stderr,"Array Completed ");
            //exit(-1);
            break;
        }
        cin>>a[i];
    }
    cout<<endl<<"Array elements are ::\n";
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    return(0);
}
