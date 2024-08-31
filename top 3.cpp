#include <stdio.h>
int main(){
int t1, t2, t3, troca, n;
printf("Digite um valor: ");
scanf("%d",&t1);
printf("Digite um valor: ");
scanf("%d",&t2);
if (t2 < t1){
	troca = t2;
	t2 = t1;
	t1 = troca;}
	printf("Digie um valor: ");
	scanf("%d",&t3);
	if(t3 < t1){
		troca = t3;
		t3 = t2;
		t2 = t1;
		t1 = troca;
		}else{
			if(t3 < t2){
				troca = t3;
				t3 = t2;
				t2 = troca;}
		}
		printf("Digite um valor: ");
		scanf("%d",&n);
		if(t3 < n){
			troca = t3;
			t1 = t2;
			t2 = troca;
			t3 = n;
			}else{
				if(t3 < t2){
				  troca = t3;
				  t3 = t2;
				  t2 = troca;}
			}
			printf("Digite um valor: ");
			scanf("%d",&n);
			if(t3 < n){
				troca = t3;
				t1 = t2;
				t2 = troca;
				t3 = n;
				}else{
					if(t3 < t2);
					troca = t3;
					t3 = t2;
					t2 = troca;}
				printf("Digite um valor: ");
				scanf("%d",&n);
				if(t3 < n){
					troca = t3;
					t1 = t2;
					t3 = n;
					}else{
						if(t3 < t2){
							troca = t3;
							t3 = t2;
							t2 = troca;}
					}
printf("O maior valor e: %d, %d, %d,",t1, t2, t3);
 
	return 0;
}
