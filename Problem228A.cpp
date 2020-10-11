#include <iostream>
#include <set>
#include <cmath>

using namespace std;

#define LL long long


int n, p[200], q[200];
int n1, n2, n3, n4;

void solve() {
    set<int> shoes;
    int answer = 4;
    for(int i = 0; i < 4; i++) {
        if(shoes.count(p[i]) == 0) answer--;
        shoes.insert(p[i]);
    }

    cout << answer;
}

int main() {
    cin >> p[0] >> p[1] >> p[2] >> p[3];
    
    solve();
}
