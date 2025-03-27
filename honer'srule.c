#include<stdio.h>
char input[100]; //변환할 숫자를 문자열 형태로 저장하는 배열 (최대 99자리, 마지막은 '\0')
int x;
long long honer(int x)
{
	long long sum = 0;

	for (int i = 0; input[i] != '\0'; i++) //// 문자열을 한 글자씩 검사
	{
		if (input[i] >= 'A' && input[i] <= 'Z') //알파벳일 경우
			sum = sum * x + (input[i] - 'A' + 10); //// 'A'부터 10, 'B'는 11, ..., 'Z'는 35
		else //// 숫자(0~9)일 경우
			sum = sum * x + (input[i] - '0'); //// '0'~'9'는 그대로 숫자로 변환
	}
	return sum;
	
	//else if (input[i] >= 'a' && input[i] <= 'z')
	//	sum = sum * x + (input[i] - 'a' + 10); // 소문자도 처리

}

int main()
{
	scanf("%s", input);//변환할 숫자
	scanf("%d", &x);//몇진법수
	printf("result : %lld \n", honer(x));
	return 0;
}