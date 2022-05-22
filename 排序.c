#include <stdio.h>
int n;
/*排序函数*/
int sorted(float sum[n]) {
    float num; 
    int i,j;
    /*循环将数交换到sum前面*/
    for(i=0; i<n; i++) {
            for(j=i; j<n; j++) {
                        if(sum[i]>sum[j]) { //这里的排序方式为从小到大，如果想从大到小可将 大于号 改为 小于号 
                                   num=sum[i];                
                                   sum[i]=sum[j];                
                                   sum[j]=num;  
                          } 
          }  
    } 
  /*遍历排序后的一维数组sum*/
 for(i=0; i<n; i++) {            
    printf("sum[%d]=%g\n",i,sum[i]); 
 }
}
/*主函数*/
int main(){
    float sum[]={0};
    int i; 
    printf("要输入数的个数：");
    scanf("%d",&n);
    for(i=0; i<n; i++) { //输入n个数        
         scanf("%f",&sum[i]);
     } 
     printf("\n"); 
    sorted(sum);   //传递sum进入排序函数
  }
