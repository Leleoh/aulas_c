/*Esse código ira ler duas entradas numéricas e irá calcular se um dos números informados é múltiplo do outro*/

int main(){
    int n1,n2;
    printf("Digite seu primeiro numero: "); //Entrada número 1
    scanf("%d", &n1);
    printf("Digite seu segundo numero: "); //Entrada número 2
    scanf(" %d", &n2);
    if (n1 % n2 == 0){
        printf("%d e multiplo de %d", n1,n2); //Caso seja múltiplo
    }
    else{
        printf("%d nao e multiplo de %d", n1,n2); //Caso não seja múltiplo
    }
    return 0;
}