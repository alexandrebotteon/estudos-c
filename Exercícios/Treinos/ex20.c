main(){
	int i, soma=0, num;
	printf("Insira um numero: ");
	scanf("%d", &num);
	for(i=0;i<=num;i=i+2){
		soma=soma+i;
	}
	printf(" %d", soma);
}
