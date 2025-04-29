//#include <stdio.h>
//
//int main() {
//    int input;
//    int x;
//    char result[30]; // 변환 결과를 담을 배열
//    int idx = 0;
//
//    scanf("%d %d", &input, &x); // 10진수 수, 변환할 진법 입력
//
//    // input이 0보다 클 때까지 반복 (진법 변환)
//    while (input > 0) {
//        int remainder = input % x; // 나머지 구하기
//
//        // 숫자가 10 이상이면 문자(A~Z)로 바꾸기
//        if (remainder >= 10)
//            result[idx++] = 'A' + (remainder - 10);
//        else
//            result[idx++] = '0' + remainder;
//
//        input /= x; // 몫으로 다음 반복 준비
//    }
//
//    // 결과는 역순으로 저장되었으므로 뒤집어서 출력
//    for (int i = idx - 1; i >= 0; i--) {
//        printf("%c", result[i]);
//    }
//
//    printf("\n"); // 개행
//
//    return 0;
//}