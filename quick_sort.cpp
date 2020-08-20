#include<iostream>
using namespace std;

void swp(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int part(int a[],int lb,int ub)
{
    int start,last,pivot;
    start=lb;
    last=ub;
    pivot=a[lb];
  while(start<last)
  {
    while(a[start]<=pivot)
    {
        start++;
    }
    while(a[last]>pivot)
    {
        last--;
    }
    if(start<last)
    {
        swp(a[start],a[last]);
    }
  }
    swp(a[lb],a[last]);
    return(last);

}

void quick(int a[],int lb,int ub)
{
    int loc;
  if(lb<ub)
  {
    loc=part(a,lb,ub);
    quick(a,lb,loc-1);
    quick(a,loc+1,ub);
  }
}

int main()
{
    int n;
    cout<<"\nEnter the number of elements in the list(Array) :: ";
    cin>>n;
    int a[n],i=0;
    cout<<"Enter the array elements :: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<endl<<"ARRAY ELEMNTS BEFORE SORTING::"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";
    }
    quick(a,0,n-1);

    cout<<endl<<"ARRAY ELEMNTS AFTER SORTING::"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";
    }

    return(0);
}
