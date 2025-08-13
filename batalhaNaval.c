#include <stdio.h>

int main(){

//array para mostrar cordenadas no tabuleiro
char letras[10] = {'A' , 'B', 'C', 'D', 'F', 'G', 'H', 'I', 'J', 'K'};

//declara matriz int 10x10
int tabuleiro[10][10] = {

    { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
    { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
    { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
    { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
    { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
    { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
    { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
    { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
    { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
    { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },

};

//nome do progama
printf("***BATALHA NAVAL***\n");

//imprime tabuleiro em branco mostrando cordenadas

//imprime array de letras para cordenadas
printf("   ");
for(int i = 0 ; i<10 ; i++){
    printf("%c ",letras[i]);
};
printf("\n");

//imprime tabela com o numero da linha antes de cada linha(função if coloca um espaço antes de cada numero q não é 10)
for(int i = 0 ; i<10 ; i++ ){
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

//anuncia posicionamento do primeiro navio
printf("\n");
printf("Posicionado primeiro navio\n");

//posiciona primeiro navio na horizontal na linha 3 coluna 1(int j)  (função if para evitar sobrepor outro navio) 
for(int j = 1 ; j<4 ; j++){ 
    if(tabuleiro[3][j] == 3){
    printf("area ocupada por outro navio \n");
    break;}
    tabuleiro[3][j] = 3;   
}

//imprime array de letras para cordenadas
printf("   ");
for(int i = 0 ; i<10 ; i++){
    printf("%c ",letras[i]);
};
printf("\n");

//imprime primeiro navio mostrando cordenadas
for(int i = 0 ; i<10 ; i++ ){
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

//anuncia posicionamento do segundo navio
printf("\n");
printf("Posicionado segundo navio\n");

//posiciona segundo navio na vertical na linha 2(int i) coluna 8    (função if para evitar sobrepor outro navio) 
for(int i = 2 ; i<5 ; i++){
    if(tabuleiro[i][8] == 3){
    printf("area ocupada por outro navio \n");
    break;}
    tabuleiro[i][8] = 3;   
}

//imprime array de letras para cordenadas
printf("   ");
for(int i = 0 ; i<10 ; i++){
    printf("%c ",letras[i]);
};
printf("\n");

//imprime segundo navio mostrando cordenadas
for(int i = 0 ; i<10 ; i++ ){
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

return 0;

}