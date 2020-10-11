#include <iostream>
#include <algorithm>

using namespace std;

#define ll long long;

string s;

void solve() {
    int cont = 0;
    for(int i = 0; i < s.length(); i++) {
        if(int(s[i]) < 96) cont++;
    }
    if(cont > s.length()/2) { 
        transform(s.begin(), s.end(), s.begin(),
                    [](unsigned char c) -> unsigned char { return toupper(c); });
    } else {  
        transform(s.begin(), s.end(), s.begin(),
                    [](unsigned char c) -> unsigned char { return tolower(c); });
    }
    cout << s;
}

int main() {
    cin >> s;
    solve();
}  