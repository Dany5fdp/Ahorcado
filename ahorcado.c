#include <stdio.h>
#include <string.h>

int main(){
	char palabra[20] = "guadalups";
	char usuario[20] = "_________";
	int i;
	char letra;
	int error = 1;
	int total_errores = 0;
	
	while(total_errores < 3){
		printf("\nIndica una letra\n");
		scanf("%c", &letra);
		fflush(stdin);
			
		for(i=0;i<strlen(palabra); i++){
			if(letra == palabra[i]){
				if(usuario[i]==letra){
					printf("\nya existe\n");
					break;
				}else{
					usuario[i] = palabra[i];
					error = 0;
				}
			}	
		}
	
		if(error){
			total_errores++;
			printf("Llevas %d errores\n", total_errores);
		}else{
			error = 1;
		}
		printf("%s",usuario);
		if(strcmp(usuario,palabra)==0){
			printf("Usted gano un iphone\n");
			printf("Nahhh es show\n");
			break;
		}
	}
	
	return 0;
}
