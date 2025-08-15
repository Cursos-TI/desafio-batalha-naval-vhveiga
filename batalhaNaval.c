#include <stdio.h>

void arraylinhas(){

    //array para mostrar cordenadas no tabuleiro
    char letras[10] = {'A' , 'B', 'C', 'D', '', 'G', 'H', 'I', 'J', 'K'};
    //imprime array de letras para cordenadas
    printf("   ");
    for(int i = 0 ; i<10 ; i++){
        printf("%c ",letras[i]);
    };
    printf("\n");
}

int main(){

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
//imprime tabela com o numero da linha antes de cada linha(função if coloca um espaço antes de cada numero q não é 10)
arraylinhas();
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

//posiciona primeiro navio na horizontal na linha 3(int i) coluna 1(int j)  (função if para evitar sobrepor outro navio) 
for(int i = 3, j = 1 ; j<4 ; j++){ 
    if(tabuleiro[i][j] == 3){
        printf("\n area ocupada por outro navio \n");
        return(0);}
    else if(i > 9 || j > 9){
        printf("\n fora da area do tabuleiro \n");
        return(0);}
    else{
    tabuleiro[i][j] = 3;}
}

//imprime primeiro navio mostrando cordenadas
arraylinhas();
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

//posiciona segundo navio na vertical na linha 2(int i) coluna 8(int j)   (função if para evitar sobrepor outro navio) 
for(int i = 2, j = 8 ; i<5 ; i++){
     if(tabuleiro[i][j] == 3){
        printf("\n area ocupada por outro navio \n");
        return(0);}
    else if(i > 9 || j > 9){
        printf("\n fora da area do tabuleiro \n");
        return(0);}
    else{
    tabuleiro[i][8] = 3;}   
}

//imprime segundo navio
arraylinhas();
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

//anuncia posicionamento do terceiro navio
printf("\n");
printf("Posicionado terceiro navio\n");

//adiciona terceiro navio na diagonal na linha 1(int i) coluna 3(int j)
for(int i = 1 , j = 3 ; i < 4 ; i++ , j++){
     if(tabuleiro[i][j] == 3){
        printf("\n area ocupada por outro navio \n");
        return(0);}
    else if(i > 9 || j > 9){
        printf("\n fora da area do tabuleiro \n");
        return(0);}
    else{
     tabuleiro[i][j] = 3;}
};

//imprime terceiro navio
arraylinhas();
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

//anuncia posicionamento do quarto navio
printf("\n");
printf("Posicionado quarto navio\n");

//adiciona quarto navio na diagonal na linha 6(int i) coluna 6(int j)
for(int i = 6 , j = 6 ; i < 9 ; i++ , j--){
     if(tabuleiro[i][j] == 3){
        printf("\n area ocupada por outro navio \n");
        return(0);}
    else if(i > 9 || j > 9){
        printf("\n fora da area do tabuleiro \n");
        return(0);}
    else{ 
    tabuleiro[i][j] = 3;}
}

//imprime quarto navio
arraylinhas();
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