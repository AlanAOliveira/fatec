#include <stdio.h>
 
int main() {
 
    int N, L, i, j, k, Swap=0;
    
    scanf("%i", &N);    
    int S[N];
    
    for(i=0; i<N; i++){
        scanf("%i", &L);
        int OE[L], OS[L];
        
        for(j=0;j<L;j++){
            scanf(" %i",&OE[j]);
            OS[j] = OE[j];
        }
        
        for(j=0;j<L;j++){
            for(k=0;k<L;k++)
                if(OE[j] < OS[k]){
                    OS[k] = OE[j];
                    Swap++;
                }
            S[j] = Swap;
        }
        for(j=0;j<L;j++){
            printf("Optimal train swapping takes %i swaps.\n", S[j]);
        }   
    }return 0;
}
