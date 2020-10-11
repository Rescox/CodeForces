#include <iostream>

using namespace std;

#define long long ll;

string s;
int n, p[100], q[100];

void solve() {
    int cont = 0;
    for(int i = 0; i < n; i++) {
        if(p[i] + 1 < q[i]) cont++;
    }
    cout << cont;
}

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> p[i] >> q[i];
    }
    solve();
}