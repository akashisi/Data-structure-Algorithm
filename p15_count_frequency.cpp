#include<iostream>
using namespace std;

int main()
{
    int a[]={1,2,4,2,3,5,4,7,6,5,8,67,6,5,4,5,4,5,4,3,2,1,2,3,4,5,6,7,8,9,0,9,8,9,0,9,8,7,8,7,6,7,6,5,3};
    int n,i=0,c[11]={0},co=0;
    n=sizeof(a)/sizeof(a[0]);
    cout<<"Size of array :: "<<n<<endl;
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
            c[0]++;
        else if(a[i]==1)
            c[1]++;
        else if(a[i]==2)
            c[2]++;
        else if(a[i]==3)
            c[3]++;
        else if(a[i]==4)
            c[4]++;
        else if(a[i]==5)
            c[5]++;
        else if(a[i]==6)
            c[6]++;
        else if(a[i]==7)
            c[7]++;
        else if(a[i]==8)
            c[8]++;
        else if(a[i]==9)
            c[9]++;
        else
            c[10]++;
    }
    for(i=0;i<10;i++)
    {
        cout<<i<<" OCCURES :: "<<c[i]<<" times ."<<endl;
    }
    cout<<"OTHER NUMBERS OCUURE "<<c[10]<<" times .";
    return(0);
}
