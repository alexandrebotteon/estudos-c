main(){
	float nota, soma, med;
	int i, alunos;
	printf("Insira o numero de alunos na classe: ");
	scanf("%d", &alunos);
	printf("\n");
	for(i=1;i<=alunos;i++){
		printf("Insira a nota do aluno %d: ", i);
		scanf("%f", &nota);
		soma=soma+nota;
	}
	printf("\nSoma das notas eh: %.2f", soma);
	med=soma/alunos;
	printf("\nMedia da classe eh: %.2f", med);
}
