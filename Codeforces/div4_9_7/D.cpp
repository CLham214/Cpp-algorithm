#include <iostream>
using namespace std;

int eat(int box){
    int a[box];
    for(int i=0;i<box;i++){
        cin >> a[i];
    }

    int m =INT_MAX;
    int sum = 0;
    for(int i=0;i<box;i++){
        m = min(m,a[i]);
        sum += a[i];

    }
    sum -= m*box;
    return sum;
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int box;
        cin >> box;
        cout << eat(box) << endl;
    }
    return 0;
}