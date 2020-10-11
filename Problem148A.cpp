#include <iostream>
#include <set>
#include <cmath>

using namespace std;

#define LL long long


int n, k, l, m ,d;

void solve() {
    int answer = 0;
    for(int i = 1; i <= d; i++) {
        if(i%k == 0 || i%l == 0 || i%m == 0 || i%n == 0) answer++;
    }
    cout << answer;
}

int main() {
    cin >> k >> l >> m >> n >> d;
    solve();
}
