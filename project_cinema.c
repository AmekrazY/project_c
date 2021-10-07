#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>

int main(void)

{

    // Declaration variables et tableaux
    int rep;
    int age, choix;
    char r, r2, r3, R, R2, R3, answer, answer2, answer3;
    string filmCategorieEnfant[3] = {"1- Oliver et Olivia", "2- L'Oiseau bleu", "3- On arrête quand ?"};
    string filmCategorieAdos[3] = {"1- Le Monde de Charlie", "2- This is not a love story", "3- Au premier regard"};
    string filmCategorieAdulte[3] = {"1- The Shining", "2- La Nonne", "3- Conjuring"};

    printf("*******************\n");
    printf("BONJOUR ET BIENVENU\n");
    printf("*******************\n\n");

    // on demande de saisir l'age et on verifier aussi que l'age est bien valide
    do
    {
        printf("Dites nous quel age avez-vous ? \n");
        scanf("%i", &age);
        system("clear");
        printf("Votre age est incorrect veuilez saisir votre age !!! \n\n");

    }
    while (age <= 3);


    if (age < 11)  // 1er categorie ou l'age est inferieur a 11 ans
    {
        printf("Vous pouvez aller donc voir les films de categorie enfants \n\n");
        printf("Voici les films de la categorie:\n\n");
        printf("****               ****\n");
        for (int i = 0 ; i < 3 ; i++)
        {
            printf("%s \n", filmCategorieEnfant[i]);        // on affiche les films de la categorie enfants
        }
        printf("****               ****\n\n");
        do
        {
            printf("Est ce que vous voulez voir le film: \n%s\n\n", filmCategorieEnfant[0]);
            r = get_char("Si oui tapez o / si non tapez n :\n");     // On demande de repondre avec "O/o" pour oui ou "N/n" pour non
            //printf("Incorrect !! veuillez svp tapez o si oui / n si non !\n");
            if (r == 'o' || r == 'O')
            {
                printf("BON FILM a bientot (*_*) \n");
                break;
            }
            else if (r == 'n' || r == 'N')
            {
                printf("Est que vous voulez voir le deuxieme film: \n%s\n", filmCategorieEnfant[1]);
                r2 = get_char("Si oui tapez o, si non tapez n ?\n");
                if (r2 == 'o' || r2 == 'O')
                {
                    printf("Bon film a bientot (*_*) \n");
                    break;
                }
                else if (r2 == 'n' || r2 == 'N')
                {
                    system("clear");         // on efface les deux questions precedantes de l'ecran en cas la reponse est non
                    printf("vous avez un autre et dernier film de votre categorie: \n%s\n", filmCategorieEnfant[2]);
                    printf("vous les vous le voir ?\n");
                    r3 = get_char("Si oui tapez o, si non tapez n ?\n");
                    if (r3 == 'o' || r3 == 'O')
                    {
                        printf("Bon film a bientot (*_*)\n");
                        break;
                    }
                    else if (r3 == 'n' || r3 == 'N')
                    {
                        printf("Vous avez plus de films a voir !!!"); // on s'arrete  on donne pas acces aux enfants aux autres categories de films
                        break;
                    }
                }

            }
        }
        // on verifier si on a bien saisi la lettre 'o' pour oui ou 'n' pour non sinon on redemande
        while ((r != 'o' || r != 'O') && (r != 'n' || r != 'N'));


    }
    else if (age >= 11 && age <= 17)        // 2eme categorie ou l'age entre 11 et 17ans
    {
        printf("Vous pouvez aller donc voir les films de categorie Ado \n\n");
        printf("Voici les films de la categorie:\n\n");
        printf("****               *******\n");
        for (int i = 0 ; i < 3 ; i++)
        {
            printf("%s \n", filmCategorieAdos[i]);      // on affiche les films de la categorie Ado
        }
        printf("****               *******\n\n");
        printf("Est ce que vous voulez voir le film: \n%s\n\n", filmCategorieAdos[0]);
        R = get_char("Si oui tapez o / si non tapez n ?\n");
        if (R == 'o' || R == 'O')
        {
            printf("BON FILM a bientot (*_*) \n");
        }

        else if (R == 'n' || R == 'N')
        {
            system("clear");
            printf("Est que vous voulez voir le deuxieme film: \n%s\n", filmCategorieAdos[1]);
            R2 = get_char("Si oui tapez o, si non tapez n ?\n");
            if (R2 == 'o' || R2 == 'O')
            {
                printf("Bon film a bientot (*_*)\n");
            }
            else if (R2 == 'n' || R2 == 'N')
            {
                system("clear");
                printf("Vous avez un autre et dernier film de votre categorie: \n%s\n", filmCategorieAdos[2]);
                printf("Vous voulez le voir ?\n");
                R3 = get_char("Si oui tapez o, si non tapez n ?\n");
                if (R3 == 'o' || R3 == 'O')
                {
                    printf("Bon film a bientot (*_*)\n");
                }
                else if (R3 == 'n' || R3 == 'N')
                {
                    printf("Vous avez plus de films a voir !!!");
                }
            }
        }
    }
    else if (age >= 18)         // 3eme categorie ou l'age est olus de 18ans
    {
        printf("Vous pouvez aller donc voir les films de categorie adule \n\n");
        printf("Voici les films de la categorie:\n\n");
        printf("****    *****\n");
        for (int i = 0 ; i < 3 ; i++)
        {
            printf("%s \n", filmCategorieAdulte[i]);        // on affiche les films de la categorie adulte
        }
        printf("****    *****\n\n");
        printf("Est ce que vous voulez voir le film: \n%s\n\n", filmCategorieAdulte[0]);
        answer = get_char("Si oui tapez o / si non tapez n ?\n");
        if (answer == 'o' || answer == 'O')
        {
            printf("BON FILM a bientot (*_*) \n");
        }

        else if (answer == 'n' || answer == 'N')
        {
            system("clear");
            printf("Est que vous voulez voir le deuxieme film: \n%s\n", filmCategorieAdulte[1]);
            answer2 = get_char("Si oui tapez o, si non tapez n ?\n");
            if (answer2 == 'o' || answer2 == 'O')
            {
                printf("Bon film a bientot (*_*)\n");
            }
            else if (answer2 == 'n' || answer2 == 'N')
            {
                system("clear");
                printf("Vous avez un autre et dernier film de votre categorie: \n%s\n", filmCategorieAdulte[2]);
                printf("Vous voulez le voir ?\n");
                answer3 = get_char("Si oui tapez o, si non tapez n ?\n");
                if (answer3 == 'o' || answer3 == 'O')
                {
                    printf("Bon film a bientot (*_*)\n");
                }
                else if (answer3 == 'n' || answer3 == 'N')
                {
                    system("clear");
                    printf("On a plus de films dans votre categorie\nVeuillez choisir une de ces categories suivantes:\n");
                    printf("1- Categorie enfants\n2- Categorie Ado\n");
                    printf("Tapez 1 ou 2 :\n");
                    scanf("%i", &choix);
                    if (choix == 1)
                    {
                        printf("****               ****\n");
                        for (int i = 0 ; i < 3 ; i++)
                        {
                            printf("%s \n", filmCategorieEnfant[i]);
                        }
                        printf("****               ****\n\n");
                      
                    }
                    else if (choix == 2)
                    {
                        printf("*****              ********\n");
                        for (int i = 0 ; i < 3 ; i++)
                        {
                            printf("%s \n", filmCategorieAdos[i]);
                        }
                        printf("*****              ********\n\n");
                    }
                }

            }
        }
    }
}