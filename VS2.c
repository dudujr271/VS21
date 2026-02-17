#include<stdio.h>
int main(){
        int x,n,som=0,cpt=0,som1=0;
     float moy,moy1;
    do{
    printf("Veuillez entrer le nombre d entiers positifs a saisir:");
    scanf("%d",&n);
    }while(n<0);
    for(int i=0;i<n;i++){
        do{
            puts("veuillez saisir un entier negatif:");
        scanf("%d",&x);
        }while(x>0);
               if(x%2==0){
            som=som+x;
            cpt++;
            }else{
            som1=som1+x;
            }
      }
       moy= (float) som/cpt;
       moy1=(float) som1/n-cpt;
      printf("la moyenne est %.2f\n",moy);
      printf("le moyenne des nombres impairs est %.2f",moy1);

return 0 ;
}
