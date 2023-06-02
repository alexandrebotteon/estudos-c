main(){
	float num, i=1;
	printf ("Escreva um numero: ");
	scanf("%f", &num);
	while(i<=10){
	printf ("%.2f x %.2f = %.2f", i, num, i*num);
	printf ("\n");
	i++;
	}
}
