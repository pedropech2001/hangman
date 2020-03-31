#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
char frase[60],rep[100],temporal[100];
char pal;
int longitud,i,j,inicial,acertado=0,temp=0,oportunidades=6;
int repetido=0,gano=0;

printf("put the word that your partner is going to guess: ");
    scanf("%s", frase);
    system("clear");

	longitud = 0;
	inicial = 0;
	j = 0;

    rep[0] = ' ';
    rep[1] = '\0';

    do {
                system("clear");
        temp=0;

        if(inicial == 0) {
         for(i=0;i<strlen(frase);i++) {
          if(frase[i] == ' ') {
            temporal[i] = ' ';
             longitud++;
          }
          else {
             temporal[i] = '_';
             longitud++;
          }
         }
        }
        inicial = 1;

        temporal[longitud] = '\0';

        for(i=0;i<strlen(rep);i++) {
           if(rep[i] == pal) {
            repetido = 1;
            break;
          }
          else {
           repetido = 0;
         }
        }

        if(repetido == 0) {
         for(i=0;i<strlen(frase);i++) {
                    if(frase[i] == pal) {
             temporal[i] = pal;
              acertado++;
              temp=1;
            }
          }
        }

        if(repetido == 0) {
         if(temp == 0) {
           oportunidades = oportunidades - 1;
         }
        }
        else {
         printf("you used that leter before");
         printf("\n\n");
        }
        printf("\n");
        for(i=0;i<strlen(temporal);i++) {
         printf(" %c ",temporal[i]);
        }

        printf("\n");

        if(strcmp(frase,temporal) == 0) {
            gano = 1;
            break;
        }

        printf("\n");
        printf("right letter: %d",acertado);
        printf("\n");
        printf("chances you have: %d",oportunidades);
        printf("\n");

        rep[j] = pal;
        j++;

        if (oportunidades==0)
        {
           break;
        }

        printf("Put a letter:");
        scanf("\n%c",&pal);

    }while(oportunidades != 0);


    if(gano) {
                printf("\n\n");
        printf("You win!!!.");
    }
    else {
                printf("\n\n");
        printf("you lose.");
    }

    printf("\n\n");
    getchar();
    return 0;

}
