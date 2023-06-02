main(){
	//Definição de Variáveis
	int n, i;
	
	//Entrada de Dados
	printf("Insira a quantidade de numeros que voce deseja: ");
	scanf("%d", &n);
	
	//Definição de Variáveis
	int a[n], b[n], s[n];
	
	//Definição dos números dos Arrays
	printf("\n");
	for(i=0; i<n; i++){
		printf("Insira o valor do numero %d de A: ", i+1);
		scanf("%d", &a[i]);
	}
	printf("\n");
	for(i=0; i<n; i++){
		printf("Insira o valor do numero %d de B: ", i+1);
		scanf("%d", &b[i]);
	}
	printf("\n");
	for(i=0; i<n; i++){
		s[i]=a[i]+b[i];
		printf("\nA soma dos valores %d eh: %d", i+1, s[i]);
	}
}
