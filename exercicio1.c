#include <stdio.h>
#include <math.h>
double soma(double n1, double n2);
double sub(double n1, double n2);
double div(double n1, double n2);
double mult(double n1, double n2);
double med(double n1, double n2);
//porcentagem
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
	printf("Escolha uma operacao: \n");
	printf("+ adição\n");
	printf("- subtracao\n");
	printf("/ divisao\n");
	printf("* multiplicacao\n");
	printf("m media\n");
	printf("s segundo grau\n");
	scanf("%c",&op);
	if (op !='s'){
	printf("Digite o primeiro numero: ");
    scanf("%lf",&valor1);
    printf("Digite o segundo valor: ");
	scanf("%lf",&valor2);
    }else{
    printf("Digite o valor de a: ");
    scanf("%lf",&valor1);
    printf("Digite o valor de b: ");
	scanf("%lf",&valor2);
	printf("Digite o valor de c: ");
	scanf("%lf",&valor3);    	
	}
	if(op =='+') printf("soma = %.2f",soma(valor1, valor2));
	else if(op == '-') printf("sub = %.2f",sub(valor1, valor2));
	else if(op == '/') printf("div = %.2f",div(valor1, valor2));
	else if(op == '*') printf("mult = %.2f",mult(valor1, valor2));
	else if(op == 'm') printf("med = %.2f",med(valor1, valor2));
	else if(op == 's') eq2s(valor1, valor2, valor3);
	else{
		printf("Operacao invalida");
	}
	return 0;
}
void eq2s(double a, double b, double c){

 //double delta = sub(mult(b,b)),mult(mult(4,a),c); 
 double delta = mult(b,b) - mult(mult(4,a),c);
 printf("Delta = %.2f",delta);
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
}
