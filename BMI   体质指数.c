/*2021.8.26*/
//BMI小于18.5是属偏瘦，BMI在18．5至24．9时属正常范围，BMI在25至30时属超重范围，BMI大于30为肥胖 ** BMI=体重÷身高 2
#include <stdio.h>
int main()
{
	while (1){
	float kg,m,bmi;
	printf("输入你的身高（m）：");
	scanf("%f",&m);
	printf("输入你的体重（kg）：");
	scanf("%f",&kg);
	bmi=kg/(m*m);
	printf("结果为%.1f（保留一位小数）,属于",bmi);
	if(bmi<18.5){
		printf("偏瘦\n\n\a\a");
	}
	if(bmi>=18.5&&bmi<=24.9){
		printf("正常\n\n\a\a");
	}
	if(bmi>=25&&bmi<30){
		printf("超重\n\n\a\a");
	}
	if(bmi>=30){
		printf("肥胖\n\n\a\a");
	}
}
	return 0;
 } 
//kong-bai233 and huanghaozi
//编译器：Dev-c++
