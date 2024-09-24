#include <stdio.h>

int main(){
    int g1,g2,m1,m2,a1,a2,diffg,diffm,diffa;
    printf("Inserisci la prima data [DD/MM/YY]: ");
    scanf("%d",&g1);
    scanf("%d",&m1);
    scanf("%d",&a1);
    printf("Inserisci la seconda data [DD/MM/YY]: ");
    scanf("%d",&g2);
    scanf("%d",&m2);
    scanf("%d",&a2);
    diffg=g1-g2;
    diffm=m1-m2;
    diffa=a1-a2;
    printf("La differenza tra le due date è di %d giorni, %d mesi, %d anni",diffg,diffm,diffa);
    return 0;
}
