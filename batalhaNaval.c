#include <stdio.h>

void arraylinhas(){

    //array para mostrar cordenadas no tabuleiro
    char letras[10] = {'A' , 'B', 'C', 'D', 'F', 'G', 'H', 'I', 'J', 'K'};
    //imprime array de letras para cordenadas
    printf("   ");
    for(int i = 0 ; i<10 ; i++){
        printf("%c ",letras[i]);
    };
    printf("\n");
}

void imptab(int tab[10][10]){
    arraylinhas();
    //imprime tabela com o numero da linha antes de cada linha(função if coloca um espaço antes de cada numero q não é 10)
    for(int i = 0 ; i<10 ; i++ ){
        if(i+1==10){
            printf("%d ", i + 1);
        }
        else{
            printf(" %d ", i + 1);
        }
        for(int j = 0 ; j<10 ; j++){
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    };
}

void imphab(int tab[3][5]){

    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", tab[i][j]);
        }
    printf("\n");
    }

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
imptab(tabuleiro);

//anuncia posicionamento do primeiro navio
printf("\n");
printf("Posicionando primeiro navio\n");

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
imptab(tabuleiro);

//anuncia posicionamento do segundo navio
printf("\n");
printf("Posicionando segundo navio\n");

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
imptab(tabuleiro);

//anuncia posicionamento do terceiro navio
printf("\n");
printf("Posicionando terceiro navio\n");

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
imptab(tabuleiro);

//anuncia posicionamento do quarto navio
printf("\n");
printf("Posicionando quarto navio\n");

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
imptab(tabuleiro);

//condiçao para formar o cone
int cone[3][5];
for(int i = 0; i < 3; i++) {
    for (int j = 0; j < 5; j++) {
        if (j >= (5 / 2 - i) && j <= (5 / 2 + i)) {
            cone[i][j] = 1;
        } else {
            cone[i][j] = 0;
        }
    }
}

//imprime a matriz cone
printf("\nhabilidade cone \n");
imphab(cone);

//condiçao para formar cruz
int cruz[3][5];
for(int i = 0; i < 3; i++){
    for(int j = 0; j < 5; j++){
        if (j == 2 || i == 1){
        cruz[i][j] = 1;}
        else{
        cruz[i][j] = 0;}
        
    }
}

//imprime a matriz cruz
printf("\nhabilidade cruz \n");
imphab(cruz);

//condiçao para formar octaedro
int octaedro[3][5];
for(int i = 0; i < 3; i++){
    for(int j = 0; j < 5; j++){
        if(j == 2 || (i == 1 && j > 0 && j < 4)) {
        octaedro[i][j] = 1;}
        else{
        octaedro[i][j] = 0 ;}
    }
}

//imprime a matriz octaedro
printf("\nhabilidade octaedro \n");
imphab(octaedro);

//colocando as 3 habilidades no tabuleiro principal
//cone
for(int i = 0; i < 3; i++) {
    for (int j = 0; j < 5; j++) {
        if(cone[i][j] == 1){
        tabuleiro[i][j] = 5;
        }
    }
}

//cruz
for(int i = 3; i < 6; i++) {
    for (int j = 5; j < 10; j++) {
        int linha = i-3;
        int coluna = j-5;
        if(cruz[linha][coluna] == 1){
        tabuleiro[i][j] = 5;
        }
    }
}

//octaedro
for(int i = 7; i < 10; i++) {
    for (int j = 0; j < 5; j++) {
        int linha = i-7;
        int coluna = j;
        if(octaedro[linha][coluna] == 1){
        tabuleiro[i][j] = 5;
        }
    }
}

//imprime o tabuleiro apos as habilidades
printf("\n");
printf("Tabuleiro apos uso das habilidades \n");
imptab(tabuleiro);

return 0;
}