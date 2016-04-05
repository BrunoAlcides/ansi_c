#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
  Function that must returns by reference to the pointer *type:
	  S - for a scanele triangle
	  I - for a isosceles triangle
	  E - for a equilateral triangle
*/
void triangleType(char *type,int x, int y, int z){
	if (x == y && y == z)
		*type = 'E';
	else if ((x == y && x != z) || (x == z && x != y) || (y == z && y != x))
		*type = 'I';
	else if (x != y && x != z && y != z) *type = 'S';
}

int main(){
	
	int x, y, z;
	char opt;
	char type_c;
	char type[20];
	char msg[255];
	
	strcpy(msg,"You need to type a value higher than 0 for all the sides\n\n");
	
	do {
		opt = '.';
		
		do {
			printf("Type the size of the 1st side of the triangle: ");
			scanf("%d",&x);
			if (x <= 0) puts(msg);
		} while (x <= 0);
		
		do {
			printf("Type the size of the 2st side of the triangle: ");
			scanf("%d",&y);
			if (y <= 0) puts(msg);
		} while (y <= 0);
		
		do {
			printf("Type the size of the 3rd side of the triangle: ");
			scanf("%d",&z);
			if (z <= 0) puts(msg);
		} while (z <= 0);
		
		if (x > 0 && y > 0 && z > 0){
		    triangleType(&type_c,x,y,z);
			switch (type_c){
				case 'E':
					strcpy(type,"Equilateral");
					break;
				case 'I':
					strcpy(type,"Isosceles");
					break;
				case 'S':
					strcpy(type,"Scalene");
					break;	
			}
			printf("The triangle (%d,%d,%d) is %s\n\n", x, y, z, type);	
		}
			
		while (opt != 'y' && opt != 'n'){
			printf("Do you want to test a new triangle? (y/n)\n");
			fflush(stdin);
			scanf("%c",&opt);
			printf("\n\n");
		}
	} while (opt == 'y');
	
}
