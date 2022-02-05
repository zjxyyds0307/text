#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
char r[] = {' ', 'F', 'L', 'A', 'M', 'E'};
char sa[6][50] = {"", "You\'re friend", "You\'re lovers", "You\'re affection", "You\'re Marry", "You\'re enemy"};

int fun(int x) {
	switch (x) {
		case 1:
			return 5;
			break;
		case 2:
			return 1;
			break;
		case 3:
			return 2;
			break;
		case 4:
			return 2;
			break;
		case 5:
			return 4;
			break;
		case 6:
			return 2;
			break;
		case 7:
			return 5;
			break;
		case 8:
			return 1;
			break;
		case 9:
			return 3;
			break;
		case 10:
			return 3;
			break;
		case 11:
			return 5;
			break;
		case 12:
			return 1;
			break;
		case 13:
			return 5;
			break;
		case 14:
			return 1;
			break;
		case 15:
			return 2;
			break;
		case 16:
			return 3;
			break;
		case 17:
			return 5;
			break;
		case 18:
			return 1;
			break;
		case 19:
			return 5;
			break;
		case 20:
			return 1;
			break;
		default:
			//TODO
			break;
	}
}

int main(int argc, char *argv[]) {

	char name1[30], name2[30];

	printf("input a name:");
	scanf("%s", name1);
	printf("input other name:");
	scanf("%s", name2);

	int n1 = strlen(name1), n2 = strlen(name2), n = n1 + n2;
	for (int i = 0; i < n1; i++) {
		for (int j = 0; j < n2; j++) {
			if (name1[i] == name2[j] && name2[j] != '*') {
				name1[i] = '*';
				name2[j] = '*';
				n -= 2;
			}
		}
	}

	printf("first name:%s \nother name:%s \nnum:%d\n", name1, name2, n);
	int la = fun(n);
	printf("the Final Result:%c\n", r[la]);
	printf("%s", sa[la]);
	return 0;
}
