#include<iostream>
using namespace std;

void insertionSort(int *a,int n)
{
    int key,i;
    for(int j=1;j<n;j++)
    {
        key=a[j];
        i=j-1;
        while(i>=0 && a[i]>key)
        {
            a[i+1]=a[i];
            i=i-1;
        }
        a[i+1]=key;
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
    int a[]={9,6,5,0,8,2,7,13};
    int n=sizeof(a)/sizeof(int);
    insertionSort(a,n);
    print(a,n);
     return 0;
}
