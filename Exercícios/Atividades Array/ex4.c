#define NUM 20

main(){
	//Defini��o de Vari�veis
	int i, vetor[NUM], n, vezes=0;
	
	//Entrada de Dados
	for(i=0; i<NUM; i++){
		printf("Digite o numero %d: ", i+1);
		scanf("%d", &vetor[i]);
	}
	printf("\nDigite um numero de sua escolha: ");
	scanf("%d", &n);
	
	//C�lculo para ver quantos vezes o n aparece nos Arrays
	for(i=0; i<NUM; i++){
		if(vetor[i]==n){
			vezes=vezes+1;
		}
	}
	
	//Sa�da de Dados
	printf("\nSeu numero apareceu %d vezes", vezes);
}
