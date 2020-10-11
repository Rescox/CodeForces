#include <iostream>
#include <math.h>
 
using namespace std;
 
#define ll long long

int t,n;
string n1;


void solve() {
    cin >> t;
    while(t--) {
        int contIPar = 0, contIImp = 0, contPPar = 0, contPImp = 0;
        cin >> n >> n1;
        for(int i = 0; i < n; i++) {
            if(i%2) 
                if(((int)n1[i])%2 == 0) contPPar++;
                else contPImp++;
            else
                if(((int)n1[i])%2 == 1) contIImp++;
                else contIPar++;
        }
        if(n%2==0) {
            if(contPPar) cout << 2 << '\n';
            else cout << 1 << '\n';
        } else {
            if(contIImp) cout << 1 << '\n';
            else cout << 2 << '\n';
        }
    }
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);    
        solve();

}


/*
4
1
2
1
3
3
102 = 2p 1i
4
2095 =  3p 1i
*/

