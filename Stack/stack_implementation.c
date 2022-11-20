#include<stdio.h>
void push(int st[]);
void pop(int st[]);
void peek(int st[]);
void display(int st[]);
void isEmpty(int st[]);
int MAX=3;
int top=-1;
int st[MAX];
int main(){
   int ch;
  while(1){
      scanf("%d",&ch);
    switch(ch){
    case 1:{
      push(st);
      break;
    }
    case 2:{
      pop(st);
      break;
    }
    case 3:{
      peek(st);
      break;
    }
    case 4:{
      display(st);
      break;
    }
    case 5:{
      isEmpty(st);
      break;
    }
    case 6:{
      exit(0);
    }
  }
  }
}
void push(int st[]){
  if(top==MAX-1){
    printf("stack overflow\n");
    return;
  }
  int num;
  printf("enter the element to push to stack \n");
  scanf("%d",&num);
  top++;
  st[top]=num;
  printf("element %d pushed to stack \n",num);
  return;
};
void pop(int st[]){
  if(top==-1){
    printf("stack underflow\n");
    return;
  }
  int num=st[top];
  top--;
  printf("element %d popped from stack \n",num);
  return;
};
void peek(int st[]){
  if(top==-1){
    printf("stack is empty\n");
    return;
  }
  int num=st[top];
  printf("element %d is at top of stack \n",num);
  return;
};
void display(int st[]){
  if(top==-1){
    printf("stack is empty\n");
    return;
  }
  int num=top+1;
  printf("elements present in stack :\n");
  while(num--){
    printf("%d\n",st[num]);
  }
  return;
};
void isEmpty(int st[]){
  if(top==-1){
    printf("stack is empty\n");
    return;
  }
  if(top==MAX-1){
    printf("stack is filled up\n");
    return;
  }
  printf("stack can accomodate %d elements\n",((MAX-(top))-1));
  return;
};
