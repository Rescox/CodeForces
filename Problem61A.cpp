#include <iostream>
#include <set>
#include <cmath>

using namespace std;

#define LL long long

string n1, n2;
int digits = 1;

void solve() {
    string n3 = "";
    
    for(int i = 0; i < n1.length(); i++) {
        
        if(n1[i] != n2[i]) n3.append("1");
        else n3.append("0");   
    }    
    cout << n3;
}

int main() {
    cin >> n1 >> n2;
    
    solve();
}
