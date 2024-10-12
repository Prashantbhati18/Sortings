#include<iostream>
using namespace std;

void insertionSort(int arr[] , int size ){
    for (int i=1 ; i<size ; i++ ) {
        int curr = arr[i];
        int prev = i-1;
        while (prev>=0 && arr[prev]>curr) {
            swap (arr[prev],arr[prev+1]);
            prev--;
        }
    }
}

int main () {
    int size ;
    cout<<"Enter the size of the array :"<<endl;
    cin>>size;

    int arr[size];
    cout<<"Enter the numbers in the array :"<<endl;
    for (int i=0 ; i<size ; i++) {
        cin>>arr[i];
    }

    cout<<"The elements of the array are : " <<endl;
    for (int i=0 ; i<size ; i++) {
        cout<<arr[i]<<" ";
    }
    
    cout<<"\n";
    
    insertionSort(arr , size) ;

    cout<<"The sorted array is :" <<endl;
    for (int i=0 ; i<size ; i++) {
        cout<<arr[i]<<" ";
    }
}
