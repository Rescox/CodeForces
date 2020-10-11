#include <iostream>

using namespace std;

#define ll long long;

int n, k;

void solve() {
    for(int i = 0; i < k ; i++) { 
        if(n%10 != 0) n--;
        else n = n/10;
    }
    cout << n;
}

int main() {
  cin >> n >> k;
  solve();
}