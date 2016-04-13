/*
	输入：2
		  6 6 3
		  10 10 3
	输出：4
		  9
*/

#include<iostream>
using namespace std;

int main(void){
	int T,N,M,a,j,k;
	
	cin >> T;
	int *arrN = new int[T]; 
	int *arrM = new int[T]; 
	int *arrA = new int[T]; 
	int i = 0;
	while(i<T){
		cin >> arrN[i] >> arrM[i] >> arrA[i];
		i++;	
	}
	
	i = 0;
	/*while(i<T){
		cout << arrN[i] << arrM[i] << arrA[i];	
		i++;
	}*/
	for(i=0;i<T;i++){
		j = 1;
		while(arrA[i]*j < arrN[i]){
			j++;
		}
		k = 1;
		while(arrA[i]*k < arrM[i]){
			k++;
		}
			cout << j*k << endl;
	}
	
	return 0;
} 
