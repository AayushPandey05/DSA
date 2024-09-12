//!..Reversing Char...
#include<iostream>
using namespace std;
int main() {
    int n;
    int count  = 0;
    cin>>n;
    char arr[n];
    char c[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i = n - 1;i >= 0;i--){
        c[count++] = arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<c[i]<<" ";
    }
}