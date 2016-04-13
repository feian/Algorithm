<!DOCTYPE html>
<html>
	<head>
		<meta charset="utf-8">
		<title></title>
		<script>
		/*
			京东2016实习生编程题
			简单铺砖问题
			N*M地面，a*a砖。用多少块砖？
		*/
		
		var N,M,a,
			T = read_line(),
			//T = 2,
			i = 0,
			j = 0,
			k = 1,
			l = 1;
		/*var dataArr = [
			'6 6 4',
			'10 10 3'
		];*/ 

		i=0;
		while(i<T){
			dataArr[i] = read_line();
		}
			
		for(j=0; j<dataArr.length; j++){ //测试每一组数据
			var arr = dataArr[j].split(' ');
			N = arr[0];
			M = arr[1];
			a = arr[2];
			
			k = 1;
			while(a*k < N){
				k++;
			}
			l = 1;
			while(a*l < M){
				l++;
			}
			//console.log(k*l);
			print(k*l);
		}

		</script>
	</head>
	<body>
	</body>
</html>
