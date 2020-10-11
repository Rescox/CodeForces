#include <iostream>
 
using namespace std;
 
#define ll long long

int n, m;

void solve() {
    cin >> n >> m;
    if(m > n/2) cout << n - m << '\n';
    else if (m<= 1) cout << 1;
    else cout << m;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);    
        solve();

}