//INSERTION  SORT
#include<iostream>
using namespace std;

void merges(int a[],int lb,int mid,int ub)
{
    int i=lb,j=mid+1,k=lb;
    int b[lb+ub+1];
    while(i<=mid && j<=ub)
    {
        if(a[i]<=a[j])
        {
            b[k]=a[i];
            i++;
        }
        else
        {
            b[k]=a[j];
            j++;
        }
        k++;
    }
    if(i>mid)
    {
        while(j<=ub)
        {
            b[k]=a[j];
            j++;
            k++;
        }
    }
    else
    {
        while(i<=mid)
        {
            b[k]=a[i];
            i++;
            k++;
        }
    }
    for(k=lb;k<=ub;k++)
    {
        a[k]=b[k];
    }
}

void merge_sortt(int a[],int lb,int ub)
{
    int mid;
    if(lb<ub)
    {
        mid=(lb+ub)/2;
        merge_sortt(a,lb,mid);
        merge_sortt(a,mid+1,ub);
        merges(a,lb,mid,ub);
    }
}


int main()
{
    int i=0,n;
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
        cout<<a[i]<<"  ";

    merge_sortt(a,0,n-1);

    cout<<endl<<"Array elements After sorting::\n";
    for(i=0;i<n;i++)
        cout<<a[i]<<"  ";

  return(0);
}

