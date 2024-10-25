#include<stdio.h>
#include<stdlib.h>

struct stack
{
int cap;
int top;
int *elements;
};

struct stack * create(int capacity)
{
   struct stack * s=(struct stack *)malloc(sizeof(struct stack));
   s->cap=capacity;
   s->top=-1;
   s->elements=(int *)malloc(capacity*sizeof(int));
   return s;
}

int is_empty(struct stack *s)
{
if(s->cap-1==s->top)
 return 0;
else
 return 1;
}
int is_full(struct stack *s)
{
if((s->cap-1)==(s->top))
 return 1;
else
 return 0;
}

int to_elem(struct stack *s)
{
if(s->top==-1)
 return -1;
else
 return s->elements[s->top];
}

void pop(struct stack *s)
{
s->top--;
}


void push(struct stack *s,int num)
{
s->elements[++(s->top)]=num;
}

void disp(struct stack *s)
{
int t=s->top;
while(t>=0)
{
printf("%d  ",s->elements[t--]);
}
}
int main()
{
int n;
printf("Eneter capacity of stack");
scanf("%d",&n);
struct stack *s=create(n);
int ele=100;
while(ele!=0)
{
   if(is_empty(s))
   {
       printf("Enter next elements");
       scanf("%d",&ele);
       push(s,ele);
   }
else{
   printf("Stack is full\n");
   break;
}
 
}
printf("Elements in stack=\n");
disp(s);
printf("\ndo you want to delete elements from stacks\n");
scanf("%d",&ele);
while(ele!=0)
{
pop(s);
printf("do you want to delete elements from stacks\n");
   scanf("%d",&ele);
}
disp(s);
free(s->elements);
free(s);
return 0;
}



