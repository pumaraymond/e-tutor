#include <bits/stdc++.h>
using namespace std;

int main(){
    int m;
    while(cin >> m){
        if(m >= 3 && m <= 5) cout << "Spring\n";
        if(m >= 6 && m <= 8) cout << "Summer\n";
        if(m >= 9 && m <= 11) cout << "Autumn\n";
        if(m <= 2 || m == 12) cout << "Winter\n";
    }
    return 0;
}