
#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
#define ll long long
 
int n, m, t;

void solve() {
    cin >> t;
    while(t--) {
        bool bIsolated = false;
        cin >> n >> m;
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <=m; j++) { 
                if((i - 2 >= 1 && j - 1 >= 1) || (i - 1 >= 1 && j - 2 >= 1) || (i + 1 <= n && j + 2 <= m) || (i + 2 <= n && j + 1 <= m)  
                || (i + 1 <= n && j - 2 >= 1) || (i + 2 <= n && j - 1 >= 1) || (i - 1 >= 1 && j + 2 <= m) || (i - 2 >= 1 && j + 1 <= m) ) {
                    continue;
                } else {
                    cout << i << " " << j << '\n';
                    bIsolated = true;
                }
                if(bIsolated) break;
            }
            if(bIsolated) break;
        }
        if(!bIsolated) cout << 1 << " " << 1 << '\n';
    }
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);    
        solve();
}