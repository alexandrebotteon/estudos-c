main(){
	int i, num;
	do{
	printf("Insira um numero: ");
	scanf("%d", &num);
	}while(num<10 || num>100);
	for(i=3;i<=num;i=i+3){
	printf("%d ", i);
	}
}
