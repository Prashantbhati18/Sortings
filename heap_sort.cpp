#include<bits/stdc++.h>
using namespace std;
void heapify(int* a,int size,int i)
{
    int largest=i;
    int left=2*i;
    int right=2*i+1;
    if(left<=size && a[largest]<a[left])
        largest=left;
    if(right<=size && a[largest]<a[right])
        largest=right;  
    if(largest!=i)
    {
        swap(a[largest],a[i]);
        heapify(a,size,largest);       //call heapify for largest 
    }  
}

void heapBuild(int* a,int size)
{
    for(int i=size/2;i>=1;i--)
    {
        heapify(a,size,i);
    }
}

void heapSort(int* a,int size)
{
    heapBuild(a,size);
    while(size>1)
    {
        swap(a[size],a[1]);
        size--;
        heapify(a,size,1);
    }
}

void print(int* arr,int n)
{
    cout<<"Sorted array:";
    for(int k=1;k<n;k++)
    {
        cout<<arr[k]<<" ";
    }
}

void initialise(int a[], int size)
{
    srand(time(0));

    // Initialize the array with random values
    for (int i = 0; i < size; ++i) {
        a[i] = rand() % 100 + 1; // generate random number between 1 and 100
    }
}

int main()
{
    ofstream outfile("sort_time.csv");
    outfile<<"Array Size,Time (microseconds)\n";
    int arr[100000];
    int size=1000;
        while(size<=50000)
    {
        initialise(arr,size);
        clock_t start,end;

        start=clock();
        for(int j=0;j<=100;j++)
        {
            heapSort(arr,size);
        }
        end=clock();

        double duration=(((double) (end - start)) / CLOCKS_PER_SEC)/1000;
        pair<int ,double>store(size,duration);
        cout<<"("<<store.first<<","<<store.second<<") "<<endl;
        size+=2000;
    outfile<<size<<","<<duration<<"\n";
    }
    outfile.close();
    // int arr[7]={-1,6,4,8,3,9,24};
    // heapSort(arr,7);
    // print(arr,7);
}
