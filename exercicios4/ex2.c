/*Esse programa calcula a soma de todos os números de 0 a 10*/

int main(){
    int c, soma;
    for (c = 0; c <= 10; c++){
        soma += c;
    }
    printf("A soma de todos os numeros de 0 a 10 e: %d", soma);
    return 0;
}