#include<stdio.h>
#include<windows.h>
int main()
{
    int x,y;                      //op1=>operation: 定义int x,y
    printf("enter x:");           //op2=>operation: 输出"enter x:"
    scanf("%d",&x);               //op3=>operation: 从键盘读取x的值
    y=0;                          //op4=>operation: y=0
    if(x>=0);                     //cond1=>condition: x>=0?
      if(x>0) y=1;                //cond2=>condition: x>0?  //op5=>operation: y=1
    else y=-1;                    //op6=>operation: y=-1
    printf("x=%d,y=%d\n",x,y);    //op7=>operation: 输出"x=%d,y=%d\n",x,y
    system("pause");
    return 0;
}

//st->op1->op2->op3->op4->cond1
//cond1(yes)->cond2
//cond1(no)->op6->op7->e
//cond2(yes)->op5->op7->e
//cond2(no)->op7->e
