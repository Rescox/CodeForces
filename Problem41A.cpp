#include <iostream>

using namespace std;

#define long long ll;

string s, t;

void solve() {
    string answer = "YES";
    int i = 0;
    if(s.length() == t. length()) {
        
        while(i < s.length() && answer == "YES") {
            if(s[i] != t[t.length() - i - 1]) { 
                answer = "NO";
            }
            i++;
        }
    } else {
        answer = "NO";
    }
    
    cout << answer;
}

int main() {
    cin >> s >> t;
    solve();
}