#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
 
#define ll long long
 
int n; //1 = tuna, 2 = eel
vector<int>v;

void solve() {
    cin >> n;
    int aux;
    for(int i = 0; i < n; i++) {
        cin >> aux;
        v.push_back(aux);
    }
    int cont1 = 0, cont2 = 0, p = 2, max = 0, aux1 = 0, aux2= 0;
    
    for(int i = 0; i < n; i++) {
        if(p) { 
            if(v[i] == 1 && v[i] == v[i+1]) cont1++;
            if(v[i] == 2 && v[i] == v[i+1]) cont2++;
            if(v[i] != v[i+1] && v[i] == 1) { p--; cont1++; aux1= cont1; cont1 = 0; }
            if(v[i] != v[i+1] && v[i] == 2) { p--; cont2++; aux2= cont2; cont2 = 0;}
        } else { 
            p=1;
            i--;
            if(min(aux1,aux2) * 2 > max) max = min(aux1,aux2) * 2;
        }
    }
    if(min(aux1,aux2) * 2 > max) max = min(aux1,aux2) * 2;
    cout << max << '\n';
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);    
        solve();

}