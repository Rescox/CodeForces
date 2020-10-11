#include <iostream>
#include <vector> 

using namespace std;
 
#define ll long long
 
int n;
vector<pair<int,int>> v;


void solve() {
    cin >> n;
    int x,y;
    for(int i = 0; i < n; i++) {
        cin >> x >> y;
        v.push_back(make_pair(x,y));
    }
    int maxpoint = 0;
    for(int i = 0; i < n; i++) {
        if(v[i].first + v[i].second >= maxpoint)
            maxpoint = v[i].first + v[i].second;
    }
    cout << maxpoint;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);    
        solve();

}