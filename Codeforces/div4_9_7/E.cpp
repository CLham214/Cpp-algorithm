#include <iostream>
using namespace std;

int distance(int len,string a,string b){
    int sum=0;
    for(int i=0;i<len;i++){
        sum += abs(a[i]-b[i]);
    }
    return sum;
}

int compute(){
    int num,len;
    cin >>num>>len;
    string str[num];
    for(int i =0;i<num;i++){

        cin >> str[i];
    }
    int m=INT_MAX;
    for(int i=0;i<num;i++){
        for(int j=i+1;j<num;j++){
            m=min(distance(len,str[i],str[j]),m);
        }
    }
    cout << m << endl;
    return 0;
}

int main(){
    int n;
    cin >>n;
    for(int i=0;i<n;i++){
        compute();
    }
    return 0;
}