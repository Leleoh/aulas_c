/*Esse código ira ler duas entradas numéricas e irá calcular se um dos números informados é múltiplo do outro*/

int main(){
    int n1,n2;
    printf("Digite seu primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite seu segundo numero: ");
    scanf(" %d", &n2);
    if (n1 % n2 == 0){
        printf("%d e multiplo de %d", n1,n2);
    }
    else{
        printf("%d nao e multiplo de %d", n1,n2);
    }
    return 0;
}