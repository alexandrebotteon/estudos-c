main(){
	int num, i;
    printf("Insira um numero: ");
    scanf("%d", &num);
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

