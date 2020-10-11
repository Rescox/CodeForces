#include <iostream>
 
using namespace std;
 
#define ll long long
 
int t, n[10000001];
 
void solve() {
    for(int i = 0; i < t; i++) {
        bool notPossible = false;
        int moves = 0;
        while(n[i]>1 && moves != -1) { 
            if(n[i]%6 == 0) n[i] = n[i]/6;
            else if(n[i]%3 == 0) n[i] = n[i] * 2;
            else moves = -2;
            moves++;
        }
        cout << moves << '\n';
    }
}
 
int main() {
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n[i];
    }
    solve();
}