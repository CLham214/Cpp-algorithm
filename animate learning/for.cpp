#include <iostream>
using namespace std;
int main(){
    for(int i=0; i<10; i++){
        cout << "hello world" << endl;
    }


    int arr[] ={1,2,3,4,5,6,7,8,9,10};
    int length = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<length ;i++){
        if(i==3){
            continue;
        }
        if(i==5){
            goto label;
        }
        if(i==7){
            break;
        }
        cout << "number in array: " << arr[i] << endl;
    }
label:
    cout << "loop is broken" << endl;
    return 0;
}