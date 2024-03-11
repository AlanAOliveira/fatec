#include <stdio.h>
#include <string.h>
 
int main() {
 
    int N, i, j, k, frequencia = 1,
    contagem[26];
    
    for(i=0;i<27;i++)
        contagem[i] = 0;
        
    char frase[201], 
    alfabeto[27]= "abcdefghijklmnopqrstuvwxyz";
    
    scanf("%i", &N);
    for(i=0; i<N;i++){
        scanf("%[^\n]%s", frase);
    
        for(j=0; j<200;j++)
            frase[i] = tolower(frase[i]);
        
        for(j=0;j<201;j++)
            for(k=0;k<27;k++)
                if(frase[j] == alfabeto[k])
                    contagem[k]++;
        
        for(j=0;j<27;j++)
            if(contagem[j]>frequencia)
                frequencia == contagem[j];
        
        for(j=0;j<27;j++)
            if(contagem[j] == frequencia)
                printf("%c", alfabeto[j]);
            printf("\n");
    }
    return 0;
}
