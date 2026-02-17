#include <stdio.h>
int main(){
    int i,n,cpt,nbrp;
    do
    {
        printf("saisir un entier positif");
        scanf("%d",&n);
    }while(n<0);
    for(i=2;i<=n;i++){
        cpt=0;
            for(nbrp=1;nbrp<=i;nbrp++){
                   if(i%nbrp==0){
                    cpt=cpt+1;
                   }

            }

    if(cpt!=2){
       prints("les nombres premiers sont %d",nbrp);

    }
    }


    return 0;
}

