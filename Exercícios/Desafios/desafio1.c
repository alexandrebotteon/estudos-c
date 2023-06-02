main(){
	int alt, bas1, bas2;
	printf("Eu sei desenhar retangulos :]\n\n");
	printf("Insira a altura: ");
	scanf("%d", &alt);
	printf("\nInsira a base: ");
	scanf("%d", &bas1);
	printf("\nObserve:\n\n");
	if (bas1>0 && alt>0){
		bas2=bas1;
		do{
			do{
				printf("#");
				bas1--;
			}while(bas1>0);
			printf("\n");
			alt--;
			bas1=bas2;
		}while(alt>0);
	}else{
		printf("Nao existe quadrado com base ou altura = 0");
	}
	
}
