#include <stdio.h>
#include <stdlib.h>

const int N=7;
const int size=10;

int main()
{
	printf("****************Solution 1\n");
	// Solution 1: Solution de trie
	srand(time(NULL));
	int t[N];
	int i,j;
	int indiceMin=0;
   for(i=0;i<N;i++){
		t[i]=rand()%10;
		printf("%d\t",t[i]);
	}
	printf("\n");
	for(i=0;i<N;i++){
			int H=t[i];
		for(j=i+1;j<N;j++){
			if(t[j]<t[indiceMin]) {
			indiceMin=j;
			}
		}
	t[i]=t[indiceMin];
		t[indiceMin]=H;

	}
	for(i=0;i<N;i++){
		printf("%d\t",t[i]);
	}
	printf("\n****************Solution 2\n");
	//Solution 2: Supprimer les nombres pairs et afficher les nombres impairs
	int k;
	int ta[size];
	int indice=0;
	for(k=0;k<size;k++){
		ta[k]=rand()%100;
		printf("%d\t",ta[k]);
	}
printf("\n");
	for(k=0;k<size;k++){
		if(ta[k]%2!=0){
			ta[indice]=ta[k];
			indice++;
		}
	}
	int max=indice;
for(k=0;k<max;k++){
		printf("%d\t",ta[k]);
}
	printf("\n****************Solution 3\n");

// Solution 3:Calculer size d'une chaine charactere
const char *chaine="Hamza",*ptr=chaine;
int leng=0;
 while(*ptr!='\0'){
	ptr++;
	leng++;
 }

 printf("Size de notre string = %d",leng);
    printf("\n****************Solution 4\n");

// Solution 4:Upper Case
char lachaine[]="Bonjour Tous Le monde";
upperCase(lachaine);
    printf("La nouvelle chaine de character : %s\n",lachaine);
    return 0;
}

void upperCase(char *lachaine){
	int segment= 'a'-'A';
while(*lachaine!='\0'){
	if(*lachaine>='a'&&*lachaine<='z'){
		*lachaine=*lachaine-segment;
	}
lachaine++;
}
}
