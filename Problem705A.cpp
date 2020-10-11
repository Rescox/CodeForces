#include <iostream>
#include <set>

using namespace std;

#define long long ll;

string s;
int n;

void solve() {
   for(int i = 0; i < n; i++) {
       if(i%2 == 0) cout << "I hate";
       else cout << "I love";
       if(i < n -1) cout << " that ";
       else cout << " it";
   }
   
}

int main() {
    cin >> n;
    solve();
}
