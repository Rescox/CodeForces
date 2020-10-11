#include <iostream>
#include <algorithm>

using namespace std;

#define ll long long ;

int a, b;

void solve() {
    int cont = 0;
    while(a <= b) {
        a = a*3;
        b = b*2;
        ++cont;
    }
    cout << cont;
}

int main() {
    cin >> a >> b;
    solve();
}