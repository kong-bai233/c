#include<stdio.h>
#include<string.h>
int main(){
    while(1) {
            char ch[100],hc[100];
            int i,j,n;
            /*初始化数组*/
            for(i=0;i<100;i++){
                ch[i]=NULL;
                hc[i]=NULL;
            }
            scanf("%s",&ch);
            n=strlen(ch);
            /*反转输入的字符串*/
            for(i=0; i<n; i++) {
                hc[n-i-1]=ch[i];
            }
            /*判断反转后的字符串是否与原字符串相同*/
            if(strcmp(ch,hc)==0) {
               printf("%s，是回文字符串\n\n",ch);
             }
            if(strcmp(ch,hc)==1){
               printf("%s，不是回文字符串\n\n",ch);
            }
    }
}
