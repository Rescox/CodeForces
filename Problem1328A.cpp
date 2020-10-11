#include <iostream>
 
using namespace std;
 
#define ll long long
 
int t, a,b;


void solve() {
    cin >> t;
    while(t--) {
        int answer;
        cin >> a >> b;
        if(a%b == 0) answer = 0;
        else answer = b > a ? b - a : b * (a/b + 1) - a;
        cout << answer << '\n';
    }
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);    
        solve();

}

/*
5
10 4 = 6
13 9 = 4
100 13 = 
123 456 = 333
92 46 0



*/
