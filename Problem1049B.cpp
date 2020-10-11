#include <iostream>
 
using namespace std;
 
#define ll long long
 
ll int n, a, b, x, y;
ll int t, arr[1000000];
 
void solve() {
    ll int answer = INT_FAST64_MAX;
    cin >> a >> b >> x >> y >> n;
    int i = 2, possibleA, possibleB;
    while(i > 0) {
        if(n < a - x) { 
            possibleA = n;
        }
        else { 
            possibleA = a - x;
        }
        if(n - possibleA < b - y) {
            possibleB = n - possibleA;
        }
        else 
            possibleB = b - y;
        if(1ll * (a - possibleA)*(b - possibleB) < answer)
            answer = 1ll * (a - possibleA)*(b - possibleB);
        swap(a, b);
        swap(x, y);
        i--;
    }
    arr[t] = answer;
}
 
int main() {
    cin >> t;
    int ts = t;
    while(t--) {
        solve();
    }
    while(ts--) {
        cout << arr[ts] << '\n';
    }
}


/*
#include <iostream>

using namespace std;

#define ll long long

ll unsigned int n, a, b, x, y;
ll int t, arr[1000000];

void solve() {
    ll unsigned int answer;
    cin >> a >> b >> x >> y >> n;
    while(n > 0) {
        if(a < b) {
            if(a - n > x) a--;
            else if(b - n > y) b--;
        } else {
            if(b > y) b--;
            else if(a - n > x) a--;
        }
    }
    arr[t] = a * b;
}

int main() {
    cin >> t;
    int ts = t;
    while(t--) {
        solve();
    }
    while(ts--) {
        cout << arr[ts] << '\n';
    }
}
*/