#include <iostream>
using namespace std;
void inputarray(int arr[], int n) {
    for(int i =0; i<n; i++) {
        cin>>arr[i];
    }
}
int calculate(int arr[], int n) {
    int smallest = arr[0];
    for(int i =1; i<n; i++) {
       if(arr[i]<smallest) {
           smallest = arr[i];
       }
    }
    for(int i =0; i<n; i++) {
        if(arr[i]%smallest != 0) {
            return -1;
        }
    }
    return smallest;
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    inputarray(arr, n);
    cout<<calculate(arr, n)<<endl;
}
