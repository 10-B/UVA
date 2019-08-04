#include <stdio.h>

int main(){
	int intentos, cantNumeros, numeros, i, casos = 1;
	int arr[50];
	scanf("%d",&intentos);
	while(intentos--){
		int saltoBajo = 0, saltoAlto = 0;
		scanf("%d",&cantNumeros);
		i = 0;
		while(i < cantNumeros){
			scanf("%d", &arr[i]);
			if(i > 0){
				if(arr[i] < arr[i - 1])
					saltoBajo++;
				if(arr[i] > arr[i - 1])
					saltoAlto++;
			}
			i++;
		}
		printf("Case %d: %d %d\n", casos++, saltoAlto, saltoBajo);
	}
}
	
