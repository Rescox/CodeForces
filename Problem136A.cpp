#include <iostream>
#include <set>

using namespace std;

#define long long ll;

string s;
int n, friends[101];

void solve() {
   int p[100];
   for(int i = 1; i <= n; i++) {
       p[friends[i]] = i;
   }
   for(int i = 1; i <= n; i++) {
       cout << p[i] << " ";
   }
}

int main() {
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> friends[i];
    }
    solve();
}
