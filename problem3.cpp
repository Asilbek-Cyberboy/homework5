#include <iostream>
using namespace std;
void inputarrays(int arr[], int n) {
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
}
int similar(int arr[], int n) {
    int unique = 0;
    for (int i=0; i<n; i++) {
        unique ^= arr[i];
    }
    return unique;
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    inputarrays(arr, n);
    cout << similar(arr, n);
}
