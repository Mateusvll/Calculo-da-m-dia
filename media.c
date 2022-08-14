#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int mediaa(int a, int b,  int c){
	 printf("Digite o valor de a: ");
     scanf("%i", &a);
     printf("Digite o valor de b: ");
     scanf("%i", &b);
     printf("Digite o valor de c: ");
     scanf("%i", &c);
}

int mediab(){
	int media = (a+b+c)/3;
	return media;
}

int main() {
          
   // int total = impares + pares;       
	pid_t pid = fork ();
	if (pid < 0) {
		perror ("erro no fork");
		exit(1); 
	}  
	
	if (pid == 0) { // processo filho
		int media = mediaa();
		printf("os numeros escolhidos", a,b,c );
	}
	else { // processo pai
		int media = mediab(); 
		printf("media dos tres numeros: %d\n\n", media);
	}
    
   
   
}
