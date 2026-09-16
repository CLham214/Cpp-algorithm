#include <iostream>
using namespace std;

int division(int ra){
    if(ra >= 1900){
        cout << "Division 1" << endl;}
    else if(ra >=1600){
        cout << "Division 2" << endl;}
    else if(ra >= 1400){
        cout << "Division 3" << endl;}
    else{
        cout << "Division 4" << endl;}
    return 0;
}

int main() {
    int n;
    cin >> n;

    for(int i=0; i < n;i++){
        int rating;
        cin >> rating;

        division(rating);
    }
    return 0;
}