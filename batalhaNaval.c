#include <stdio.h>

int main(){

char linhas[10] = {'A' , 'B', 'C', 'D', 'F', 'G', 'H', 'I', 'J', 'K'}; //array para mostrar cordenadas no tabuleiro

int tabuleiro[10][10] = {

    { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
    { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
    { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
    { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
    { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
    { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },          //declara matriz int 10x10
    { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
    { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
    { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
    { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },

};

printf("***BATALHA NAVAL***\n");

printf("   ");
for(int i = 0 ; i<10 ; i++){
    printf("%c ",linhas[i]);
};

printf("\n");
for(int i = 0 ; i<10 ; i++ ){                   //imprime tabuleiro em branco mostrando cordenadas
    if(i+1==10){
        printf("%d ", i + 1);
    }
    else{
        printf(" %d ", i + 1);
    }
    for(int j = 0 ; j<10 ; j++){
        printf("%d ", tabuleiro[i][j]);
    }
    printf("\n");
};

printf("\n");
printf("Posicionado primeiro navio\n");

for(int j = 1 ; j<4 ; j++){                    //posiciona primeiro navio na horizontal na linha 3 coluna 1(j) 
    if(tabuleiro[3][j] == 3){
    printf("area ocupada por outro navio \n");
    break;}
    tabuleiro[3][j] = 3;   
}

printf("   ");
for(int i = 0 ; i<10 ; i++){
    printf("%c ",linhas[i]);
};

printf("\n");
for(int i = 0 ; i<10 ; i++ ){                   //imprime primeiro navio mostrando cordenadas
    if(i+1==10){
        printf("%d ", i + 1);
    }
    else{
        printf(" %d ", i + 1);
    }
    for(int j = 0 ; j<10 ; j++){
        printf("%d ", tabuleiro[i][j]);
    }
    printf("\n");
};

printf("\n");
printf("Posicionado segundo navio\n");

for(int i = 2 ; i<5 ; i++){
    if(tabuleiro[i][8] == 3){
    printf("area ocupada por outro navio \n");  //posiciona segundo navio na vertical na linha 2 (i) coluna 8
    break;}
    tabuleiro[i][8] = 3;   
}

printf("   ");
for(int i = 0 ; i<10 ; i++){
    printf("%c ",linhas[i]);
};

printf("\n");
for(int i = 0 ; i<10 ; i++ ){                   //imprime segundo navio mostrando cordenadas
    if(i+1==10){
        printf("%d ", i + 1);
    }
    else{
        printf(" %d ", i + 1);
    }
    for(int j = 0 ; j<10 ; j++){
        printf("%d ", tabuleiro[i][j]);
    }
    printf("\n");
};


}