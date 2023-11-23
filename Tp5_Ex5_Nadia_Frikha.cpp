//EX5:Ecrire un programme C permettant de saisir un mot et une phrase tous les deux non vides, de les convertir en majuscule, et d afficher si le mot existe ou non dans la phrase et si oui avec quel nombre d occurrences.

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char ch[10];
	char mot[5];
	int nb=0; //nombre d'occurence du mot dans ch
	char *existe; //l'adresse de l'occurence du mot dans ch
	
	// saisie d'une phrase non vide
	do{
		printf("saisir une phrase non vide");
		gets(ch);
	}while (strlen(ch)==0);
	
	//saisie d'un mot non vide
	do{
		printf("saisir un mot non vide");
		gets(mot);
	}while (strlen(mot)==0);
	
	// convertir en majuscule les lettres de ch et mot
	strupr(ch);
	strupr(mot);
	
	//chercher le nombre d'occurence du mot dans ch
	existe= strstr(ch,mot);
	while ( existe != NULL ){
		nb++;
		existe= strstr(existe+strlen(mot),mot);	
	}
	
	//affichage du resultat
	if (nb==0){
		printf("le mot %s n'existe pas dans %s",mot,ch);
	}
	else{
		printf("le mot %s existe %d fois dans %s",mot,nb,ch);
		
	}
	
	
	return 0;
}
