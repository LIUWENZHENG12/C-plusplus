/*ch9 pointer.c */
#include<stdio.h>
#include<stdlib.h>
void func_call(void);

int main()
{
	int num=10;
	char ch1='A';
	char ch2='B';
	double value1 =3.14;
	double value2 =0.782;
	
		printf("In main() ...\n");
		printf("num =%d &num =% p\n", num ,&num);
		printf("num =%d &ch1 =% p\n", ch1 ,&ch1);
		printf("num =%d &ch2 =% p\n", ch2 ,&ch2);
		printf("value1 =%.2f &value1 =% p\n", value1 ,&value1);
		printf("value2 =%.2f &value2 =% p\n", value2 ,&value2);
		func_call();
		system("PAUSE");
		return 0;
}
void func_call(void)
{
	int num=10;
	char ch1='A';
	char ch2='B';
	double value1 =3.14;
	printf("\nIn func_call() ...\n ");
	printf("num =%d &num =% p\n", num ,&num);
	printf("num =%d &ch1 =% p\n", ch1 ,&ch1);
	printf("num =%d &ch2 =% p\n", ch2 ,&ch2);
	printf("value1 =%.2f &value1 =% p\n", value1 ,&value1);
}
