#include <stdio.h>
#include <stdlib.h>
int len;  //链表长度
/**结构体**/
struct student{
	char name[30];
	float number;
	struct student *pNext;
};
/**动态创建链表**/
struct student *create(){
	struct student *pHead=NULL;
	struct student *pNew,*pEnd;
	pNew=pEnd=(struct student*)malloc(sizeof(struct student));
	printf("名字 学号：");
	scanf("%s %f",&pNew->name,&pNew->number);
	while(pNew->number!=0){
		len++;
		if(len==1){
			pNew->pNext=NULL;
			pEnd=pNew;
			pHead=pNew;
		}
		else{
			pNew->pNext=NULL;
			pEnd->pNext=pNew;
			pEnd=pNew;
		}
		pNew=(struct student*)malloc(sizeof(struct student));
		scanf("%s %f",&pNew->name,&pNew->number);
	}
	free(pNew);
	return pHead;
}
/**插入头结点**/
struct student *join(struct student *pHead){
	struct student *pNew,*tep;
	pNew=(struct student*)malloc(sizeof(struct student));
	printf("输入新数据：");
	scanf("%s %f",&pNew->name,&pNew->number);
	pNew->pNext=pHead->pNext;
	pHead->pNext=pNew;
	len+=1;
	return pHead;
}
/**插入尾结点**/
struct student *endjoin(struct student *pHead){
	struct student *tep,*pNew;
	pNew=(struct student*)malloc(sizeof(struct student));
	tep=pHead;
	printf("输入新数据：");
	scanf("%s %f",&pNew->name,&pNew->number);
	pNew->pNext=NULL;
	while(tep->pNext!=NULL){
		tep=tep->pNext;
	}
	tep->pNext=pNew;
	len+=1;
	return pHead;
}
/**指定位置插入节点**/
struct student *leadjoin(struct student *pHead){
	int lead=2,lead_;
	struct student *pNew,*search,*before,*next,*p;
	pNew=(struct student*)malloc(sizeof(struct student));
	printf("输入新数据：");
	scanf("%s %f",&pNew->name,&pNew->number);
	printf("输入要加入的位置：");
	scanf("%d",&lead_);
	if(lead_>(len+1)){
		printf("找不到此位置\n\n");
		return pHead;
	}
	before=pHead;
	search=pHead->pNext;
	next=search->pNext;
	while(1){
		if(lead_==1){
			pNew->pNext=pHead;
			len++;
			return pNew;
		}
		if(len==(lead+1)){
			while(before->pNext!=NULL){
				before=before->pNext;
			}
			before->pNext=pNew;
			pNew->pNext=NULL;
			len++;
			return pHead;
		}
		if(lead==lead_){
			pNew->pNext=search;
			before->pNext=pNew;
			len++;
			return pHead;
		}
		lead+=1;
		before=before->pNext;
		search=search->pNext;
		next=next->pNext;
	}
}
/**指定位置删除节点**/
struct student *del(struct student *pHead){
	struct student *before,*next,*search;
	char data_name[30];
	float data_number;
	int lead,i=2;
	before=pHead;
	search=pHead->pNext;
	next=search->pNext;
	printf("输入位置：");
	scanf("%d",&lead);
	while(1){
		if(lead==1){
			len--;
			return search;
		}
		if(i==lead){
			before->pNext=next;
			free(search);
			break;
		}
		i++;
		before=before->pNext;
		search=search->pNext;
		next=next->pNext;
	}
	len--;
	return pHead;
}
/**遍历链表**/
void print(struct student *pHead){
	struct student *tep;
	int i=1;
	tep=pHead;
	printf("----------共%d个成员----------\n",len);
	while(tep!=NULL){
		printf("No.%d名字:%s\n",i,tep->name);
		printf("学号:%g\n\n",tep->number);
		i++;
		tep=tep->pNext;
	}
	printf("\n\n");
}
/**主函数**/
int main(){
	struct student *pHead;
	pHead=create();
	print(pHead);
	pHead=join(pHead);
	print(pHead);
	pHead=endjoin(pHead);
	print(pHead);
	pHead=leadjoin(pHead);
	print(pHead);
	pHead=del(pHead);
	print(pHead);
}
