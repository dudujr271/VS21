#include<stdio.h>
int main(){
    int x,n;
    do{
    printf("saisir n entiers:");
    scanf("%d",&n);
    }while(n<0);
    for(int i=0;i<n;i++){
        do{
            puts("veuillez saisir un entier negatif:");
        scanf("%d",&x);
        }while(x>0);
        printf("le nombre que tu as saisi est %d",x);
    }


return 0 ;
}
