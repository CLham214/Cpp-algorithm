#include <iostream>
using namespace std;

int digitsum(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;

    for(int i=0; i < n;i++){
        int num;
        cin >> num;

        int numf = digitsum(num/1000);
        int numb = digitsum(num%1000);

        if(numf == numb){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;



    }

}
    return 0;
}