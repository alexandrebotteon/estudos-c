main(){
	//Definição de Variáveis
	int i, vetor[20];
	
	//Entrada de Dados
	for(i=0; i<20; i++){
		printf("Insira o valor do numero %d: ", i+1);
		scanf("%d", &vetor[i]);
	}
	
	//Saída de Dados
	printf("\n");
	for(i=19; i>=0; i--){
		printf("O valor do numero %d eh: %d\n", i+1, vetor[i]);
	}
}
