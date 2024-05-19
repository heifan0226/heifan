#include<iostream>
#include<fstream>
using namespace std;
#define OK 1
#define ERROR 0
#define OVERFLOW -2
#define MAXSIZE 100
typedef int Status;
typedef int SElemType;
typedef struct{
 SElemType *base;
 SElemType *top;
 int stacksize;
}SqStack;
Status InitStack(SqStack &S){
 S.base = new SElemType[MAXSIZE];
 if(!S.base)
 exit(OVERFLOW);
 S.top = S.base;
 S.stacksize = MAXSIZE;
 return OK;
}
Status Push(SqStack &S, SElemType e){
 if(S.top - S.base == S.stacksize)
 return ERROR;
 *(S.top++)=e;
 return OK;
}
Status Pop(SqStack &S, SElemType &e){
if(S.base == S.top)
return ERROR;
e = *(--S.top);
return OK;
}
char GetTop(SqStack S){
 if(S.top != S.base)
 return *(S.top - 1);
}
int main(){
 ifstream in("input.txt");
 if(in.fail())
 {
  cout<<"the input.txt is not exist!";
  exit(1);
 }
 ofstream out("output.txt");
 int i,j,m,n,num;
 int **map;
 in>>m>>n;
 int mrow,mcol,crow,ccol;
 map=new int *[m+2];
 for(i=0;i<m+2;i++)
 map[i]=new int[n+2];
 for(i=0;i<m+2;i++)
 for(j=0;j<n+2;j++)
 map[i][j]=0;
 for(i=0;i<m+2;i++)
 {
  map[i][0]=1;
  map[i][n+1]=1;
 }
 for(j=0;j<n+2;j++)
 {
  map[0][j]=1;
  map[m+1][j]=1;
 }
 in>>mrow>>mcol>>crow>>ccol;
 in>>num;
 int col,row;
 for(i=0;i<num;i++)
 {
  in>>row>>col;
  map[row][col]=1;
 }
 SqStack s1,s2,s3,s4;
 int flag1,flag2,t;
 if(InitStack(s1)){
  flag1 = 1;
  cout<<"成功对栈进行初始化\n\n";
 }else
 cout<<"初始化栈失败\n\n";
  if(InitStack(s2)){
  flag2 = 1;
  cout<<"成功对栈进行初始化\n\n";
 }else
 cout<<"初始化栈失败\n\n";
  if(InitStack(s3)){
  flag1 = 1;
  cout<<"成功对栈进行初始化\n\n";
 }else
 cout<<"初始化栈失败\n\n";
  if(InitStack(s4)){
  flag1 = 1;
  cout<<"成功对栈进行初始化\n\n";
 }else
 cout<<"初始化栈失败\n\n";
InitStack(s1);InitStack(s2);InitStack(s3);InitStack(s4);

 i=mrow;j=mcol;
 Push(s1,i); Push(s2,j);
 map[mrow][mcol]=2;
 while(!(i==crow&&j==ccol))
 {
  t=map[i][j]+1;
  if(map[i][j+1]==0)
  {
   map[i][j+1]=t;
   Push(s1, i); Push(s2, j+1);
  }
   if(map[i][j-1]==0)
  {
   map[i][j-1]=t;
   Push(s1, i); Push(s2, j-1);
  }
   if(map[i-1][j]==0)
  {
   map[i-1][j]=t;
   Push(s1, i-1); Push(s2, j);
  }
   if(map[i+1][j]==0)
  {
   map[i+1][j]=t;
   Push(s1, i+1); Push(s2, j);
  }
  Pop(s1, i);Pop(s2, j);
 }
 for(i=0;i<m+2;i++)
 {
  for(j=0;j<n+2;j++)
  cout<<map[i][j]<<" ";
  cout<<endl;
 }
 i=crow;j=ccol;
 Push(s3, i); Push(s4, j);
 cout<<i<<" "<<j;
 while(!(i==mrow&&j==mcol))
 {
  t=map[i][j];
  if(map[i][j+1]==t-1)
  {
   Push(s3, i); Push(s4, j+1);
   j=j+1;
  }
    if(map[i][j-1]==t-1)
  {
   Push(s3, i); Push(s4, j-1);
   j=j-1;
  }
    if(map[i-1][j]==t-1)
  {
   Push(s3, i-1); Push(s4, j);
   i=i-1;
  }
    if(map[i+1][j]==t-1)
  {
   Push(s3, i+1); Push(s4, j);
   i=i+1;
  }
 }
 for(i=0;i<m+2;i++)
 {
  for(j=0;j<n+2;j++)
  out<<map[i][j]<<" ";
  out<<endl;
 }
 int t1,t2;
 while(Pop(s3,t1)){
  Pop(s4, t2);
  out<<t1<<" "<<t2<<endl;
 }
 delete[] map[0];
 delete[] map;
 return 0;
}
