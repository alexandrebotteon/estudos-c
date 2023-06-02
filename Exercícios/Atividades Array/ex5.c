main(){
	//Definição de Variáveis
	int num, i, face[6];
	
	face[0]=0;
	face[1]=0;
	face[2]=0;
	face[3]=0;
	face[4]=0;
	face[5]=0;
	
	//Entrada de Dados
	printf("Insira a quantidade de jogadas: ");
	scanf("%d", &num);
	
	//Definição de Variáveis
	int vetor[num];
	
	for(i=0; i<num; i++){
		printf("Insira o valor da jogada %d: ", i+1);
		scanf("%d", &vetor[i]);
	}

	//Definição das faces
	for(i=0; i<num; i++){
		switch (vetor[i]){
			case 1:
			face[0]=face[0]+1;
			break;
			
			case 2:
			face[1]=face[1]+1;
			break;
			
			case 3:
			face[2]=face[2]+1;
			break;
			
			case 4:
			face[3]=face[3]+1;
			break;
			
			case 5:
			face[4]=face[4]+1;
			break;
			
			case 6:
			face[5]=face[5]+1;
			break;
			
			default:
			break;
		}
	}
	
	//Saída de Dados
	for(i=0; i<6; i++){	
		printf("\nO valor %d apareceu %d vezes", i+1, face[i]);
	}
}
