#include <stdio.h>
int main(){
	float peso, altura, imc;
	printf("Digite seu peso: ");
	scanf("%f",&peso);
	printf("Digite sua altura: ");
	scanf("%f",&altura);
	imc = peso/(altura*altura);
	if(imc < 16.9){
		printf("Seu imc e: %.2f, esta muito abaixo do peso",imc);
	}else{
		if(imc >= 17 && imc <= 18.4){
			printf("Seu imc e: %.2f, esta abaixo do peso",imc);
		}else{
			if(imc >= 18.5 && imc <= 24.9){
				printf("Seu imc e: %.2f, seu peso esta normal",imc);
			}else{
				if(imc >= 25 && imc <= 29.9){
					printf("Seu imc e: %.2f, esta acima do peso",imc);
			}else{
				if(imc >= 30 && imc <= 34.9){
					printf("Seu imc e: %.2f, esta com obesidade grau 1",imc);
			}else{
				if(imc >= 35 && imc <= 40){
					printf("Seu imc e: %.2f, esta com obesidade grau 2",imc);
			}else{
				if(imc > 40){
					printf("Seu imc e: %.2f, esta com obesidade grau 3",imc);
			}

	return 0;
}
}
}
}
}
}
}
