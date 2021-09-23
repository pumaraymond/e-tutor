#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2;
    while(cin >> s1){
        s2 = s1;
        reverse(s1.begin(), s1.end());
        if(s1 == s2) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}