#include <iostream>
#include <set>
#include <cmath>

using namespace std;

#define LL long long


int n, p[200], q[200];
int n1, n2;

void solve() {
    int min = 1000, max = 0, cont = 0, i1 = 0, i2 = 0;
    for(int i = 0; i < n1; i++) {
        if(min >= p[i]) {  min = p[i]; i1 = i; }
        if(max < p[i]) {  max = p[i]; i2 = i; }
    }
    cont += n1 - i1 - 1;
    cont += i2;
    if(i2 > i1) cont--;
    cout << cont;
}

int main() {
    cin >> n1;
    for(int i = 0; i < n1; i++) {
        cin >> p[i];
    }
    
    solve();
}
