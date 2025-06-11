#include <stdio.h>

int main() {

    int Z, i, j, k, l, jogador = 'M', cheio = 0, cM, cL, cW, cT;

    scanf("%d", &Z);

    char tabuleiro[Z][Z];

    for(i = 0; i < Z; i++){
      for(j = 0; j < Z; j++){
            tabuleiro[i][j] = 0;
      }  
    }

    while(1){
        scanf("%d %d", &k, &l);
        if(k < 0 || k >= Z || l < 0 || l >= Z || tabuleiro[k][l] != 0){
            printf("Posicao Invalida!\n");
        } else{
            cheio = 1;
            for(i = 0 ; i < Z ; i++){
                tabuleiro[k][i] = jogador;
            }
            for(i = 0 ; i < Z; i++){
                tabuleiro[i][l] = jogador;
            }
            for(i = 0; i < Z; i++){
                for(j = 0; j < Z; j++){
                    if(tabuleiro[i][j] != 0){   
                    }else{
                        cheio = 0;
                    }
                }  
            }
            cM = 0;
            cL = 0;
            cW = 0;
            cT = 0;
            for(i = 0; i < Z; i++){
                for(j = 0; j < Z; j++){
                    if(tabuleiro[i][j] == 'M'){  
                        cM++; 
                    }
                    if(tabuleiro[i][j] == 'L'){
                        cL++;
                    }
                    if(tabuleiro[i][j] == 'W'){
                        cW++;
                    }
                    if(tabuleiro[i][j] == 'T'){
                        cT++;
                    } 
                }


            }
            printf("M %d\nL %d\nW %d\nT %d\n", cM, cL, cW, cT);
            if(cheio == 1){
                switch(jogador){
                    case 'M':
                        printf("Mario venceu!\n");
                        return 0;
                    break;
                    case 'L':
                        printf("Luis venceu!\n");
                        return 0;
                    break;
                    case 'W':
                        printf("Waldo venceu!\n");
                        return 0;
                    break;
                    case 'T':
                        printf("Thomas venceu!\n");
                        return 0;
                    break;

                }
            }   
            else{
                switch(jogador){
                    case 'M':
                        jogador = 'L';
                    break;
                    case 'L':
                        jogador = 'W';
                    break;
                    case 'W':
                        jogador = 'T';
                    break;
                    case 'T':
                        jogador = 'M';
                    break;

                }
            }
        }
           
        

    
    };
    return (0);
};
