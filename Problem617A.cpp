#include <iostream>

using namespace std;

#define ll long long;

int n;

void solve() {
    int i = 0, cont = 0;
    int arr[] {5,4,3,2,1};
    while(n > 0) { 
       if(n - arr[i] >= 0) { 
            cont++;
            n -= arr[i];
       } else {
           i++;
       }
    } 
    cout << cont;
}

int main() {
  cin >> n;
  solve();
}