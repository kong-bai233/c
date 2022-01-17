#include<stdio.h>
 /*阶乘函数*/
int factorial(int n){
  /*结束递归的条件为n=1*/
    if(n==1){
    return n;  //返回值
            }
    else{
    return n*factorial(n-1);//进行递归
        }
}
 /*主函数*/
int main()
{
    while(1){  //设置死循环
    int n,result;
    scanf("%d",&n);//输入一个大于1的整数
    result=factorial(n);//向阶乘函数传参并让变量result等于返回值
    printf("%d!=%d\n\n",n,result);//输出结果
    }
}
