//TODO:..Search any item in the sorted array........
#include<iostream>
using namespace std;

int search(int arr[], int n, int x) {
    for(int i=0; i<n; i++) {
        if(arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int main() {
    //!initializing the size of the array/......
    int n;
    cin >> n;

    int arr[n]; // Declare an array of size 
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int x;
    cout << "Enter the element to be searched: ";
    cin >> x;

    int result = search(arr, n, x);
    cout<<"Element is at index: "<<result;
}