/*=========================================================

     1.5�` 

       �j��p��
  =========================================================*/
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int i, j, n, result ;
    
    cout << "Please input a positive integer N =>";
    cin >> n;                     /*Ū�J�Ʀr*/

	/* ��h�j�� */
	result = 0 ;
    for (i = 1 ; i < n ; i++) 
		result = result + 1; 
	cout << "\n\n ��h�j��:\n result = " << result << " ( = " << n << " - 1 ) \n ";

	/* ���h�j��, ����T�w����*/
	result = 0 ;
	for (i = 1; i <= n ; i ++) 
		for (j = 1 ; j < n ; j++) 	
			result = result + 1 ; 
	cout << "\n\n ���h�j��, ����T�w����:\n result = " << result << " ( = " << n << " * ( " << n << " - 1 )\n";

	/* ���h�j��, ���餣�T�w����*/
	result = 0 ;
	for (i = 1 ; i <= n ; i++) 
		for (j = i+1 ; j <= n ; j++) 	
			result = result + 1; 
	cout << "\n\n ���h�j��, ���餣�T�w����:\n result= " << result << " ( = " << n << " * ( " << n << " - 1 )\n";	
	
    //system("PAUSE");
	return EXIT_SUCCESS;
}
