#define ALUNOS 20

main(){
	//Definição de Variáveis
	int nota[ALUNOS], i, acima=0;
	float media, soma;
	
	//Entrada de Dados
	for(i=0; i<ALUNOS; i++){
	printf("Insira a nota do aluno %d: ", i+1);
	scanf("%d", &nota[i]);
	printf("\n");
	soma=nota[i]+soma;
	}
	
	//Cálculo da Média
	media=soma/ALUNOS;
	
	//Alunos acima da Média
	for(i=0; i<ALUNOS; i++){
		if(nota[i]>media){
			acima=acima+1;
		}
	}
	
	//Saída de Dados
	printf("\nA media da sala eh: %.2f", media);
	printf("\nAlunos acima da media: %d", acima);
}
