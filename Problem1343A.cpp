#include <iostream>
#include <math.h>
 
using namespace std;
 
#define ll long long
 
int n, i, x, t, answer[10000000];
 
void solve() {
    bool found = false;
    for(int j = 2; j < 50 && !found;j++){
        int res = pow(2,j) - 1;
        if(n %  res == 0){  answer[i] = n/ res; found = true; }
    }
}
 
int main() {
    cin >> t;
    for(i = 0; i < t; i++) {
        cin >> n;
        solve();
    }    
    for(i= 0; i < t; i++) { 
        cout << answer[i] << '\n';
    }
}
