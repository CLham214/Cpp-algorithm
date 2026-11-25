#include <stdio.h>
const int N=1e5+10;
int fun(char a[]){
    int i,j=0;
    int count=0;
    for(i=0;a[i]!='\0';i++){
        if(a[i]>='0'&&a[i]<='9'){
            count++;
        }else{
            a[j]=a[i];
            j++;
        }
    }
    a[j]='\0';
    return count;
}

int main(){
    char a[N];
    scanf("%9999s",a);
    int n=fun(a);
    printf("%d:%s",n,a);
    return 0;
}