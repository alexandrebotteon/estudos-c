main(){
	//Defini��o de Vari�veis
	int i, v[8], aux;
	
	//Defini��o dos Valores do Array
	v[1]=5;
	v[2]=1;
	v[3]=4;
	v[4]=2;
	v[5]=7;
	v[6]=8;
	v[7]=3;
	v[8]=6;
	
	//C�lculo
	for(i=8; i>=5; i--){
	aux = v[i];
	v[i] = v[8 - i + 1];
	v[8 - i + 1] = aux;
	}

	v[3] = v[1];
	v[v[3]] = v[v[2]];
	
	//Sa�da de Dados
	for(i=1; i<9; i++){
	printf("O vetor %d tem valor %d\n", i, v[i]);
	}
}
