#include<iostream>
using namespace std;

int cut(){
    int n;
    cin >> n;

    int tower[n];
    for(int i=0;i<n;i++){
        cin >> tower[i];
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(tower[j]>tower[i]){
                tower[j]=tower[i];
            }
        }
    }

    int sum =0;
    for(int x:tower){
        sum += x;
    }
    cout << sum<<"\n";
    return 0;
}


int main(){
    int n;
    cin >> n;

    for(int i =0;i<n;i++){
        cut();
    }
    return 0;
}