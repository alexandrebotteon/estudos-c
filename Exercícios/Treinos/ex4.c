main(){
	float nota1, nota2, media, op;
	do{
		do{
		printf("Digite a primeira nota: ");
		scanf("%f", &nota1);
		printf ("\n");
		printf("Digite a segunda nota: ");
		scanf("%f", &nota2);
		printf ("\n");
		} while((nota1<0) || (nota1>10) || (nota2<0) || (nota2>10));
		media=(nota1+nota2)/2;
		printf("A media eh %f", media);
		printf ("\n\n");	
		printf("Quer calcular novamente? | Sim = 1 \/ Nao = Outro ");
		scanf ("%f", &op);
		printf ("\n");
	} while (op==1);
	printf("Ok, ate a proxima");
}
