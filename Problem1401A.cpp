#include <iostream>
 
using namespace std;
 
#define ll long long
 
int t;

void solve() {
    
    while(t--) {
        ll int n, k, res = 0;
        cin >> n >> k;
        if(n < k) res = k - n;
        else if((n-k)%2==0  && n >= k){  res = 0;}
        else res = 1;
        cout << res << '\n';
    } 
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);   
    cin >> t; 
    solve();
}

// B-0 - A-B