/* ch8_06.c 功能:計算相隔元素個數  */

#include<stdio.h>
#include<stdlib.h> 

int main()
{
	double array[8][15];
	double *p,*q;
	int blocksize,count;
	
	p=&array[2][6];
	q=&array[6][11];
	count=q-p;
	blocksize=count*sizeof(double);
	
	printf("p=%p\t q=p\n",p,q);
	printf("元素[2][6](含)~[6][10]之間共有%d個元素\n",count);
	printf("元素[2][6](含)~[6][10]之間記憶體區塊大小為");\
	printf("%d位元組\n",blocksize);
	/*system("pasue"); */
	
}
