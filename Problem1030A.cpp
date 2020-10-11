#include <iostream>
#include <set>

using namespace std;

#define long long ll;


int n, answer[100];

void solve() {
    int i = 0, cont = 0;
    bool hard = false;
    while(i < n && !hard) {
        if(answer[i] == 1) hard = true; 
    i++;
    }
   string itsHard = hard ? "hard" : "easy";
   cout << itsHard;
}

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> answer[i];
    }
    solve();
}
