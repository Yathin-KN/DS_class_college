#include<stdio.h>
const int MAX = 10;
int queue[MAX];
void insert(int queue[]);
void remove_ele(int queue[]);
void display(int queue[]);
int rear=-1,front=-1;
int main(){
  printf("enter :\n");
  printf("1 - insert element into the rear of queue  \n");
  printf("2 - remove element from front of queue \n");
  printf("3 - display all elemnts present in queue  \n");
  printf("4 - terminate the program \n\n");
  printf("enter your choice after each operation \n");
  int ch;
  while(1){
    scanf("%d",&ch);
    switch(ch){
    case 1:{
      insert(queue);
      break;
    }
    case 2:{
      remove_ele(queue);
      break;
    }
    case 3:{
       display(queue);
       break;
    }
    case 4:{
       printf("program terminated \n");
       exit(0);
    }
  }
  }
  
}
void insert(int queue[]){
  if(rear==MAX-1){
    printf("queue is filled up \n");
    return;
  }
  printf("enter the element to insert into the queue rear: \n");
  int x;
  scanf("%d",&x);
  if(front==-1 && rear==-1){
    front++;
    rear++;
    queue[rear]=x;
    printf("element %d added to rear of the queue \n",queue[rear]);
  }else{
    rear++;
    queue[rear]=x;
    printf("element %d added to rear of the queue \n",queue[rear]);
  }

};
void remove_ele(int queue[]){
  if(front > rear || front==-1){
    printf("queue underflow \n");
    return;
  }
  int val=queue[front];
  printf("element %d removed from the queue \n",val);
  front++;
}
void display(int queue[]){
  if(front==-1 || front > rear){
    printf("queue is empty\n");
    return;
  }
  printf("elements of the queue are :\n");
  for(int i=front;i<=rear;i++){
    printf("%d ",queue[i]);
  }
  printf("\n");
}
