#include <iostream>
#include <set>

using namespace std;

#define LL long long

LL int n;

void solve() {
    LL int answer = n%2 ? -1 * (n+1)/2 : n/2;
    cout << answer;
}

int main() {
    cin >> n;
    solve();
}
