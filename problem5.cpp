#include <iostream>
using namespace std;
void upperprint(string upperstr) {
    for(char c : upperstr) {
        cout<<c<<" ";
    }
}
void lowerprint(string lowerstr) {
    for(char c : lowerstr) {
        cout<<c << " ";
    }
}
int main() {
    int upper=0, lower=0;
    string s, upperstr, lowerstr;
    cin>>s;
    for(int i=0;i<s.length();i++) {
        if(s[i]>='A' && s[i]<='Z') {
            upper++;
            upperstr+=s[i];
        }
        if(s[i]>='a' && s[i]<='z') {
            lower++;
            lowerstr+=s[i];
        }
    }
    cout<<upper<<" ";
    upperprint(upperstr);
    cout<<endl;
    cout<<lower<<" ";
    lowerprint(lowerstr);
}
