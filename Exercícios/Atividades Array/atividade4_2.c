#define N 10

main(){
	//Definição de Variáveis
	int i, x, O[N], j, k, aux=0, val, menor;
	
	//Entrada de Dados
	printf("Insira o valor x: ");
	scanf("%d", &x);
	O[0]=x;
	
	for(i=0; i<N; i++){
		printf("Insira o valor x: ");
		scanf("%d", &x);
		O[i+1]=x;
		val=x;
		
		for(j=N; j>=0; j--){
			
			if(x>=O[j]){
				menor=j;
			}else{
				if()
			}
		}
	}
}
