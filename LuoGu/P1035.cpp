#include <iostream>
using namespace std;

int main() {
    double s=1;
    int k;
    int n=1;
    cin >> k ;

    while(s <= k){
        n += 1;
        s = s+1.0/n;
    }

    cout << n << endl;
    
    return 0;
}