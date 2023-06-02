main(){
	int lado, i;
	printf("Insira o lado do quadrado: ");
	scanf("%d", &lado);
	printf("\n");
	for(i=1;i<=lado*lado;i++){
		if(i%lado==0){
		printf("#");
		printf("\n");
		}else{
			printf("#");
		}
	}
}
