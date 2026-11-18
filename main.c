#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	
	printf("Nhap n vao day: ");
	scanf("%d", &n);

	switch(n > 0 || n < 1000)
	{
	    case 1:
	        printf("Hop le");
	        break;
	
	    default:
	        printf("Khong hop le");
	}


	return 0;
}
