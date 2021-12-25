#include<stdio.h>

int main()
{
    printf("输入示例:\n 1+1\n输入0*0退出程序\n\n");
    while(1) {
        float a,b;
        char c;
        scanf("%f%c%f",&a,&c,&b);
        if(c=='+') {
            printf("%g\n\n",a+b);
        }
        if(c=='-') {
            printf("%g\n\n",a-b);
        }
        if(c=='*') {
            printf("%g\n\n",a*b);
        }
        if(c=='/') {
            printf("%g\n\n",a/b);
        }
        if(c=='!') {
            for(int i=a-1; i>0; i--) {
                a=a*i;
            }
            printf("%g\n\n",a);
        }
        if(a==0&&c=='*'&&b==0) {
            break;
        }
    }
    printf("程序已成功退出");
}
