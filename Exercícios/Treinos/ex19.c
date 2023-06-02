main(){
	int cat, cat2, num;
	printf("Insira o cateto do triangulo isosceles: ");
	scanf("%d", &num);
	for(cat2=1;cat2<=num;cat2++){
		for(cat=1;cat<=cat2;cat++){
			printf("#");
		}
		printf("\n");
	}
}
