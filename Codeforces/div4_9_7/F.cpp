#include <bits/stdc++.h>
using namespace std;

int divide(int num){
    vector<int> number;
    if (num == 10000)
    {
        cout << 1 << endl;
        cout << 10000 << endl;
    }
    else{
        int place=1000;
        for(int i=3;i>=0;i--){
            int cod;
            cod = num / place;
            num = num % place;
            if(cod != 0){
                number.push_back(cod*place);
            }
            place=place/10;
        }
        cout << number.size() <<endl;
        for(int i =0;i<number.size();i++){
            cout<<number[i]<<" ";
        }

    }
    return 0;
    
}

int main(){
    int n ;
    cin >> n;
    for(int i =0;i<n;i++){
        int num;
        cin >> num;
        divide(num);
    }
    return 0;
}