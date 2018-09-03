#include<iostream>
using namespace std;
int BinarySearch(int a[],int n,int key)
{
    int s=0,e=n-1;
    int mid;
    while(s<=e)
    {
        mid=(s+e)/2;
        if(a[mid]==key)

            return (mid);

        else if(a[mid]>key)

            e=mid-1;

        else

            s=mid+1;

    }
    return -1;
}
int main()
{
    int a[]={1,3,5,10,12,15,17};
    int n=sizeof(a)/sizeof(int);
    int key;
    cin>>key;
    int searchIndex=BinarySearch(a,n,key);
    if(searchIndex==-1)
    {
        cout<<key<<"is not present"<<endl;
    }
    else
    {
        cout<<key<<"is present at"<<searchIndex+1 <<endl;
    }
    return 0;
}
