#include <stdio.h>
#include <windows.h>
// ����һ�����������ڽ�������������ֵ
void swap(int *a, int *b) 
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

// ����һ�����������ڶ��ĸ���������ð������
void sort(int *a, int *b, int *c, int *d) 
{
  // �Ƚ����ڵ������������ǰһ�������ں�һ�������ͽ������ǵ�λ��
  // ������ÿһ��ѭ�����������ͻᱻ�ŵ����
  // �ظ�������̣�ֱ�����е������������
  if (*a > *b) swap(a, b);
  if (*b > *c) swap(b, c);
  if (*c > *d) swap(c, d);
  if (*a > *b) swap(a, b);
  if (*b > *c) swap(b, c);
  if (*a > *b) swap(a, b);
}

int main() 
{
  // �����ĸ���������
  int a, b, c, d;
  // �ӱ�׼�����ȡ�ĸ�����
  printf("�������ĸ�������\n");
  scanf("%d%d%d%d", &a, &b, &c, &d);
  // ����������
  sort(&a, &b, &c, &d);
  // ��������Ľ��
  printf("�����Ľ���ǣ�\n");
  printf("%d %d %d %d\n", a, b, c, d);
  // ����0��ʾ������������
  printf("���ֵΪ%d\n",d);
  // ������ֵ
  system("pause");
  return 0;
}
