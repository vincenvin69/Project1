#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	int age0;
	int age1;
	int ecart;
	
	printf("Quel �ge avez-vous ?\n");
	scanf("%d", &age0);
	
	printf("Quel �ge a votre fr�re ?\n");
	scanf("%d", &age1);
	
	
	printf("Vous avez %f ann�es d'�cart.", fabs (age0-age1));
	
	if(age0<age1)
	{
		printf("Votre fr�re est plus grand que vous. LOL");
	}
	
	else if(age0>age1)
	{
		printf("Vous �tes un grand fr�re.");
	}
	
	else
	{
		printf("Vous �tes jumeau !");
	}
	
	return 0;
}

