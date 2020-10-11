#include <iostream>
#include <set>

using namespace std;

#define long long ll;

string s;
int n, h, people[1001];

void solve() {
   int cont = 0;
   for(int i = 0; i < n; i++) {
       if(people[i] <= h) cont++;
       else cont = cont + 2;
   }
   cout << cont;
}

int main() {
    cin >> n >> h;
    for(int i = 0; i < n; i++) {
        cin >> people[i];
    }
    solve();
}
