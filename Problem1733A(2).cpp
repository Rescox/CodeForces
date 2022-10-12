#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

#define LL long long


int n, t, k;




void solve() {
    cin >> t;
    while(t--) {
        LL sumMax = 0;
        LL sumAux = 0;
        cin >> n >> k;
        LL aux = 0;
        vector<vector <LL>> aInters(k, vector<LL>(n,0));
        for(int i = 0; i < n; i++) {
            aux = aux%k;
            cin >> aInters[aux][i];
            aux++;
        } 
        
        for(int i = 0; i<k;i++) {
            sort(aInters[i].begin(), aInters[i].end());
            sumAux+=aInters[i][n-1];
        }
        cout << sumAux << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);    
    
    solve();
}