#include <iostream>
#include <vector> 
#include <algorithm>

using namespace std;
 
#define ll long long
 
int t, r, g ,b;


void solve() {
    cin >> t;
    while(t--) {
        cin >> r >> g >> b;
        bool bPossible = true;
        vector<int> v;
        v.push_back(r); v.push_back(g); v.push_back(b);
        sort(v.rbegin(), v.rend());
        int diff = (v[0] - v[1] - v[2]);
        if(diff <= 1) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
        
    }
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);    
        solve();

}

