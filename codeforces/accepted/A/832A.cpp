#include <iostream>
using namespace std;


int main(){
    long long n, k;
    cin >> n >> k; 
    cout << (((n/k) % 2 == 1) ? "YES" : "NO") << endl;
}
