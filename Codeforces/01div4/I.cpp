#include <iostream>
using namespace std;

int allocate(){
    int num;
    cin >> num;
    int max=0;


    while(num >2){
        if(num %3 ==0){
            num /= 3;
            max += num;
        }else if(num %3 == 1){
            max += num/3;
            num = num/3 +1;
        }else{
            max += num/3;
            num = num/3 +2;
        }
    }
    cout << max <<"\n";
    return 0;
}

int main(){
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        allocate();
    }
    return 0;
}