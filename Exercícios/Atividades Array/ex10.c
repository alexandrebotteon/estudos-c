main(){
	//Defini��o de Vari�veis
	int gab[15], i, alun, resp[15];
	
	//Entrada de Dados
	for(i=0; i<15; i++){
		printf("Insira o valor correto da questao %d do gabarito: ", i+1);
		scanf("%d", &gab[i]);
	}
	printf("\nInsira o numero de alunos: ");
	scanf("%d", &alun);
	printf("\n");
	
	//Defini��o de Vari�veis
	int j, certo;
	
	//Defini��o das Respostas dos Alunos
	for(i=0; i<alun; i++){
		certo=0;
		for(j=0; j<15; j++){
			printf("Digite a resposta da questao %d do aluno %d: ", i+1, j+1);
			scanf("%d", &resp[j]);
			if(resp[j]==gab[j]){
				certo=certo+1;
			}
		}
	//Sa�da de Dados
		printf("\nO aluno %d acertou %d questoes\n\n", i+1, certo);
	}
}
