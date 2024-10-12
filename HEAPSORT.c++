#include<iostream>
#include<vector>
using namespace std;

void heapify(int i , vector<int> &arr , int n) {
    int left = 2*i + 1;
    int right = 2*i + 2;
    int maxI = i;

    if (left<n && arr[left] > arr[maxI]) {
        maxI = left;
    }

    if (right < n && arr[right] > arr[maxI]) {
        maxI = right;
    }

    if (maxI != i) {
    swap(arr[i] , arr[maxI]);
    heapify(maxI , arr , n);
    }
}

void heapSort(vector<int> &arr) {
    int n = arr.size();
    //build maxHeap
    for (int i=n/2-1 ; i>=0 ;i--) {
        heapify(i , arr , n);
    }
    //taking elements to their correct position
    for (int i=n-1 ; i>=0 ;i--) {
        swap (arr[0] , arr[i]);
        heapify(0 , arr , i);
    }
}

int main() {
    vector<int> arr = {1,4,2,5,3};

    heapSort(arr);

    cout<<"The sorted array is :" <<endl;
    for (int i=0 ; i<arr.size() ; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}
