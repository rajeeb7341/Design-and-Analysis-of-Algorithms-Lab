#include<iostream>
using namespace std;

void max_heapify(int *a,int n,int i)
{
    int largest=i;
    int l=2*i;
    int r=2*i+1;
    if(l<n && a[l]>a[i])
    {
        largest=l;

    }
      if(r<n && a[r]>a[i])
    {
        largest=r;
    }
    if(largest!=i)
    {
        swap(a[i],a[largest]);
        max_heapify(a,n,largest);
    }
}
void heap_sort(int *a,int n)
{
    for(int i=n/2-1;i>=0;i--)
    {
        max_heapify(a,n,i);
    }
    for(int i=n-1;i>=0;i--)
    {
        swap(a[0],a[i]);
        max_heapify(a,i,0);
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
    int a[]={12, 11, 13, 5, 6, 7};
    int n=sizeof(a)/sizeof(a[0]);
    heap_sort(a,n);
    print(a,n);
}
