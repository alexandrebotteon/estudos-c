#define ALUNOS 20

main(){
	//Defini��o de Vari�veis
	int nota[ALUNOS], i, acima=0;
	float media, soma;
	
	//Entrada de Dados
	for(i=0; i<ALUNOS; i++){
	printf("Insira a nota do aluno %d: ", i+1);
	scanf("%d", &nota[i]);
	printf("\n");
	soma=nota[i]+soma;
	}
	
	//C�lculo da M�dia
	media=soma/ALUNOS;
	
	//Alunos acima da M�dia
	for(i=0; i<ALUNOS; i++){
		if(nota[i]>media){
			acima=acima+1;
		}
	}
	
	//Sa�da de Dados
	printf("\nA media da sala eh: %.2f", media);
	printf("\nAlunos acima da media: %d", acima);
}
