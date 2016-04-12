/*
   华为2016实习生一道编程题：求连续字母长度
	输入：ABBCC:+++-:CAA56
	输出：A1B2C3A2 
*/
#include<iostream>
#include <string>
#include <ctype.h>
using namespace std;
int main(void)
{
    string str,newStr;
	char countStr[10]; 
	cout<<"请输入一个字符串"<<endl;
    cin >> str;
    int len = str.size();
    int i =  0, 
		j, 
		count;
    while(i<len){
    	if(isalpha(str[i])){     //判读字符 
    	/*if(str[i]>='a' && str[i]<='z' ||
			str[i]>='A' && str[i]<='Z'){*/
    		count = 1;
	    	j = i;
	    	newStr += str[i++];
	    	while(str[j] == str[i]){
	    		count++;
	    		i++;
			}
			sprintf(countStr, "%d", count); //int转*char 
			newStr += countStr;	
		}else {
			i++;
		}
	}
    cout<<"输出： "<<newStr<<endl;
    return 0;
}
