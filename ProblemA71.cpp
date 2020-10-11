#include <iostream>

using namespace std;

#define long long ll;

int n;
string words [100][100];

void solve() {
    for(int i = 0; i < n; i++) {
        if(words[i]->length() <= 10) {
            cout << words[i][0] << '\n';
        } else {
            cout << words[i][0][0] << words[i]->length() - 2 << words[i][0][words[i]->length() - 1]  << '\n';
        }
    }
}


int main() {
    string x;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x;
        words[i]->append(x);
    }
    if (1 <= n && n <= 100) {
        solve();
    }
}