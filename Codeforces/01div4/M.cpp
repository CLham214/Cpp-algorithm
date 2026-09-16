#include <iostream>
using namespace std;

int anal(){
    int n,k;
    cin >> n>>k;
    if(n<k){
        cout <<"NO"<<"\n";
    }else{
        if((n-k+1)%2==1){
            cout<<"YES"<<"\n";
            for(int i=0;i<k-1;i++){
                cout<< 1<<" ";
            }
            cout <<n-k+1<<"\n";
        }else if((n-2*k+2)%2==0 &&(n-2*k+2)>0){
            cout<<"YES"<<"\n";
            for(int i=0;i<k-1;i++){
                cout<<2<<" ";
            }
            cout<<n-2*k+2<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        anal();
    }
    return 0;
}