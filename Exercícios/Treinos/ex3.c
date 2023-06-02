main(){
	float nota1, nota2, media;
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
}
