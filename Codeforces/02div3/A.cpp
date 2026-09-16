#include <iostream>
#include <vector>

using namespace std;

long long compute(){
    int n;
    const int N=2e5+10;
    cin >> n;
    vector<int> num;
    long long pre[N];
    pre[0]=0;
    string lr;
    for(int i=1;i<=n;i++){
        int a;cin>> a;
        num.push_back(a);
    }
    for(int i=1;i<=n;i++){
        pre[i]=pre[i-1]+num[i-1];
    }
    cin >> lr;

    long long sum=0;
    int a =0;
    int b=n-1;
    while(a<b){

        int ln =n;
        int rn =-1;
        for(int i=a;i<b;i++){
            if(lr[i]=='L'){
                ln = i;
                break;
            }
        }
        for(int i=b;i>=a;i--){
            if(lr[i]=='R'){
                rn = i;
                break;
            }
        }

        if(rn <= ln){
            break;
        }else{

            sum += pre[rn +1]-pre[ln];

        }
        a=ln+1;
        b=rn-1;
    }
    return sum;


}

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        cout<<compute()<<"\n";
    }
    return 0;
}