/**2021.4.5**/
#include <stdio.h>
#include <math.h>
int main()
{
	printf("HOTE:In order to avoid flashing back when outputting the answer, this is a recycling program,If you want to exit, please click the red × in the upper right corner of this window(注：为了避免在输出答案时闪回，这是一个循环程序，如果要退出，请单击此窗口右上角的红色×号)\n\n"); 
	while(1)
	{
	float a,b,c,c2;
	printf("Enter right angle side a（输入直角边a）:");
	scanf("%g",&a);
	printf ("Enter right angle side b(输入直角边b):");
	scanf ("%g",&b);
	c2=(a*a)+(b*b);
	c=sqrt(c2);
	printf("Hypotenuse c（斜边c）:%g\n\n\n",c);
}

}
//kong-bai233
//空-白233 
//我使用的编译器为Dev-c++，运行正常
//My used by the author is Dev-c++, which runs normally
