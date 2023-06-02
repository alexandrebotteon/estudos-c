main(){
	float nota, soma, med, maior=0, menor=10;
	int i, j, turmas, alunos;
	printf("Insira o numero de turmas: ");
	scanf("%d", &turmas);
	for(j=1;j<=turmas;j++){
	printf("\nInsira o numero de alunos na classe %d: ", j);
	scanf("%d", &alunos);
	printf("\n");
	for(i=1;i<=alunos;i++){
		printf("Insira a nota do aluno %d: ", i);
		scanf("%f", &nota);
		soma=soma+nota;
		if(maior<nota){
			maior=nota;
		}else{
		}
		if(menor>nota){
			menor=nota;
		}else{
		}
	}
	printf("\nSoma das notas eh: %.2f", soma);
	med=soma/alunos;
	printf("\nMedia da classe eh: %.2f", med);
	printf("\n\nMaior nota da classe eh: %.2f", maior);
	printf("\nMenor nota da classe eh: %.2f", menor);
	printf("\n\n##########################################################################\n");
	}
}
