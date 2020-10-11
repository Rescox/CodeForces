#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
#define ll long long
 
int n;
vector<int> v;

void solve() {
    cin >> n;
    int aux;
    for(int i = 0; i < n; i++) {
        cin >> aux;
        v.push_back(aux);
    }
    ll int answer, x = 0, y = 0;
    sort(v.begin(), v.end());
    for(int i = 0; i < n; i++) {
        if(i >= n/2) x += v[i];
        else y += v[i];
    }
    answer = x*x + y*y;
    cout << answer << '\n';
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);    
        solve();

}