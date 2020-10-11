#include <iostream>
#include <math.h>

using namespace std;
 
#define ll long long
 
ll int n, s, t, t1;

void solve() {
    cin >> t1;
    while(t1--) {
        cin >> n >> s >> t;
        int aux = min(s,t);
        cout << n - aux + 1 << '\n';
    }
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);    
        solve();

}