#include <iostream>
#include <cmath>
using namespace std;

int put(){
    int day;
    cin >> day;
    int sum =0;
    int happy =0;
    for(int i=0;i<day;i++){
        int num;
        cin >> num;
        sum += num;
        if(sum%2 ==1 && int (sqrt(sum))*int (sqrt(sum))==sum){
            happy += 1;
        }
    }
    cout << happy << "\n";
    return 0;
}

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        put();
    }
    return 0;
}