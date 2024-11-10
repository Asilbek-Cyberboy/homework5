#include <iostream>
using namespace std;
void inputarrays(int prices[], int n) {
    for (int i=0; i<n; i++) {
        cin >> prices[i];
    }
}
int difference(int prices[], int n) {
    int smallest = prices[0];
    int index = 0;
    for (int i=1; i<n; i++) {
        if (prices[i] < smallest) {
            smallest = prices[i];
            index = i;
        }
    }
    int biggest = prices[index];
    for (int i=index; i<n; i++) {
        if (prices[i] > biggest) {
            biggest = prices[i];
        }
    }
    return biggest - smallest;
}
int main() {
    int n;
    cin >> n;
    int prices[n];
    inputarrays(prices, n);
    cout<<difference(prices, n)<<endl;
}