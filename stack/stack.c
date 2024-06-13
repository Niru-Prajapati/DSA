#include<stdio.h>
int MAXSIZE=8;
int stack[8];
int top=-1;
int isFull(){
  if(top==MAXSIZE-1)
  return 1;
else 
  return 0;
}
int isEmpty(){
  if(top==-1)
  return 1;
  else
  return 0;
}
void push(int data){
  if(!isFull()){
    top=top+1;
    stack[top]=data;
      }else{
        printf("couldnot insert data,stack is full.\n");
      }
}
int pop(){
  int data;
  if(!isEmpty()){
    data=stack[top];
    top=top-1;
    return data;
  }else{
    printf("couldnot retrieve data,stack is empty.\n");
  }
}
int peek(){
  return stack[top];
}
void display(){
  int i;
  if(!isEmpty()){
    for(i=top;i>=0;i--)
    printf("%d",stack[i]);
    printf("\n");
      }else{
        printf("stack is empty.\n");
      }
}
void search(int element){
  printf("\n");
  for (int i=0;i<top;i++){
    if(stack[i]==element){
         printf("Element found at index %d \n", i);
         return;
      }
   }

   printf("Element not found \n");
}

int main() {
   // push items on to the stack
   push(3);
   push(5);
   push(9);
   push(1);
   push(12);
   push(15);
   push(12);
   push(15);
   // stack full at this point so displays stack full error
   push(15);

   printf("Element at top of the stack: %d\n", peek());
   printf("Elements: \n");

   // print stack data
   display();

   // remove element from stack
   printf("\nElement popped: %d\n", pop());
   printf("Element at top of the stack: %d\n", peek());
   printf("Elements: \n");

   // print stack data
   display();

   // search element in stack
   search(9);

   return 0;
}
