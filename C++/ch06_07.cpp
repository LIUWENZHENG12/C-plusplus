#include <iostream>

using namespace std;


//個陣列函數原形的宣告
void print_arr(int arr[][5],int,int);

int main(){
  //宣告並初始化二為成績陣列
  int score_arr[][5]={{78,69,83,90,75},{11,22,33,44,55}};
  print_arr(score_arr,2,5);

  return 0;
  }

//輸入二維陣列各元素的函數
void print_arr(int arr[][5],int r,int c)
{    //第一維可省略,其他維數的註標都必須清楚定義長度
  int i,j;
  
  for(int i=0;i<r;i++)
    {
    for(int j=0;j<c;j++)
      cout<<arr[i][j]<<" ";
    cout<<endl;
    } 
}

