#include <iostream>

using namespace std;

#define long long ll;

string s;
int n;

void solve() {
    int iAnton = 0, iDanik = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == 'A') iAnton++; 
        else iDanik++;
    }
    string answer = "";
    if(iAnton < iDanik) answer = "Danik";
    else if(iAnton > iDanik) answer = "Anton";
    else answer = "Friendship";
    cout << answer;
}

int main() {
    cin >> n >> s;
    solve();
}