#include<stdio.h>

void swap(void* p1, void* p2, int len);

int main()
{
	int a = 100;
	int b = 200;
	swap(&a, &b, 4);
	printf("a=%d  b=%d", a, b);  

	return 0;
}

void swap(void* p1, void* p2, int len)//len�ǲ������˺���������ͨ���ԣ�
{
	//��void���͵�ָ��ת��Ϊchar����
	char* pc1 = p1;
	char* pc2 = p2;
	char temp = 0;
	//����ѭ��һ���ֽ�һ���ֽڵ�ת��
	for (int i = 0; i < len; i++)
	{
		temp = *pc1;
		*pc1 = *pc2;
		*pc2 = temp;
		pc1++;
		pc2++;
	}

}