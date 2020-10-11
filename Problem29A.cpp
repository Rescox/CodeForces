#include <iostream>

#include <map>
 
using namespace std;
 
#define ll long long
typedef pair<int, int> camels;
int n, d[1000], x[1000];
 
void solve() {
    bool camelFound = false;
    map<int, int> s;
    for(int i = 0; i < n; i++) {
        s.insert(camels(x[i],x[i]+d[i]));
    }
    for(int i = 0; i <n; i++) {
        int val1 = s.find(x[i]+d[i])->second;
        if(val1 == x[i])
            camelFound = true;
    }
    string answer = camelFound ? "YES" : "NO";
    cout << answer;    
}
 
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x[i] >> d[i];
    }
    solve();
}

