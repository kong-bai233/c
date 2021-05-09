#include <stdio.h>
int main() 
{
	float password1,password2,a,b;
	printf("输入你的一级密码:");
	scanf("%f",&a);
	printf ("输入你的二级密码:");
	scanf("%f",&b);
	printf("登入中....\n");
	a:
	printf ("一级密码:");
	scanf("%f",&password1);
	if (password1==a){
		printf("二级密码:");
		scanf("%f",&password2);
	}else if (password1!=a){
		printf("密码错误");
		return 0;
	}
	           if (password2==b){
	           	printf("密码正确\n");
	           	return 0;
			   }else if (password2!=b){
			   	printf("密码错误\n请重新输入");
			   	goto a;
			   }
}
//kong-bai233
//空-白233
//编译器Dev-c++，运行一切正常
