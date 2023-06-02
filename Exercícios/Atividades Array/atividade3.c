main(){
	//Definição de Variáveis
	int n, i, j;
	
	//Entrada de Dados
	printf("Insira a quantidade de numeros que voce deseja inserir: ");
	scanf("%d", &n);
	printf("\n");
	
	//Definição dos Arrays
	int v[n], menor=0;
	
	for(i=0; i<n; i++){
		printf("Insira o valor %d: ", i);
		scanf("%d", &v[i]);
	}
	printf("\n");
	
	//Ordenando os valores
	for(i=0; i<n; i++){
		
		for(j=0; j<n; j++){
			
			if(v[i]<v[j]){
				menor=v[i];
				v[i]=v[j];
				v[j]=menor;
			}
		}
	}
	
	//Saída de Dados
	for(i=0; i<n; i++){
		printf("\nO valor ordenado %d eh: %d", i, v[i]);
	}
}
