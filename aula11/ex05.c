/*  Crie um programa onde o usuário informará até 20 valores e armazene em um vetor, crie outros dois vetores (par e impar), faça uma varredura no vetor original, apresente ao final:  

quantidade de pares: &nbsp;
quantidade de ímpares: &nbsp;
maior valor par:
menor valor par:
maior valor impar:
menor valor impar:
media dos pares:
media dos impares:
quantidade de pares acima da media dos pares:
quantidade de impares acima da media dos impares:  */

#include <stdio.h>

int main(){
	
	int v[20]={0}, par[20]={0}, impar[20]={0};
	int i=0, qtd_v=0, cont_par=0, cont_impar=0;
	int maior_par=0,menor_par=0,maior_impar=0,menor_impar=0;
	int soma_par=0, media_par=0,soma_impar=0, media_impar=0;
	int qtd_par_acima_med=0, qtd_impar_abaixo_med=0;
	char continuar;

	printf("Vetor\n");

	i=0;
	do{
		printf("Informe o %do valor: ",i+1);
		scanf("%d",&v[i]);
		i++;

		printf("Deseja continuar? (s/n)");
		scanf(" %c", &continuar);

	}while(continuar=='s' && i<20);

	qtd_v = i;

	for(i=0;i<qtd_v;i++){
		if(v[i]%2==0){
			par[cont_par] = v[i];
			cont_par++;
		}else{
			impar[cont_impar] = v[i];
			cont_impar++;
		}
	}

	if(cont_par>0){
		maior_par = par[0];
		menor_par = par[0];
		soma_par = 0;
		
		for(i=0;i<cont_par;i++){
			if(par[i]>maior_par){
				maior_par = par[i];
			}
			if(par[i]<menor_par){
				menor_par = par[i];
			}
			soma_par = soma_par + par[i];
		}		
		media_par = soma_par/cont_par;
	}

	if(cont_impar>0){
		soma_impar = 0;
		maior_impar = impar[0];
		menor_impar = impar[0];
		
		for(i=0;i<cont_impar;i++){
			if(impar[i]>maior_impar){
				maior_impar = impar[i];
			}
			if(impar[i]<menor_impar){
				menor_impar = impar[i];
			}
			soma_impar = soma_impar + impar[i];
		}
		media_impar = soma_impar/cont_impar;
	}
	
	
		
	qtd_par_acima_med=0;
	for(i=0;i<cont_par;i++){
		if(par[i]>media_par){
			qtd_par_acima_med++;	
		}
	}


	qtd_impar_abaixo_med=0;
	for(i=0;i<cont_impar;i++){
		if(impar[i]<media_impar){
			qtd_impar_abaixo_med++;	
		}
	}

	printf("quantidade de pares: %d\n",cont_par);
	printf("quantidade de impares: %d\n",cont_impar);
	printf("maior valor par: %d \n",maior_par);
	printf("menor valor par: %d\n", menor_par);
	printf("maior valor impar: %d \n",maior_impar);
	printf("menor valor impar: %d \n",menor_impar);
	printf("media dos pares: %d \n",media_par);
	printf("media dos impares: %d \n",media_impar);
	printf("quantidade de pares acima da media dos pares: %d\n",qtd_par_acima_med);
	printf("quantidade de impares abaixo da media dos impares: %d\n",qtd_impar_abaixo_med);

	return 0;
}