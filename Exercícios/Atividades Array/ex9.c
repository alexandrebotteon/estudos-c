main(){
	//Definição de Variáveis
	int v1[15], v2[15], i, rpt=0;
	
	//Entrada de Dados
	for(i=0; i<15; i++){
		printf("Digite o %d numero: ", i+1);
		scanf("%d", &v1[i]);
	}
	printf("\n");
	for(i=0; i<15; i++){
		printf("Digite outro %d numero: ", i+1);
		scanf("%d", &v2[i]);
	}
	
	//Saída de Dados
	for(i=0; i<15; i++){
		if(v1[i]==v2[i]){
			rpt=rpt+1;
		}
	}
	printf("\nHouveram %d numeros repetidos", rpt);
}
