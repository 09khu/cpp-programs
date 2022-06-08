//Program for binary search

#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key)
{
    int s = 0;
    int e = n;
    while(s<=e)
    {
        int mid = (s+e)/2;
     if(arr[mid]==key)
     {
         return mid;
     }   
     else if(arr[mid]>key)
     {
         e=mid-1;
     }
     else{
         s = mid+1;
     }
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter number of elements"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter key element to search:"<<endl;
    cin>>key;
    cout<<"The position of key element in array is:";
    cout<<binarysearch(arr,n,key)<<endl;
    return 0;
}