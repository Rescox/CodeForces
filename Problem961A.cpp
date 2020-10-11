#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
 
#define ll long long
 
int n, m;
vector<int> v;
int a[1020];

void solve() {
    cin >> n >> m;
    int aux;
    for(int i = 0; i < n; i++) {
        a[i] = 0;
    }
    int min = 1000000;
    for(int i = 0; i < m; i++) {
        cin >> aux;
        a[aux-1]++;
    }
    for(int i = 0; i < n; i++) {
        if(a[i] < min) min = a[i];
    }
    cout << min;
    
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);    
        solve();

}