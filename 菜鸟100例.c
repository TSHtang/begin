#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//题目一：有 1、2、3、4 四个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
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
	printf("一共能组成%d个", m);
	return 0;
}*/
//题目二：企业发放的奖金根据利润提成。
//
//利润(I)低于或等于10万元时，奖金可提10% ；
//利润高于10万元，低于20万元时，低于10万元的部分按10% 提成，高于10万元的部分，可提成7.5 % ；
//20万到40万之间时，高于20万元的部分，可提成5 % ；
//40万到60万之间时高于40万元的部分，可提成3 % ；
//60万到100万之间时，高于60万元的部分，可提成1.5 % ；
//高于100万元时，超过100万元的部分按1 % 提成。
//从键盘输入当月利润I，求应发放奖金总数？
/*int solution_2(lirun) {
	printf("请输入当月利润（单位：元）");
	scanf("%d", &lirun);
	if (lirun <= 100000) {
		printf("应发放奖金为%d", lirun / 10);
	}else if(lirun <= 200000) {
		printf("应发放奖金为%d", (lirun - 100000) * 75 / 1000+10000);
	}else if(lirun <= 400000) {
		printf("应发放奖金为%d", (lirun - 200000) * 5 / 100 + 17500);
	}else if(lirun <= 600000) {
		printf("应发放奖金为%d", (lirun - 400000) * 3 / 100 + 27500);
	}else if(lirun <= 1000000) {
		printf("应发放奖金为%d", (lirun - 600000) * 15 / 1000 + 33500);
	}
	else {
		printf("%d", (lirun - 1000000) / 100 + 39500);
	}
	return 0;

}*/
//题目三：一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
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
//题目四：输入某年某月某日，判断这一天是这一年的第几天？
/*int solution_4() {
	int nian,yue,ri;
	printf("请输入日期：_年_月_日");
	scanf("%d %d %d", &nian,&yue,&ri);
	if ((nian % 4 == 0 && nian % 100 != 0) || (nian % 400 == 0)) {
		switch (yue) {
		case 1:printf("是这一年的第%d天", ri);
			break;
		case 2:printf("是这一年的第%d天", ri+31);
			break;
		case 3:printf("是这一年的第%d天", ri+31+29);
			break;
		case 4:printf("是这一年的第%d天", ri+31+29+31);
			break;
		case 5:printf("是这一年的第%d天", ri+31+29+31+30);
			break;
		case 6:printf("是这一年的第%d天", ri+31+29+31+30+31);
			break;
		case 7:printf("是这一年的第%d天", ri+29+31*3+30*2);
			break;
		case 8:printf("是这一年的第%d天", ri+29+31*4+30*2);
			break;
		case 9:printf("是这一年的第%d天", ri + 29 + 31 * 5 + 30 * 2);
			break;
		case 10:printf("是这一年的第%d天", ri + 29 + 31 * 5 + 30 * 3);
			break;
		case 11:printf("是这一年的第%d天", ri + 29 + 31 * 6 + 30 * 3);
			break;
		case 12:printf("是这一年的第%d天", ri + 29 + 31 * 6 + 30 * 4);
			break;
		}
	}
	else {
		switch (yue) {
		case 1:printf("是这一年的第%d天", ri-1);
			break;
		case 2:printf("是这一年的第%d天", ri + 31-1);
			break;
		case 3:printf("是这一年的第%d天", ri + 31 + 29-1);
			break;
		case 4:printf("是这一年的第%d天", ri + 31 + 29 + 31-1);
			break;
		case 5:printf("是这一年的第%d天", ri + 31 + 29 + 31 + 30-1);
			break;
		case 6:printf("是这一年的第%d天", ri + 31 + 29 + 31 + 30 + 31-1);
			break;
		case 7:printf("是这一年的第%d天", ri + 29 + 31 * 3 + 30 * 2-1);
			break;
		case 8:printf("是这一年的第%d天", ri + 29 + 31 * 4 + 30 * 2-1);
			break;
		case 9:printf("是这一年的第%d天", ri + 29 + 31 * 5 + 30 * 2-1);
			break;
		case 10:printf("是这一年的第%d天", ri + 29 + 31 * 5 + 30 * 3-1);
			break;
		case 11:printf("是这一年的第%d天", ri + 29 + 31 * 6 + 30 * 3-1);
			break;
		case 12:printf("是这一年的第%d天", ri + 29 + 31 * 6 + 30 * 4-1);
			break;
		}
	}
	return 0;
}*/
//题目五：输入三个整数 x、y、z，请把这三个数由小到大输出。
/*int solution_5() {
	int x, y, z;
	int i = 0;
	printf("请输入三个整数");
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
//题目六：用* 号输出字母C的图案。
/*int solution_6() {
	printf(" ****\n");
	printf(" *\n");
	printf(" * \n");
	printf(" ****\n");
	return 0;
}*/
//题目七：输出特殊图案，请在c环境中运行，看一看，Very Beautiful!
/*int solution_7() {
	char a = 176, b = 219;
	printf("%c%c%c%c%c\n", b, a, a, a, b);
	printf("%c%c%c%c%c\n", a, b, a, b, a);
	printf("%c%c%c%c%c\n", a, a, b, a, a);
	printf("%c%c%c%c%c\n", a, b, a, b, a);
	printf("%c%c%c%c%c\n", b, a, a, a, b);
	return 0;
}*/
//题目八：输出 9 * 9 口诀。
/*int solution_8() {
	int i, j;
	for (i = 1; i < 10; i++) {
		printf("\n");
		for (j = i; j < 10; j++) {//(j=1;j<=i;j++)
			printf("%d*%d=%d ", i, j, i * j); //printf("%d*%d=%-3d", i, j, result); // -3d表示左对齐，占3位 
		}
	}
	return 0;
}*/
//题目九：要求输出国际象棋棋盘。
//题目十：打印楼梯，同时在楼梯上方打印两个笑脸。
//题目十一：古典问题（兔子生崽）：有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？（输出前40个月即可）
//题目十二：判断 101 到 200 之间的素数。
int solution_12() {

	return 0;
}
//题目十三：打印出所有的"水仙花数"，所谓"水仙花数"是指一个三位数，其各位数字立方和等于该数 本身。例如：153是一个"水仙花数"，因为153 = 1的三次方＋5的三次方＋3的三次方。
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
