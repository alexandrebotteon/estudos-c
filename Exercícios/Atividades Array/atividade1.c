main(){
	//Definição de Variáveis
	int n, i;
	
	//Entrada de Dados
	printf("Insira a quantidade de numeros que voce deseja inserir: ");
	scanf("%d", &n);
	printf("\n");
	
	//Definição dos Arrays
	int v[n], pos_menor=0;
	
	for(i=0; i<n; i++){
		printf("Insira o valor %d: ", i);
		scanf("%d", &v[i]);
	}
	printf("\n");
		
	//Definição do menor valor
	int menor=v[0];
	
	//Ordenando os valores
	for(i=0; i<n; i++){
			
			if(v[i]<menor){
				pos_menor=i;
				menor=v[i];
			}
	}
	
	
	printf("\nA posicao do menor valor eh: %d", pos_menor);
}
