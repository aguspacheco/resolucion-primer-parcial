#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
// definicion de macro para preguntar si el caracter en analisis es vocal 
#define IS_VOCAL(a) (a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='U' || a=='U' )
// definicion de funcion para preguntar si el caracter en analisis es vocal 
int isvocal(char a)
{
	return (a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='U' || a=='U');
}

// ejercicio de tipo parcial viejo.... 

int main(int argc, char *argv[]) 
{
	int i,j,k;	
	char *p;
	// recorrer cada palabra omitir nombre del programa
	for(i=1;i<argc;++i)
	{			
			// //version usada como puntero a char.
		/*
			 char *p=argv[i];
			 for(j=0;*(p+j);++j)
			 {
			    if(IS_VOCAL(*(p+j)))
			    {
			 	for(k=j;*(p+k)!='\0';++k)				  
			 		{
			 		  *(p+k)= *(p+k+1);  //corrimiento como [ version de comprobacion - 1 - ]
			 		}
			 		--j;
			    }
			 }
			 printf("%s ",p);*/
			
			// //version usando strtok para tokenizar por todas las vocales m ayus y minusc.
			/*
			 p = strtok(argv[i],"aeiouAEIOU");
			 while(p!=NULL)
			 {	
				printf("%s",p);							
			 	p = strtok(NULL,"aeiouAEIOU");
			 }
			 printf(" ");
			*/
			// ultima posibilidad incluir una variable temporal donde se va copiando lo que no se vocal, para mostrar luego.
			 char tmpaux[MAX];
			 for(j=0,k=0;j<strlen(argv[i]);++j)
			 if(!isvocal(argv[i][j]))
			 {
			 	tmpaux[k++]=argv[i][j];
			 }
			 tmpaux[k]='\0';
			 printf("%s ",tmpaux);
			
			
	}
	printf ("\n");
	system("pause");
	return 0;
}
