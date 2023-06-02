main(){
	//Definição de Variáveis
	int n, i, x;
	
	//Entrada de Dados
	printf("Insira a quantidade de numeros que voce deseja inserir: ");
	scanf("%d", &n);
	printf("\n");
	
	//Definição dos Arrays
	int O[n];
	
	//Definição dos valores
	for(i=0; i<n; i++){
		printf("Insira o valor %d: ", i);
		scanf("%d", &O[i]);
	}
	
	//Definição do valor k (posição do array)
	printf("\nInsira o valor que deseja: ");
	scanf("%d", &x);
	
	//Achar o valor menor
	for(i=n-1; i>=0; i--){
		
		if(x>=O[i]){
			break;
		}
	
	}
	
	//Saida de Dados
	printf("\nValor inserido: %d\n", x);
	printf("\nPosicao do valor menor ou igual ao numero inserido: %d\n", i);
	printf("\nValor desta posicao eh: %d", O[i]);
}
