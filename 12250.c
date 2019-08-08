#include <stdio.h>
#include <string.h>

int main(){
	char * arrtotal[] = []
	char arr[14];
	char es[5] = "HOLA";
	char en[6] = "HELLO";
	char al[6] = "HALLO";
	char it[5] = "CIAO";
	char fr[8] = "BONJOUR";
	char rs[13] = "ZDRAVSTVUJTE";
	char arr2[] = "#";	
	int casos = 1;
	while(scanf("%s", arr) && strcmp(arr, arr2) !=0){
		if(strcmp(arr, es) == 0){
			printf("Case %d: SPANISH\n", casos++);
		}
		else if(strcmp(arr, en) == 0){
			printf("Case %d: ENGLISH\n", casos++);
		}
		else if(strcmp(arr, al) == 0){
			printf("Case %d: GERMAN\n", casos++);
		}
		else if(strcmp(arr, it) == 0){
			printf("Case %d: ITALIAN\n", casos++);
		}
		else if(strcmp(arr, fr) == 0){
			printf("Case %d: FRENCH\n", casos++);
		}
		else if(strcmp(arr, rs) == 0){
			printf("Case %d: RUSSIAN\n", casos++);
		}
		else{
			printf("Case %d: UNKNOWN\n", casos++);
		}
	}
	return 0;
}