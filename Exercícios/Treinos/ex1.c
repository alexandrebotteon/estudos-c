main(){
	float n1, n2, res;
	printf("Digite o primeiro numero: ");
	scanf("%f", &n1);
	printf("\n");
	do{
	printf("Digite o segundo numero: ");
	scanf("%f", &n2);
	printf("\n");
	}while(n2==0);
	res=n1/n2;
	printf("O resultado eh %f", res);
}
