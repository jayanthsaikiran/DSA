#include<iostream>
using namespace std;

int main() {
    string s;
    cin>>s;
    int n = s.length();
    int maxi = 1;
    int count = 1;
    
    for(int i=1;i<n;++i) {
        if(s[i] == s[i-1]) {
            maxi = max(maxi,++count);
        } else {
            count = 1;
        }
    }
    cout<<maxi<<endl;
}