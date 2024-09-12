#include<iostream>
using namespace std;
int reverseDigits(int num) 
{ 
    int rev = 0; 
    while (num > 0) { 
        rev = rev* 10 + num % 10; 
        num = num / 10; 
    } 
    return rev; 
} 
int main(){
    int num;
    cin>>num; 
    if(num == reverseDigits(num)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}