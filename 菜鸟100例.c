#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��Ŀһ���� 1��2��3��4 �ĸ����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�
/*int solution_1(void) {
	int i, j, k;
	int m = 0;
	for (i = 1; i < 5; i++) {
		for (j = 1; j < 5; j++) {
			for (k = 1; k < 5; k++) {
				if (i != j && i != k && j != k) {
					m+=1;
					printf("%d\n", i + 10 * j + 100 * k);
				}
			}
		}
	}
	printf("һ�������%d��", m);
	return 0;
}*/
//��Ŀ������ҵ���ŵĽ������������ɡ�
//
//����(I)���ڻ����10��Ԫʱ���������10% ��
//�������10��Ԫ������20��Ԫʱ������10��Ԫ�Ĳ��ְ�10% ��ɣ�����10��Ԫ�Ĳ��֣������7.5 % ��
//20��40��֮��ʱ������20��Ԫ�Ĳ��֣������5 % ��
//40��60��֮��ʱ����40��Ԫ�Ĳ��֣������3 % ��
//60��100��֮��ʱ������60��Ԫ�Ĳ��֣������1.5 % ��
//����100��Ԫʱ������100��Ԫ�Ĳ��ְ�1 % ��ɡ�
//�Ӽ������뵱������I����Ӧ���Ž���������
/*int solution_2(lirun) {
	printf("�����뵱�����󣨵�λ��Ԫ��");
	scanf("%d", &lirun);
	if (lirun <= 100000) {
		printf("Ӧ���Ž���Ϊ%d", lirun / 10);
	}else if(lirun <= 200000) {
		printf("Ӧ���Ž���Ϊ%d", (lirun - 100000) * 75 / 1000+10000);
	}else if(lirun <= 400000) {
		printf("Ӧ���Ž���Ϊ%d", (lirun - 200000) * 5 / 100 + 17500);
	}else if(lirun <= 600000) {
		printf("Ӧ���Ž���Ϊ%d", (lirun - 400000) * 3 / 100 + 27500);
	}else if(lirun <= 1000000) {
		printf("Ӧ���Ž���Ϊ%d", (lirun - 600000) * 15 / 1000 + 33500);
	}
	else {
		printf("%d", (lirun - 1000000) / 100 + 39500);
	}
	return 0;

}*/
//��Ŀ����һ��������������100����һ����ȫƽ�������ټ���168����һ����ȫƽ���������ʸ����Ƕ��٣�
/*int solution_3(void) {
	int  i, j, m, n, x;
    for (i = 1; i < 168 / 2 + 1; i++)
    {
        if (168 % i == 0)
        {
            j = 168 / i;
            if ( i > j && (i + j) % 2 == 0 && (i - j) % 2 == 0)
            {
                m = (i + j) / 2;
                n = (i - j) / 2;
                x = n * n - 100;
                printf ("%d + 100 = %d * %d\n", x, n, n);
                printf ("%d + 268 = %d * %d\n", x, m, m);
            }
        }
    }
    return 0;
}*/
//��Ŀ�ģ�����ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿
/*int solution_4() {
	int nian,yue,ri;
	printf("���������ڣ�_��_��_��");
	scanf("%d %d %d", &nian,&yue,&ri);
	if ((nian % 4 == 0 && nian % 100 != 0) || (nian % 400 == 0)) {
		switch (yue) {
		case 1:printf("����һ��ĵ�%d��", ri);
			break;
		case 2:printf("����һ��ĵ�%d��", ri+31);
			break;
		case 3:printf("����һ��ĵ�%d��", ri+31+29);
			break;
		case 4:printf("����һ��ĵ�%d��", ri+31+29+31);
			break;
		case 5:printf("����һ��ĵ�%d��", ri+31+29+31+30);
			break;
		case 6:printf("����һ��ĵ�%d��", ri+31+29+31+30+31);
			break;
		case 7:printf("����һ��ĵ�%d��", ri+29+31*3+30*2);
			break;
		case 8:printf("����һ��ĵ�%d��", ri+29+31*4+30*2);
			break;
		case 9:printf("����һ��ĵ�%d��", ri + 29 + 31 * 5 + 30 * 2);
			break;
		case 10:printf("����һ��ĵ�%d��", ri + 29 + 31 * 5 + 30 * 3);
			break;
		case 11:printf("����һ��ĵ�%d��", ri + 29 + 31 * 6 + 30 * 3);
			break;
		case 12:printf("����һ��ĵ�%d��", ri + 29 + 31 * 6 + 30 * 4);
			break;
		}
	}
	else {
		switch (yue) {
		case 1:printf("����һ��ĵ�%d��", ri-1);
			break;
		case 2:printf("����һ��ĵ�%d��", ri + 31-1);
			break;
		case 3:printf("����һ��ĵ�%d��", ri + 31 + 29-1);
			break;
		case 4:printf("����һ��ĵ�%d��", ri + 31 + 29 + 31-1);
			break;
		case 5:printf("����һ��ĵ�%d��", ri + 31 + 29 + 31 + 30-1);
			break;
		case 6:printf("����һ��ĵ�%d��", ri + 31 + 29 + 31 + 30 + 31-1);
			break;
		case 7:printf("����һ��ĵ�%d��", ri + 29 + 31 * 3 + 30 * 2-1);
			break;
		case 8:printf("����һ��ĵ�%d��", ri + 29 + 31 * 4 + 30 * 2-1);
			break;
		case 9:printf("����һ��ĵ�%d��", ri + 29 + 31 * 5 + 30 * 2-1);
			break;
		case 10:printf("����һ��ĵ�%d��", ri + 29 + 31 * 5 + 30 * 3-1);
			break;
		case 11:printf("����һ��ĵ�%d��", ri + 29 + 31 * 6 + 30 * 3-1);
			break;
		case 12:printf("����һ��ĵ�%d��", ri + 29 + 31 * 6 + 30 * 4-1);
			break;
		}
	}
	return 0;
}*/
//��Ŀ�壺������������ x��y��z���������������С���������
/*int solution_5() {
	int x, y, z;
	int i = 0;
	printf("��������������");
	scanf("%d %d %d",&x,&y,&z);
	if (x>y) {
		i = x; x = y; y = i;
	}
	if (x > z) {
		i = x; x = z; z = i;
	}
	if (y > z) {
		i = y; y = z; z = i;
	}
	printf("%d %d %d", x, y, z);
	return 0;
}*/
//��Ŀ������* �������ĸC��ͼ����
/*int solution_6() {
	printf(" ****\n");
	printf(" *\n");
	printf(" * \n");
	printf(" ****\n");
	return 0;
}*/
//��Ŀ�ߣ��������ͼ��������c���������У���һ����Very Beautiful!
/*int solution_7() {
	char a = 176, b = 219;
	printf("%c%c%c%c%c\n", b, a, a, a, b);
	printf("%c%c%c%c%c\n", a, b, a, b, a);
	printf("%c%c%c%c%c\n", a, a, b, a, a);
	printf("%c%c%c%c%c\n", a, b, a, b, a);
	printf("%c%c%c%c%c\n", b, a, a, a, b);
	return 0;
}*/
//��Ŀ�ˣ���� 9 * 9 �ھ���
/*int solution_8() {
	int i, j;
	for (i = 1; i < 10; i++) {
		printf("\n");
		for (j = i; j < 10; j++) {//(j=1;j<=i;j++)
			printf("%d*%d=%d ", i, j, i * j); //printf("%d*%d=%-3d", i, j, result); // -3d��ʾ����룬ռ3λ 
		}
	}
	return 0;
}*/
//��Ŀ�ţ�Ҫ����������������̡�
//��Ŀʮ����ӡ¥�ݣ�ͬʱ��¥���Ϸ���ӡ����Ц����
//��Ŀʮһ���ŵ����⣨�������̣�����һ�����ӣ��ӳ������3������ÿ���¶���һ�����ӣ�С���ӳ����������º�ÿ��������һ�����ӣ��������Ӷ���������ÿ���µ���������Ϊ���٣������ǰ40���¼��ɣ�
//��Ŀʮ�����ж� 101 �� 200 ֮���������
int solution_12() {

	return 0;
}
//��Ŀʮ������ӡ�����е�"ˮ�ɻ���"����ν"ˮ�ɻ���"��ָһ����λ�������λ���������͵��ڸ��� �������磺153��һ��"ˮ�ɻ���"����Ϊ153 = 1�����η���5�����η���3�����η���
/*int solution_13() {
	int i, j,k;
	for (i = 1; i <= 9; i++) {
		for (j = 0; j <= 9; j++) {
			for (k = 0; k <= 9; k++) {
				if ((i*i*i)+(j*j*j)+(k*k*k)==100*i+10*j+k) {
					printf("%d\n", 100 * i + 10 * j + k);
				}
			}
		}
	}
	return 0;
}*/

int main() {
	//solution_1();
	//solution_2();
	//solution_3();
	//solution_4();
	//solution_5();
	//solution_6();
	//solution_7();
	//solution_8();
	//solution_9();
	//solution_10();
	//solution_11();
	//solution_12();
	//solution_13();
	//solution_14();

	return 0;
}
