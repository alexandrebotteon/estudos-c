main(){
	int n1, soma, i=0, total=0;
	printf("Eu sei somar numeros =]\n\n");
	printf("Quantos numeros voce quer somar? Digite: ");
	scanf("%d", &n1);
	printf("\n");
	for(n1>0; n1--;){
		i++;
		printf("Insira o numero %d: ", i);
		scanf("%d", &soma);
		printf("\n");
		total = soma + total;
	}
	printf("Total: %d\n\n", total);
	printf("Nao foi dificil");
}
