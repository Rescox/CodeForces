#include <iostream>

using namespace std;

#define long long ll;

int w;

void solve() {
    string answer = w%2 ? "NO" : "YES";
    if (w == 2) {
        answer = "NO";
    }
    cout << answer;
    
}

int main() {
    cin >> w;
    if (1 <= w && w <= 100) {
        solve();
    }
}