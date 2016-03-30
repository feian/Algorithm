                var str = "banana",
                    suffixArr = [],
                    len = str.length,
                    maxStrIndex = -1, 
                    maxLen = 0,i,j;      
                    
                for (i=0; i<len; i++){    //生成后缀数组
                    suffixArr[i] = str.substring(i,len);
                    /*suffixArr[i] = "";  //不使用substring
                    for(j=i;j<i+len;j++){
                        suffixArr[i]+=str[j];
                    }*/
                }
                suffixArr.sort();         //按字母排序
                
                for (i=0; i<len-1; i++){  //比较相邻数组求最长子串
                    j=0;
                    while(suffixArr[i][j]==suffixArr[i+1][j])
                        j++;
                    if(j>maxLen){
                        maxStrIndex = i;
                        maxLen = j;
                    }    
                }
                console.log(suffixArr[maxStrIndex].substring(0,maxLen)); //最长重复子串ana
