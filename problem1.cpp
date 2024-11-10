#include <iostream>
using namespace std;
void inputarrays(int arr[], int n) {
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
}
int sumarrays(int arr[], int arr1[], int n) {
    int sum =0;
    for (int i=0; i<n; i++) {
        sum+=arr[i]*arr1[i];
    }
    return sum;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    int arr1[n];
    inputarrays(arr, n);
    inputarrays(arr1, n);
    cout<<sumarrays(arr, arr1, n);
}