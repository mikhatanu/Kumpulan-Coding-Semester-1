#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct antrian{
	unsigned long int value;
	struct antrian *next;
	struct antrian *prev;
}*head, *tail, *current, *temp;

void push(unsigned long int input){
	current=(struct antrian*)malloc(sizeof(struct antrian));
	current->next=current->prev=NULL;
	current->value=input;
	temp=head;
	if(head==NULL){
		head=tail=current;
	}else{
		if(current->value>temp->value){
			current->next=head;
			current->prev=NULL;
			head->prev=current;
			head=current;
		}else{
			while(current->value<temp->value){
				temp=temp->next;
				if(temp->next==NULL){
					break;
				}
			}if(temp==tail){
				current->prev=tail;
				current->next=NULL;
				tail->next=current;
				tail=current;
			}else{
				temp->prev->next=current;
				current->prev=temp->prev;
				current->next=temp;
				temp->prev=current;
			}
		
		}
	}
}

void pop(){
	if(head->next==NULL)
	{
		temp=head;
		free(temp);
		head=NULL;
	}
	else{
		temp=head;
		head=temp->next;
		free(temp);
		temp=NULL;
		head->prev=NULL;	
	}
}

int main(){
	char string[255];
	bool flag=true;
	unsigned long int input;
	while(flag!=false){
		scanf("%[^\n||^ ]", string);
		if(strcmp(string,"insert")==0){
			scanf("%lu",&input);
			push(input);
			continue;
		}else if(strcmp(string,"extract")==0){
			printf("%lu",head->value);
			pop();
			continue;
		}else if(strcmp(string,"end")==0){
			flag=false;
		}else{
			continue;
		}
	}

}
