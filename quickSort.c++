#include<iostream>
using namespace std;

int partition(int arr[] , int low , int high) {
    int pivot = arr[high];
    int i =  low-1;
    for (int j=low ; j<high ; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i] , arr[j]);

        }

    }
    swap(arr[i+1] , arr[high]);
    return i+1; //pivot index
}

void quickSort(int arr[] , int low , int high) {
  if (low < high) {
   int pi = partition(arr,  low , high) ;

  
  quickSort(arr, 0 , pi - 1);
  quickSort(arr , pi+1 , high);
  }
}

int main () {
    int arr[4] = {1,5,3,4};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr , 0 , n);

    for (int i=0 ; i<n ; i++) {
        cout<<arr[i]<<" ";
    }
cout<<endl;
    return 0;
}
