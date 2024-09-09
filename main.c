// Online C compiler to run C program online
#include <stdio.h>
int choix;
struct contact{
    char nom[50];
    char numero[50];
    char adressemail[50];
};


void    ajoute()
{
    int choix;
    printf("combien de contact vous voulez ajouter:");
    scanf("%d",&choix);
    struct contact c1;
    for(int i = 0 ; i < choix ; i++ )
    {
    printf("entrer votre nom complet:");
    scanf("%s",&c1.nom[i]);
    printf("entrer votre numero telephone:");
    scanf("%s",&c1.numero[i]);
    printf("entrer votre email:");
    scanf("%s",&c1.adressemail[i]);
    }



}

void modification()





int main()
{

    ajoute();
}

