//#include<stdio.h>
//#include<stdlib.h>
//
//int main() {
//	char input[100000];
//	int n;
//	int sum = 0;
//	scanf("%s %d", input, &n);
//	for (int i = 0; input[i] != '\0'; i++) //문자열의 끝 (\0)이 나올 때까지 반복
//	{
//		if (input[i] >= 'A' && 'Z' >= input[i])
//			sum = sum * n + (input[i] - 'A' + 10);
//		else
//			sum = sum * n + (input[i] - '0');		
//	}
//	printf("%d", sum);
//	return 0;
//}