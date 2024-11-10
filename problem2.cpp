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
    int divisor = arr[0];
    for(int i =1; i<n; i++) {
        if(arr[i]%smallest == 0) {
            divisor = smallest;
            return divisor;
        }
        return -1;
    }
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    inputarray(arr, n);
    cout<<calculate(arr, n)<<endl;
}