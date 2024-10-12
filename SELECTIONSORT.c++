#include<iostream>
using namespace std;

void selSort(int arr[] , int size) {
    for (int i = 0 ; i<size-1 ; i++) {
        int minIdx = i ;
        for (int j=i+1 ; j<size ; j++) {
            if (arr[j] < arr[minIdx] ) {
                minIdx = j ;
            }
        }
        swap(arr[i] , arr[minIdx]) ;
    }
    
}

int main () {
    int size;
   
    cout << "Enter the size of the array : "<<endl;
    cin>>size;

    int arr[size];

    cout<<"Enter the elements in the array : "<<endl;
    for (int i =0 ; i<size ; i++ ) {
        cin>>arr[i];
    }

    cout << "The elements of the array are :" <<endl;
    for (int i = 0 ; i<size ; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    selSort(arr,size);

    cout<<"The sorted array is :" <<endl;
    for (int i = 0 ; i<size ; i++) {
        cout << arr[i]<<" ";
    }
    

    return 0;
}
