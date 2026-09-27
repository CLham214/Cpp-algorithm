#include <bits/stdc++.h>
using namespace std;

const int N=35;
int cop(int a[][N],int h,int w){
    int sm =0;

    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(j+1<w&&a[i][j]==a[i][j+1]) sm++;
            if(i+1<h&&a[i][j]==a[i+1][j]) sm++;
        }
    }
    return sm;
}
int main(){
    int h,w;
    cin >> h>>w;
    int a[N][N];
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin >>a[i][j];
        }
    }
    int sum = cop(a,h,w);
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            int t =a[i][j];
            for(int c=1;c<=3;c++){
                a[i][j] =c;
                sum =max(cop(a,h,w),sum);
            }
            a[i][j] =t;
        }
    }
    cout << sum << "\n";
    return 0;
}