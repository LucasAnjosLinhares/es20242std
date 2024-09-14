#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int n, r;
	srand(time(0));
	r = rand() % 100;
	do{
	    printf("%d",r);
	    printf("\nDigite seu chute: ");
	    scanf("%d",&n);
	    }while(n != r);
	printf("Voce acertou");
	return 0;
}
