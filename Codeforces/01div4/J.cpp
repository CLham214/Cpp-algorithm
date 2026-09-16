#include <iostream>
#include <set>
using namespace std;

int create(){
    int len;
    cin >> len;

    set<int> goal;
    for(int i=1;i<=len;i++){
        goal.insert(2*i-1);
    }

    for(int x:goal){
        cout << x << " ";
    }
    return 0;
}

int main(){
    int n;
    cin>> n;
    for(int i=0;i<n;i++){
        create();
    }
    return 0;
}