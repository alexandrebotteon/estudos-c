main(){
	//Defini��o de Vari�veis
	int n, i, aux=0;
	
	//Entrada de Dados
	printf("Insira a quantidade de numeros que voce deseja inserir: ");
	scanf("%d", &n);
	printf("\n");
	
	//Defini��o dos Arrays
	int v[n];
	
	//Defini��o dos valores
	for(i=0; i<n; i++){
		printf("Insira o valor %d: ", i);
		scanf("%d", &v[i]);
	}
	
	//Defini��o do valor final
	int val_final=v[n-1];
	
	//Troca dos valores
	for(i=n-1; i>=0; i--){
		aux=v[i];
		v[i]=v[i+1];
		v[i+1]=aux;
	}
	
	//Valor final para o come�o
	v[0]=val_final;
	
	//Saida de Dados
	for(i=0; i<n; i++){
		printf("\n%d", v[i]);
	}
}
