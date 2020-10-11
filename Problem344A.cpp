#include <iostream>
#include <set>

using namespace std;

#define long long ll;


int n, magnets[1000001];

void solve() {
    int cont = 0;
    for(int i = 0; i < n; i++) {
       if(magnets[i] != magnets[i+1]) cont++;
    }
   cout << cont;
}

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> magnets[i];
    }
    solve();
}
