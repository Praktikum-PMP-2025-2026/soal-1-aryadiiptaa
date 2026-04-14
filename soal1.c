#include <stdio.h>


int jumlahdigit(int N){
    int a=0;
    while(N!=0){
        a = a+N%10;
        N = N/10;
    }
    return a;
}

int main(void){
    int N;
    scanf("%d", &N);
    for(int i=1; i<=N; i++){
        if(i%2==0 && i%3==0){
            printf("BIRU\n");
        }
        else if(i%3==0){
            printf("MERAH\n");
        }
        else if(i%2==0){
            printf("KUNING\n");
        }
        else if(i>=10 && jumlahdigit(i)%2==0){
            printf("HIJAU\n");
        }
        else{
            printf("%d\n",i);
        }
    }
}
