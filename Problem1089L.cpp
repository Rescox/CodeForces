#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
 
using namespace std;
 
#define ll long long
 
int n, k, a[100000000], b[100000000];

void solve() {
    vector<pair<int, int>> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i].first;
    }
    
    for(int i = 0; i < n; i++) {
        cin >> a[i].second;
    }
    int answer = 0;
    sort(a.begin(), a.end());
    set<int> se;
    for(int i = 0; i < n; i++) {
        cout << a[i].first << " " << a[i].second <<'\n';
    }

   
    
}
    


 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);    

    cin >> n >> k;
    solve();
}