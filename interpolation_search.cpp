#include<iostream>
#include<math.h>
using namespace std;

int interpolation(int a[],int n,int value)
{
  int low = 0;
  int high = n - 1;
  int mid;

  while (a[low] <= value && a[high] >= value)
  {
    mid = low + ((value - a[low]) * (high - low)) / (a[high] - a[low]);
    if (a[mid] < value)
    {
      low = mid + 1;
    }
    else if (a[mid] > value)
    {
      low = mid - 1;
    }
    else
    {
      return mid;
    }
  }
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
    p=interpolation(a,n,data);
    if(p<0)
        cout<<endl<<"Element is not Found in the list(Array)";
    else
        cout<<endl<<"Element is found at position :: "<<(p+1);
    return(0);
}

