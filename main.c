#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double add(int a,int b){
    return a+b;
}
double soustraction(int a,int b){
    return a-b;
}
double multi(double a,double b){
    return a*b;
}
double division(double a,double b){
    return a/b;
}
double modulo(double a,double b){
    return (int)a%(int)b;
}
double puissance(double a,double b){
    return pow(a,b);
}


int main()
{
    printf("------------------calculatrice-----------------\n");
    printf("-----------------------------------------------\n");
    printf("-----------------------------------------------\n");

    printf("\n-----------------------------------------------\n");
    printf("1-mode normale\n2-mode scientifique\n");
    int mode;
    int quite=1;
    printf("\nchoisir le mode :\n");
    scanf("%d",&mode);

do{
    if(mode==1){
        printf("les operations :\n1-addition(1)\n2-soustraction(2)\n3-multiplication(3)\n4-division(4)\n5-modulo(5)\n6-puissance(6)\n");
        double a,b,resultat;
        int op;
        printf("entrer le premier nombre :\n");
        scanf("%lf",&a);
        do{
            printf("choisir une operation :\n");
            scanf("%d",&op);
        }while(op<1 || op>5);

        printf("entrer le deuxieme nombre :\n");
        scanf("%lf",&b);

        switch(op){
            case 1:
                resultat=add(a,b);
                break;
            case 2:
                resultat=soustraction(a,b);
                break;
            case 3:
                resultat=multi(a,b);
                break;
            case 4:
                while(b==0){
                    printf("entrer le deuxieme nombre :\n");
                    scanf("%lf",&b);
                }
                resultat=division(a,b);
                break;
            case 5:
                if(b>a){
                    resultat=0;
                }
                resultat=modulo(a,b);
                break;
            case 6:
                resultat=puissance(a,b);
                break;
                }
        printf("le resultat est : %lf",resultat);
    }
    else{
        double angle;
        int op;
        printf("les operations :\n1-cos\n2-sin\n3-tan\n4-ln\5-factoriel\n");
        scanf("%int",&op);

        printf( "Veuillez saisir un angle: " );
        scanf("%lf", &angle);

        switch(op){
            case 1:
                printf("le cos de %lf est : %lf",angle,cos(angle));
                break;
            case 2:
                printf("le sin de %lf est : %lf",angle,sin(angle));
                break;
            case 3:
                printf("le tan de %lf est : %lf",angle,cos(angle)/sin(angle));
                break;
            case 4:

                //rani hna
                printf("ln de %lf est : %lf",angle,log(M_E)));
                break;
                }
    }
    printf("\nvoulez vous continuer ? \n1-oui\n2-non:\n");
    scanf("%d",&quite);
}while(quite==1);







return 0;
}
