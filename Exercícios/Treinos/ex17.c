main(){
	int num, i;
	do{
    printf("Insira um numero: ");
    scanf("%d", &num);
    }while(num<10);
    for(i=1;i<=num;i++){
        if(i%2 == 1){
            printf("%d",i);
            printf("\t");
        }else{
        	printf("\t");
            printf("%d", i);
			printf("\n");			
        }
	}
}
