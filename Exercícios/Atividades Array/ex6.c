main(){
	//Defini��o de Vari�veis
	int a[10], m[10], x, i;
	
	//Entrada de Dados
	for(i=0; i<10; i++){
		printf("Insira o valor do numero %d: ", i+1);
		scanf("%d", &a[i]);
	}
	printf("\nInsira outro numero: ");
	scanf("%d", &x);
	
	//Defini��o dos n�meros do Array m
	for(i=0; i<10; i++){
		m[i]=a[i]*x;
	}
	
	//Sa�da de Dados
	printf("\n");
	for(i=0; i<10; i++){
		printf("O numero %d eh: %d\n", i+1, m[i]);
	}
}
