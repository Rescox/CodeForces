#include <iostream>
#include <set>
 
using namespace std;
 
#define ll long long
 
int t, n;


void solve() {
    cin >> t;
    while(t--) {
        cin >> n;
        string s = "" ,aux;
        for(int i = 0; i < n; i++) {
            cin >> aux;
            s+= aux;
        }
        bool found = true;
        set<char> se;
        for(int i = 0; i < s.length() && found; i++) {
            int cont = 0;
            for(int j = 0; j < s.length(); j++) {
               if(s[i] == s[j] && se.count(s[i]) == 0) cont++;
            }
            if(cont%n != 0)  found = false;
            else se.insert(s[i]);
        }
        string answer = found ? "YES": "NO";
        cout << answer << '\n';
    }
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);    
        solve();

}