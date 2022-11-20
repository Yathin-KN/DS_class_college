#include <stdio.h>
const int MAX=10;
int palindrome(char str[],int n);
char st[MAX];
int top=-1;
int main(void) {
  char str[MAX];
  int len;
  printf("enter the number of characters in string \n");
  scanf("%d",&len);
  printf("enter the string \n");
  scanf("%s",str);
  for(int i=0;i<len;i++){
    top++;
    st[top]=str[i];
  }
  if(palindrome(str,len)){
    printf("entered string is palindrome \n");
  }else{
    printf("entered string is not palindrome\n");
  }
}
int palindrome(char str[],int n){
  for(int i=0;i<n;i++){
    if(str[i]!=st[top]){
      return 0;
    }
    top--;
  }
  return 1;
}