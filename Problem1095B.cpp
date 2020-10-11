#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
#define ll long long
 
int n, a[200000];
vector<int> v; 

void solve() {
    cin >> n;
    int l;
    for(int i = 0; i < n; i++) {
        cin >> l;
        v.push_back(l);
    }
    sort(v.begin(), v.end());
    int inst;
    if (n > 2) { 
        inst = min(v[n-2] - v[0], v[n-1] - v[1]);
    } else inst = 0;
    cout << inst;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);    
        solve();
}