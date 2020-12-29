#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//******** Declaration *********
	
	int i,nn,n,s=0,e,max,min,c=0;
	int coef;
	
	//********************************
	printf("***** PROGRAM *****\n");
	printf("Donner Combien d'etudiant: ");
	scanf("%d",&e);
	
	int T[e]; // Declaration de Tableau de e
	printf("Donner combien de Notes: ");
	scanf("%d",&nn);
	for(i=1;i<=nn;i++)
		{
			printf("\ncoefsion de note (%d) : ",i);
			scanf("%d",&coef);
		}
	while(c<e)
				{
					for(n=1;n<=e;n++){
					
					printf("\n********** Eleve %d :\n",n);
									c+=1;
					for(i=1;i<=nn;i++)
					
								{
									printf("\nNote %d : ",i);
									scanf("%d",&T[i]);
									s+=T[i];
									
								
								}}
								
					
				}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	getch();
	return 0;
}
