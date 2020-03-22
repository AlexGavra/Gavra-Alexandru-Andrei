#include <stdio.h>
#include <stdlib.h>

int main(){
	int *aux;
	int a, b;
	aux = malloc(sizeof(int));
	printf("a= "); scanf("%d", &a);
	printf("b= "); scanf("%d", &b);	
	*aux = a;
	 a = b;
	 b = *aux;
	printf("a=%d\n", a);
	printf("b=%d\n", b);
	system("pause");
	return 0;
}