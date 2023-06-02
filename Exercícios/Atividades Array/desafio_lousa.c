#define MAX 10

main(){
	int posicao, vetor[MAX], i, val, maior, maior_p;
	do{
		printf("Insira o numero de posicoes: ");
		scanf("%d", &posicao);
	}while(posicao<0);
	for(i=0; i<posicao; i++){
		do{
			printf("Insira o valor do array %d: ", i+1);
			scanf("%d", &val);
		}while(val<0);
		if(maior<val){
			maior=val;
			maior_p=i;
		}
	}
	printf("Maior valor: %d", maior);
	printf("\nPosicao: %d", maior_p);
}
