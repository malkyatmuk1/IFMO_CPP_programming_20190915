//Дан массив чисел. Выведите все элементы массива, которые больше предыдущего элемента .
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//5
//1 5 2 4 3
//Sample Output:
//
//5 4

#include "t03_bigger.h"
#include <iostream>


using namespace std;

int t03_bigger() {
  int n,br=0;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];

  }
  for(int i=1;i<n;i++){
    if(arr[i]>arr[i-1])br++;
  }
  for(int i=1;i<n;i++)
  {
    if(arr[i]>arr[i-1]){cout<<arr[i];br--;if(br!=0)cout<<" ";}
  }
}