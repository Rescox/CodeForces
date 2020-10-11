#include <iostream>
#include <algorithm>
#include <vector>
 
using namespace std;
 
#define ll long long
 
int n,m;
vector<int> v;
vector<string> s;

void solve() {
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        string auxS; cin >> auxS;
        s.push_back(auxS);
    }
    for(int i = 0; i < m; i++) {
        int aux; cin >> aux;
        v.push_back(aux);
    }
    int cont = 0;
    for(int j = 0; j < m; j++) {
        vector<char> c;
        for(int i = 0; i < n; i++) {
            c.push_back(s[i][j]);
        }
        sort(c.begin(), c.end());
        int max = 0, aux = 1;
        for(int k = 0; k < n; k++) {
            if(c[k] == c[k+1]) aux++;
            else if (aux > max) {  max = aux; aux = 1;}
            else aux = 1;
        }
        cont += v[j]*max;
    }
    cout << cont;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);    
        solve();

}