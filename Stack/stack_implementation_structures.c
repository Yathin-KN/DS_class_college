#include <stdio.h>
#include <stdlib.h>
struct Stack {
  int capacity;
  int *stack;
  int top;
};
void push(struct Stack *st);
void pop(struct Stack *st);
void peek(struct Stack *st);
void display(struct Stack *st);
void isEmpty(struct Stack *st);
struct Stack *createStack(int cap) {
  struct Stack *stack = (struct Stack *)(malloc(sizeof(struct Stack)));
  stack->capacity = cap;
  stack->top = -1;
  stack->stack = (int *)(malloc((stack->capacity) * sizeof(int)));
  return stack;
};
int main() {
  printf("enter\n");
  printf("1 - push element to stack \n");
  printf("2 - pop element from stack \n");
  printf("3 - peek topmost element of stack \n");
  printf("4 - diaplay all elements of stack \n");
  printf("5 - check status of stack \n");
  printf("6 - terminate the program \n\n");
  int cap;
  printf("enter capacity of stack to be created \n");
  scanf("%d", &cap);
  struct Stack *st = createStack(cap);
  if (st == NULL) {
    printf("sorry memory coudn't be allocated \n");
  } else {
    printf("stack created sucessfully \n");
  }
  printf("operatate on stack \n");
  int ch;
  while (1) {
    scanf("%d", &ch);
    switch (ch) {
    case 1: {
      push(st);
      break;
    }
    case 2: {
      pop(st);
      break;
    }
    case 3: {
      peek(st);
      break;
    }
    case 4: {
      display(st);
      break;
    }
    case 5: {
      isEmpty(st);
      break;
    }
    case 6: {
      printf("program terminated \n");
      exit(0);
    }
    default:{
      printf("entered number is not recongnized as an operation \n");
    }
    }
  }
}
void push(struct Stack *st) {
  if (st->top == (st->capacity) - 1) {
    printf("stack overflow\n");
    return;
  }
  int num;
  printf("enter the element to push to stack \n");
  scanf("%d", &num);
  st->top = st->top + 1;
  st->stack[st->top] = num;
  printf("element %d pushed to stack \n", num);
  return;
};
void pop(struct Stack *st) {
  if (st->top == -1) {
    printf("stack underflow\n");
    return;
  }
  int num = st->stack[st->top];
  st->top--;
  printf("element %d popped from stack \n", num);
  return;
};
void peek(struct Stack *st) {
  if (st->top == -1) {
    printf("stack is empty\n");
    return;
  }
  int num = st->stack[st->top];
  printf("element %d is at top of stack \n", num);
  return;
};
void display(struct Stack *st) {
  if (st->top == -1) {
    printf("stack is empty\n");
    return;
  }
  int num = st->top + 1;
  printf("elements present in stack :\n");
  while (num--) {
    printf("%d\n", st->stack[num]);
  }
  return;
};
void isEmpty(struct Stack *st) {
  if (st->top == -1) {
    printf("stack is empty\n");
    return;
  }
  if (st->top == st->capacity - 1) {
    printf("stack is filled up\n");
    return;
  }
  printf("stack can accomodate %d elements\n",
         ((st->capacity - (st->top)) - 1));
  return;
};
