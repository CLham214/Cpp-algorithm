#include <iostream>
using namespace std;

int i = 0 ;
int a = 10;
int b = 9;
 
int main(){
    if((a>b)||(i++ == 1)){
        cout<<"or is true"<<endl;

    }else{
        cout<<"or is false"<<endl;
    }
    cout<<"i = "<<i<<endl;

    if((a<b)&&(i++ == 1)){
        cout<<"and is true"<<endl;
    }else{
        cout<<"and is false"<<endl;
    }
    cout<<"i = "<<i<<endl;
    return 0;
}