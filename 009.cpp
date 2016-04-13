/*
	铺砖问题：地面x*y，每块砖n*m，最少要多少块砖。 
	输入：x y n m
	输出：砖的块数 
*/

#include<iostream>
using namespace std;
int computeCount(float x, float y, float n, float m, bool horizontal){
	float temp, x2;//y2;
	int	i = 1, 
		j = 1, 
		sum = 0;
	//地面横长竖短 
	if(x<y){
		temp = x;
		x = y;
		y = temp;
	}
	if(horizontal){  //横铺  砖 横长竖短
		if(n<m){
			temp = n;
			n = m;
			m = temp;
		}
	} else{         //竖铺  砖 横短竖长 
		if(n>m){
			temp = n;
			n = m;
			m = temp;
		}
	} 
	//主体部分  
	while(n*i <= x){
		i++;
	}
	i--;
	while(m*j <= y){
		j++;
	}
	//j--;
	x2 = x-n*i;
	//y2 = y-m*j;
	
	//剩余部分 
	if(x2 > 0){	
		int k = 1;
		while(m*k < x2){
			k++;
		}
		//k--;
		if((n-x2) > m*k-x2){ //竖铺 
			int l = 1;
			while(n*l < y){
				l++;
			}
			//l--;
			sum += k*l;		
		} else {   //横铺 
			i++;
		} 
	}
	sum += i*j;
	return sum;
} 

int main(void){
	float x,y,n,m;
	cin >> x;
	cin >> y;
	cin >> n;
	cin >> m;
	
	int sum1 = computeCount(x, y, n, m, true),
		sum2 = computeCount(x, y, n, m, false);
	
	cout << (sum1 < sum2 ? sum1:sum2); 
	
	return 0;
} 
