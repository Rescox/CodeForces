#include <iostream>
#include <algorithm>   
 
using namespace std;
 
#define ll long long
string s[1001];
int t;
 
void solve() {
    for(int i = 0; i < t; i++) { 
        int times0 = 0;
        int times1 = 0;
        string hola = s[i];
        for(int j = 0; j < hola.length(); j++) {
            if(hola[j] == '0') times0++;
            if(hola[j] == '1') times1++;
        }
        
        string answer =  min(times0, times1)%2? "DA" : "NET";
        cout << answer << '\n';
    }
}
 
int main() {
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> s[i];
    }
    solve();
}
