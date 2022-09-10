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
double cosinus(double nbr){
    return cos(nbr);
}
double sinus(double nbr){
    return sin(nbr);
}
double tangante(double nbr){
    return cos(nbr)/sin(nbr);
}
double ln(double nbr){
    return log(nbr);
}
double exponential(double nbr){
    return exp(nbr);
}
double fact(double nbr){
    double res=1;
    for(int i=1;i<=nbr;i++){
        res*=i;
    }
    return res;
}
double absolute(double nbr){
    if(nbr<0){
        return nbr*(-1);
    }
    return nbr;
}
double racine(double nbr){
    return sqrt(nbr);
}





int main()
{
    debut:
    printf("--------------------------------CALCULATRICE---------------------------------------\n");
    printf("-----------------------------------------------------------------------------------\n");
    printf("-----------------------------------------------------------------------------------\n");

    printf("\n---------------------------------------------------------------------------------\n");
    printf("1-mode normale\n2-mode scientifique\n");
    int mode;
    int quite=1;
    printf("\nchoisir le mode : ");
    scanf("%d",&mode);

do{
    if(mode==1){
        printf("les operations :\n-addition(1)\n-soustraction(2)\n-multiplication(3)\n-division(4)\n-modulo(5)\n-puissance(6)\n");
        double a,b,resultat;
        int op;
        printf("entrer le premier nombre : ");
        scanf("%lf",&a);
        do{
            printf("choisir une operation : ");
            scanf("%d",&op);
        }while(op<1 || op>6);

        printf("entrer le deuxieme nombre : ");
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
                    printf("entrer le deuxieme nombre : ");
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
        double angle,nombre;
        int op;
        printf("les operations :\n1-cos()\n2-sin()\n3-tan()\n4-ln()\n5-exponential\n6-factoriel !\n7-Abs||\n8-racine\nchoisir une :");
        scanf("%d",&op);

        switch(op){
            case 1:
                printf( "Veuillez saisir un angle: " );
                scanf("%lf", &angle);
                printf("le cos de %lf est : %lf",angle,cosinus(angle));
                break;
            case 2:
                printf( "Veuillez saisir un angle: " );
                scanf("%lf", &angle);
                printf("le sin de %lf est : %lf",angle,sinus(angle));
                break;
            case 3:
                printf( "Veuillez saisir un angle: " );
                scanf("%lf", &angle);
                printf("le tan de %lf est : %lf",angle,tangante(angle));
                break;
            case 4:
                printf( "Veuillez saisir un nombre: " );
                scanf("%lf", &nombre);
                printf("ln de %lf est : %lf",nombre,ln(nombre));
                break;
            case 5:
                printf( "Veuillez saisir un nombre: " );
                scanf("%lf", &nombre);
                printf("l'exopnential de %lf est : %lf",nombre,exponential(nombre));
                break;
            case 6:
                printf( "Veuillez saisir un nombre: " );
                scanf("%lf", &nombre);
                printf("le factoriel de %lf est : %lf",nombre,fact(nombre));
                break;
            case 7:
                printf( "Veuillez saisir un nombre: " );
                scanf("%lf", &nombre);
                printf("la valeur absolute de %lf est : %lf",nombre,absolute(nombre));
                break;

            case 8:
                printf( "Veuillez saisir un nombre: " );
                scanf("%lf", &nombre);
                printf("le racine de %lf est : %lf",nombre,racine(nombre));
                break;
                }
    }
    printf("\nvoulez vous continuer ? \n1-oui\n2-non:\n3-changer le mode\n");
    scanf("%d",&quite);
    if(quite==3){
        system("cls");
        goto debut;
    }
}while(quite==1);







return 0;
}
