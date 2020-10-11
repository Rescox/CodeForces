#include <iostream>
#include <set>
#include <cmath>

using namespace std;

#define LL long long


int n, p[200], q[200];
int n1, n2;

void solve() {
    set<int> numbers;
    for(int i = 0; i < n1; i++) {
        if(numbers.count(p[i]) == 0) numbers.insert(p[i]);
    }
    for(int j = 0; j < n2; j++) { 
        if(numbers.count(q[j]) == 0) numbers.insert(q[j]);
    }
    if(numbers.size() == n) cout << "I become the guy.";
    else cout << "Oh, my keyboard!"; 
}

int main() {
    cin >> n;
    cin >> n1;
    for(int i = 0; i < n1; i++) { 
        cin >> p[i];
    }
    cin >> n2;
    for(int j = 0; j < n2; j++) {
        cin >> q[j];
    }
    
    solve();
}
