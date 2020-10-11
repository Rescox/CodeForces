#include <iostream>
#include <set>
#include <cmath>

using namespace std;

#define LL long long


int n;
double arr[100];

void solve() {
    long double answer = 0;
    for(int i = 0; i < n; i++) {
        answer += arr[i]/n;
    }
    cout << answer;
}

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    solve();
}
