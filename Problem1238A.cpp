#include <iostream>
#include <vector> 
using namespace std;
 
#define ll long long
 
int t;
ll int x,y;

void solve() {  
        cin >> x >> y;
        
        if(x-y > 1)
            cout  << "YES" << '\n';
        else
        {
            cout << "NO" << '\n';
        }
        
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);  
    cin >> t;  
    for(int i = 0; i < t; i++) {   
        solve();
    }

}