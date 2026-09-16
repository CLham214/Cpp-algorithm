#include <iostream>
#include <windows.h>
using namespace std;
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int cender;
    cout << "输入0或1,1代表男性，0代表女性" << endl;
    cin >> cender;
    cout << "你输入的数字是" << cender << endl;
    if(cender == 1){
        cout << "你是男性" << endl;}
    else{
        cout << "你是女性" << endl;}
}   