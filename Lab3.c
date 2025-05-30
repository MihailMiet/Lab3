//Задать массив целых двузначных чисел. 
// Создать массив из неповторяющихся чисел исходного массива, вывести его на экран, в результирующем массиве не должно быть повторов.
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(void) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int length=0, height=0, i=0, lcount=0, hcount=0, mem=0;
	int *matmem_l, **M;
	while (1) {
		lcount = 0, hcount = 0;
		printf("Enter height_length\n");
		scanf_s("%d %d", &height, &length);
		while (i <= length) { printf("- "); i++; }
		i = 0;
		matmem_l = malloc(sizeof(int) * length);
		M = calloc(height, matmem_l);
		while (hcount < height) {
			while (lcount < length) { 
				M[lcount][hcount] = rand() % 100;  
				lcount++; 
			}
			hcount++;
		}
		lcount = 0, hcount = 0;
		while (hcount < height) {
			while (lcount < length-1) {
				printf("%d ", M[hcount][lcount]);
				lcount++;
			}
			printf("%d \n", M[hcount][lcount + 1]);
			hcount++;
		}
		lcount = 0, hcount = 0;
		while (hcount < height) {
			while (lcount < length) {
				if (M[hcount][lcount] == M[hcount][lcount - 1]) { mem = lcount; length--; }
				if (lcount = mem) { continue; }
				else{ lcount++; }
			}
			hcount++;
		}
		lcount = 0, hcount = 0;
		while (hcount < height) {
			while (lcount < length) { 
				printf("%d ", M[hcount][lcount]);
				lcount++;
			}
			printf("%d \n", M[hcount][lcount+1]);
			hcount++;

		}
		free(M);
		free(matmem_l);
	}
	return 0;
}