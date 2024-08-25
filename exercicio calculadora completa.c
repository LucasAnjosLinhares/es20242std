#include <stdio.h>
#include <math.h>
double soma(double n1, double n2);
double sub(double n1, double n2);
double div(double n1, double n2);
double mult(double n1, double n2);
double med(double n1, double n2);
double porc(double n1, double n2);
void eq2s(double a, double b, double c);
int main(){/*
	printf("soma %.2f\n",soma(8,3));	
	printf("sub %.2f\n",sub(8,3));
	printf("div %.2f\n",div(8,3));
	printf("mult %.2f\n",mult(8,3));
	printf("med %.2f\n",med(8,3));	
	*/
	double valor1, valor2, valor3;
	char op;
	printf("Escolha uma operacao: \n\n");
	printf("1 - Adicao\n");
	printf("2 - Subtracao\n");
	printf("3 - Divisao\n");
	printf("4 - Multiplicacao\n");
	printf("5 - Calculo de media\n");
	printf("6 - Porcentagem\n");
	printf("7 - Equacao de segundo grau\n");
	printf("\nOperacao desejada: ");
	scanf("%c",&op);
	if (op !='7'){
	printf("\nDigite o primeiro numero: ");
    scanf("%lf",&valor1);
    printf("\nDigite o segundo valor: ");
	scanf("%lf",&valor2);
    }else{
    printf("\nDigite o valor de a: ");
    scanf("%lf",&valor1);
    printf("\nDigite o valor de b: ");
	scanf("%lf",&valor2);
	printf("\nDigite o valor de c: ");
	scanf("%lf",&valor3);    	
	}
	if(op =='1') printf("\nO resultado da soma e = %.2f",soma(valor1, valor2));
	else if(op == '2') printf("\nO resultado da subtracao e = %.2f",sub(valor1, valor2));
	else if(op == '3') printf("\nO resultado da divisao e = %.2f",div(valor1, valor2));
	else if(op == '4') printf("\nO resultado da multiplicacao e = %.2f",mult(valor1, valor2));
	else if(op == '5') printf("\nO resultado da media e = %.2f",med(valor1, valor2));
	else if(op == '6') printf("\nO resultado da porcentagem e = %.2f",porc(valor1, valor2));
	else if(op == '7') eq2s(valor1, valor2, valor3);
	else{
		printf("Operacao invalida");
	}
	return 0;
}
void eq2s(double a, double b, double c){

 //double delta = sub(mult(b,b)),mult(mult(4,a),c); 
 double delta = mult(b,b) - mult(mult(4,a),c);
 double x1 = (-b + (sqrt(mult(b,b) - mult(mult(4,a),c)))) / (2*a);
 double x2 = (-b - (sqrt(mult(b,b) - mult(mult(4,a),c)))) / (2*a);
 printf("\nO valor de X1 e = %.2f",x1);
 printf("\nO valor de X2 e = %.2f",x2);
}
double med(double n1, double n2){
	return div(soma(n1,n2),2);
}
double soma(double n1, double n2){
	return n1 + n2;
}
double sub(double n1, double n2){
	return n1 - n2;
}double div(double n1, double n2){
	return n1 / n2;
}double mult(double n1, double n2){
	return n1 * n2;
}double porc(double n1, double n2){
	return div(mult( n1, n2),100);
}
