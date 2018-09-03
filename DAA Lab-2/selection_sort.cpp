#include<iostream>
using namespace std;

void SelectionSort(int *a,int n)
{
    int minIndex;
    for(int i=0;i<n-1;i++)
    {
        minIndex=i;
    for(int j=i+1;j<n;j++)
    {
        if(a[j]<a[minIndex])
        {
            minIndex=j;
        }
    }
        if(minIndex!=i)
        {
        swap(a[minIndex],a[i]);
        }
}
}
void print(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int a[]={4,5,1,0,2,7};
    int n=sizeof(a)/sizeof(int);
    SelectionSort(a,n);
    print(a,n);
    return 0;
}

