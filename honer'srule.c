#include<stdio.h>
char input[100]; //��ȯ�� ���ڸ� ���ڿ� ���·� �����ϴ� �迭 (�ִ� 99�ڸ�, �������� '\0')
int x;
long long honer(int x)
{
	long long sum = 0;

	for (int i = 0; input[i] != '\0'; i++) //// ���ڿ��� �� ���ھ� �˻�
	{
		if (input[i] >= 'A' && input[i] <= 'Z') //���ĺ��� ���
			sum = sum * x + (input[i] - 'A' + 10); //// 'A'���� 10, 'B'�� 11, ..., 'Z'�� 35
		else //// ����(0~9)�� ���
			sum = sum * x + (input[i] - '0'); //// '0'~'9'�� �״�� ���ڷ� ��ȯ
	}
	return sum;
	
	//else if (input[i] >= 'a' && input[i] <= 'z')
	//	sum = sum * x + (input[i] - 'a' + 10); // �ҹ��ڵ� ó��

}

int main()
{
	scanf("%s", input);//��ȯ�� ����
	scanf("%d", &x);//��������
	printf("result : %lld \n", honer(x));
	return 0;
}