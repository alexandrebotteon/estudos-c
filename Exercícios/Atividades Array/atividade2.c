main(){
	//Defini��o de Vari�veis
	int n, i;
	
	//Entrada de Dados
	printf("Insira a quantidade de numeros que voce deseja inserir: ");
	scanf("%d", &n);
	printf("\n");
	
	//Defini��o dos Arrays
	int v[n], pos_menor=0;
	
	for(i=0; i<n; i++){
		printf("Insira o valor %d: ", i);
		scanf("%d", &v[i]);
	}
	printf("\n");
	
	//Defini��o do menor valor
	int menor=v[0];
	
	//Ordenando os valores
	for(i=0; i<n; i++){
			
			if(v[i]<menor){
				pos_menor=i;
				menor=v[i];
			}
	}
	
	//Invers�o de Valores
	v[pos_menor]=v[0];
	v[0]=menor;
	
	//Sa�da de Dados
	printf("\nA posicao do menor valor eh: %d e o valor dele eh: %d", pos_menor, v[0]);
}
