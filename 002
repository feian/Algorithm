function toObject(arr){
　　var obj = {};
　　for(var i=0,j=arr.length; i<j; i++){
　　　　obj[arr[i]]=true;    //将数组元素值作为对象属性，属性值都是true
　　}
　　return obj;
}
function keys(obj){
　　var arr=[];
　　for(var attr in obj){
　　　　if(obj.hasOwnProperty(attr))
　　　　arr.push(attr);
　　}
　　return arr;
}
function uniq(newarr){
　　return keys(toObject(newarr));
}
