#include <stdio.h>
#include <math.h>
const int N=1e5+10;
int *count(char *ch_p){
    static int n=0;
    if(*ch_p=='a'||*ch_p=='e'||*ch_p=='i'||*ch_p=='o'||*ch_p=='u'){
        n++;
    }
    return &n;
}
int main(){
    char str[N];
    int a;
    gets(str);
    for(int i=0;str[i]!='\0';i++){
        a =*count(&str[i]);
    }
    printf("%s,%d",str,a);


}