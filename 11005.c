//#include <stdio.h>
//
//int main() {
//    int input;
//    int x;
//    char result[30]; // ��ȯ ����� ���� �迭
//    int idx = 0;
//
//    scanf("%d %d", &input, &x); // 10���� ��, ��ȯ�� ���� �Է�
//
//    // input�� 0���� Ŭ ������ �ݺ� (���� ��ȯ)
//    while (input > 0) {
//        int remainder = input % x; // ������ ���ϱ�
//
//        // ���ڰ� 10 �̻��̸� ����(A~Z)�� �ٲٱ�
//        if (remainder >= 10)
//            result[idx++] = 'A' + (remainder - 10);
//        else
//            result[idx++] = '0' + remainder;
//
//        input /= x; // ������ ���� �ݺ� �غ�
//    }
//
//    // ����� �������� ����Ǿ����Ƿ� ����� ���
//    for (int i = idx - 1; i >= 0; i--) {
//        printf("%c", result[i]);
//    }
//
//    printf("\n"); // ����
//
//    return 0;
//}