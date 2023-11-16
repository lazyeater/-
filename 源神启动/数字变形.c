
#include <stdio.h>
int weishu(x)
long x;
{int i;
for (i = 1; x >9; i++)
x = x /10;
return i;
}
int dandu(x)
long x;
{int y;
y = weishu(x);
if (x < 10)
	printf("%d\n", x);
else {
	dandu(x / 10);
	printf("%d\n", x % 10);
}
return 0;
}
int turn(x)
long x;
{while(x)
{
	printf("%d", x % 10);
	x /= 10;
}
return 0;
}
main()

{long x = 0; int y = 0;
	printf("请输入一个不多于五位数的正整数\n");
	scanf_s("%d", &x);

	if (x > 99999 || x < 1)
	{
		printf("捣乱的都拱");
		return 0;
	}
	else
	{
		printf("扣1求位数\n扣2数字单独输出\n扣3数字大逆转!\n");
		scanf_s("%d", &y);
		if (y == 1)
			printf("%d的位数是%d", x, weishu(x));
		else if (y == 2)
			dandu(x);
		else if (y == 3)
			turn(x);
		else
			printf("捣乱的都拱");
	}
	return 0;
}




