#include<bits/stdc++.h>
using namespace std;
void merge(int* arr,int s,int mid,int e)
{
    int len1=mid-s+1;
    int len2=e-mid;
    int* arr1=new int[len1];
    int* arr2=new int[len2];
    for(int i=0;i<len1;i++)
    {
        arr1[i]=arr[s+i];
    }
    for(int j=0;j<len2;j++)
    {
        arr2[j]=arr[mid+1+j];
    }
    int i=0,j=0;
    int k=s;
    while(i<len1 && j<len2)
    {
        if(arr1[i]<arr2[j])
        arr[k++]=arr1[i++];
        else
        arr[k++]=arr2[j++];
    }
    while(i<len1)
    arr[k++]=arr1[i++];
    while(j<len2)
    arr[k++]=arr2[j++];
}
 void mergesort(int* arr,int s,int e)
{
    if(s>=e)
    return;
    int mid=s+ (e-s)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,mid,e);
}
void print(int* arr,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[6]={32,90,54,21,65,10};
    mergesort(arr,0,5);
    print(arr,6);
}
