#define RMS 10

main(){
	//Definição de Variáveis
	int vetor[RMS], rm, i, achei=0;
	
	//Entrada de Dados
	for(i=0; i<10; i++){
		printf("Insira o RM %d: ", i+1);
		scanf("%d", &vetor[i]);
	}
	printf("\nInsira o RM que voce deseja: ");
	scanf("%d", &rm);
	
	//Procurando RM dentro dos Arrays
	for(i=0; i<10; i++){
		if(rm==vetor[i]){
			achei=1;
		}
	}
	
	//Saída de Dados
	if(achei==1){
		printf("Achei");
	}else{
		printf("Nao Achei");
	}
}
