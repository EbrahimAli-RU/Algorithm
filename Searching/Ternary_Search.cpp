#include<bits/stdc++.h>
using namespace std;

int ternarySearch(int arr[],int l,int r,int key)
{
    int mid1,mid2;
    mid1=l+(r-1)/3;mid2=r-(r-l)/3;
    if(key==arr[mid1])
        return mid1;
    else if(key==arr[mid2])
        return mid2;
    else if(key<arr[mid1])
        return ternarySearch(arr,l,mid1-1,key);
    else if(key>arr[mid2])
        return ternarySearch(arr,mid2+1,r,key);
    else
        return ternarySearch(arr,mid1+1,mid2-1,key);
}
int main()
{
    ///l means lower bound and r means uper bound of array.
    ///l always be 0 and r will be size of array-1.
    int arr[10]={1,3,5,8,9,12,33,45,89,100},res,l=0,r=9,key=12;
    res=ternarySearch(arr,l,r,key);
    cout<<arr[res]<<endl;
    return 0;
}
