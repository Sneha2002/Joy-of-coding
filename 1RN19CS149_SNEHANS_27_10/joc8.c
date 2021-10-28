#include<stdio.h>
#define size 5
typedef struct books{
	int book_id;
	char book_name[10];
	char book_author[20];
	float book_price;
}book;



void insert(book *s,int *top){

		if(*top==size-1){
			printf("Stack overflow");
			return;
		}
		else 
			(*top)++;
			printf("Enter book details:");
			scanf("%d%s%s%f",&(s[*top].book_id),(s[*top].book_name),(s[*top].book_author),&(s[*top].book_price));
			printf("Book inserted");
}

void display(book *s,int top){
	int i;
	if(top==-1){
		printf("NO books to display\n");
		return;
	}
	for(i=0;i<=top;i++)
	{
		printf("%d\n%s\n%s\n%f\n",s[i].book_id,s[i].book_name,s[i].book_author,s[i].book_price);
		
	}
}

void delete(book *s,int *top){
	if(*top==-1){
		printf("No books to display\n");
	}
	*(top--);
	printf("book deleted");
	
}
int main(){
	book s[size];
	int top=-1;
	int choice;
	for(;;){
		printf("1.Insert\n2.Remove\n3.Display");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice){
			case 1:insert(s,&top);
				   break;
			case 2:delete(s,&top);
				   break;
			case 3:display(s,top);
				   break;
		}
	}
	
}
