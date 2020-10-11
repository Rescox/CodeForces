#include <iostream>
#include <set>

using namespace std;

#define long long ll;

string s;
int n, p[100], q[100];

bool checkYear(int n) {
    
    set<int> digits;
    while(n != 0) {   
        if(digits.count(n%10) > 0) return false;
        else { 
            digits.insert(n%10);
            n = (n - n%10)/10;
        }
    }
    return true;
}

void solve() {
    int i = n;
    bool found = false;
    while(i <10000 && !found) {
        i++;
        if(checkYear(i)) found = true; 
    }
    cout << i;
}

int main() {
    cin >> n;
    
    solve();
}
