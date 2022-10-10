#include <stdio.h>
#include <stdlib.h>


int main() {
    
	int idade=0;
    printf("digite a idade: ");
    scanf("%d",&idade);

    if(idade == 0){
        printf("nao nasceu");
    } else {
        if(idade < 16){
            printf("nao vota");
    } else {
        if(idade <= 17){
            printf("voto opcional");
    } else { 
        if(idade == 81){
            printf("nao vota e ganha premio");
    } else {
        if(idade == 41){
            printf("nao vota e ganha premio");
    } else {
        if(idade >= 65){
            printf("voto opcional");
    } else {
        if(idade >= 18){
            printf("voto obrigatorio");
    }}}}}}} 
	
return 0;}