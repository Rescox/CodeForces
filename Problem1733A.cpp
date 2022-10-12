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
        LL aux;
        vector<LL> a;
        vector<LL> aMax;
        vector<LL> aKs;
        for(LL i = 0; i < n; i++) {
            cin >> aux;
             
            a.push_back(aux);
            if(i%k == 0) aKs.push_back(aux);
        }
        sort(aKs.begin(), aKs.end());
        LL cont = 0;
        for(LL i = 0; i < n - k + 1; i++) {
            for(LL j = 0; j < k; j++) {
                if((i+j) % k == 0 && cont < k+1) {
                    sumAux += aKs.rbegin()[cont];
                    cont++;
                } else {  
                    sumAux += a[i + j];
                }
            }
            cont = 0;
            aMax.push_back(sumAux);
            sumAux = 0;
        }
        
        sort(aMax.begin(), aMax.end());
        cout << aMax.rbegin()[0] << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);    
    
    solve();
}