main(){
	//Definição de Variáveis
	int n, i, j;
	
	//Entrada de Dados
	printf("Insira a quantidade de medidas de circunferencia do quadril que voce deseja inserir: ");
	scanf("%d", &n);
	printf("\n");
	
	//Definição dos Arrays
	int cir[n], menor=0;
	
	for(i=0; i<n; i++){
		printf("Insira a medida da circunferencia do quadril %d: ", i+1);
		scanf("%d", &cir[i]);
	}
	printf("\n");
	
	//Ordenando os valores
	for(i=0; i<n; i++){
		
		for(j=0; j<n; j++){
			
			if(cir[i]<cir[j]){
				menor=cir[i];
				cir[i]=cir[j];
				cir[j]=menor;
			}
		}
	}
	
	//Saída de Dados
	for(i=0; i<n; i++){
		printf("%d\n", cir[i]);
	}
}
