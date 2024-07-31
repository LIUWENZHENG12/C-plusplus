/*=========================================================

     1.5節 

       迴圈計數
  =========================================================*/
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int i, j, n, result ;
    
    cout << "Please input a positive integer N =>";
    cin >> n;                     /*讀入數字*/

	/* 單層迴圈 */
	result = 0 ;
    for (i = 1 ; i < n ; i++) 
		result = result + 1; 
	cout << "\n\n 單層迴圈:\n result = " << result << " ( = " << n << " - 1 ) \n ";

	/* 雙層迴圈, 內圈固定次數*/
	result = 0 ;
	for (i = 1; i <= n ; i ++) 
		for (j = 1 ; j < n ; j++) 	
			result = result + 1 ; 
	cout << "\n\n 雙層迴圈, 內圈固定次數:\n result = " << result << " ( = " << n << " * ( " << n << " - 1 )\n";

	/* 雙層迴圈, 內圈不固定次數*/
	result = 0 ;
	for (i = 1 ; i <= n ; i++) 
		for (j = i+1 ; j <= n ; j++) 	
			result = result + 1; 
	cout << "\n\n 雙層迴圈, 內圈不固定次數:\n result= " << result << " ( = " << n << " * ( " << n << " - 1 )\n";	
	
    //system("PAUSE");
	return EXIT_SUCCESS;
}
