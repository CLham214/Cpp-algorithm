#include <stdio.h>

int com(int *a,int *b,int *c){
    int i=0,j=0,k=0,count=0;

    while(i<10 && j<10){
        if(a[i]<b[j]){
            c[k]=a[i];
            k++;
            i++;
        }else if(a[i]>b[j]){
            c[k]=b[j];
            k++;
            j++;
        }else{
            count++;
            i++;
            j++;
        }
    }

    while(i<10){
        c[k]=a[i];
        k++;
        i++;
    }

    while(j<10){
        c[k]=b[j];
        k++;
        j++;
    }

    return count;
}

int main(){
    int a[10],b[10],c[20];

    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }

    for(int i=0;i<10;i++){
        scanf("%d",&b[i]);
    }

    int count=com(a,b,c);

    for(int i=0;i<20-2*count;i++){
        if(i!=0)
            printf(" ");
        printf("%d",c[i]);
    }

    printf("\ncount=%d\n",count);

    return 0;
}