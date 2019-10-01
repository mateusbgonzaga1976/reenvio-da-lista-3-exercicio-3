#include <stdio.h>
#include <stdlib.h>


int main() {
    char str1[30],str2[30];
    int i;

    printf("Digite uma frase:");
    fflush(stdout);
    fgets(str1,30,stdin);

    printf("Digite uma frase:");
    fflush(stdout);
    fgets(str2,30,stdin);

    i = 0;
    while (str1[i] != 0 && str1[i] == str2[i]){
        i++;
    }

    if (str1[i] == 0 && str2[i] == 0){
        printf("As frases sao iguais\n");
    } else {
        printf("As frases nao sao iguais\n");
    }
    system("pause");
    return 0;
}
