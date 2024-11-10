#include <iostream>
using namespace std;
void inputarrays(int prices[], int n) {
    for (int i=0; i<n; i++) {
        cin >> prices[i];
    }
}
int difference(int prices[], int n) {
    int smallest = prices[0];
    int max_profit = 0;
    for (int i=1; i<n; i++) {
        int profit=prices[i]-smallest;
        if (profit>max_profit) {
            max_profit=profit;
        }
        if (prices[i]<smallest) {
            smallest=prices[i];
        }
    }
    return max_profit;
}
int main() {
    int n;
    cin >> n;
    int prices[n];
    inputarrays(prices, n);
    cout<<difference(prices, n)<<endl;
}
