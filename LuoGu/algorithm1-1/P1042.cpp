#include <iostream> 
#include <cstdio>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    vector<char> score;
    char ch =getchar();
    while(ch !='E'){
        if(ch =='\n'){
            ch =getchar();
            continue;}
        score.push_back(ch);
        ch =getchar();
    }
    int ws =0;
    int ls =0;
    for(auto &i:score){
        if(i=='W') ws++;
        if(i=='L') ls++;
        if((ws >=11 or ls>=11)&&abs(ws-ls)>=2){
            cout<<ws<<":"<<ls<<"\n";
            ws =0;
            ls =0;
        }
    }
    cout<<ws<<":"<<ls<<"\n"<<"\n";
    ws =0;
    ls =0;

        for(auto &i:score){
        if(i=='W') ws++;
        if(i=='L') ls++;
        if((ws >=21 or ls>=21)&&abs(ws-ls)>=2){
            cout<<ws<<":"<<ls<<"\n";
            ws =0;
            ls =0;
        }
    }
    cout<<ws<<":"<<ls<<"\n";
    return 0;
}