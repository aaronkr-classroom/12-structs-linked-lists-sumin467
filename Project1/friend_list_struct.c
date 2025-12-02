#include <stdio.h>

#define MAX_FRIENDS 5

typedef char NAME_TYPE[21];
typedef unsigned short int us;
typedef struct {
	us age;
	float height;
	float weight;
}Person;

int AddFriend(Person *p_friend) {
	if (count < MAX_FRIENDS) {
		printf("\n새 친구의 정보를 입력하세요\n");
		printf("이름: >>> ");
		scanf_s("%s", &p_friend -> name, sizeof();

		printf("나이: >>> ");
		scanf_s("%hu", p_age + count);

		printf("키: >>> ");
		scanf_s("%f", p_height + count);

		printf("몸무게: >>> ");
		scanf_s("%f", p_weight + count);

		printf("\n입력한 정보는 다음과 같습니다.\n");
		return 1;
	}
	else
	{
		printf("최대 인원을 초과하여 입력할 수 없다");
		printf("최대 %d명까지만 가능", MAX_FRIENDS);
		return 0;
	}
}
void ShowFriendList(Person *p_FRIENDS) {
	int i;
	if (count > 0) {
		printf("\n등록된 친구 목록\n");
		printf("=========================\n");
		for (int i = 0; i < count; i++) {
			printf("%-14s, %3d, %6.2f, %6.2f\n",
				p_FRIENDS -> name,
				p_FRIENDS->age,
				p_FRIENDS->height,
				p_FRIENDS->weight
			);
		}
		printf("=========================\n");
	}
	else {
		printf("\n등록된 찬구가 없음\n");
	}
}

int main(void) {
	NAME_TYPE name[MAX_FRIENDS];
	unsigned short int age[MAX_FRIENDS];
	float height[MAX_FRIENDS];
	float weight[MAX_FRIENDS];
	int count = 0, menu_num;

	while (1) {
		printf("\t [ 메인 메뉴 ]\n");
		printf("=========================\n");
		printf("1. 친구추가\n");
		printf("2. 친구 목록 보기\n");
		printf("3. 종료\n");
		printf("=========================\n");
		printf("번호 선택: >>> ");
		scanf_s("%d", &menu_num);

		if (menu_num == 3)break;
		switch (menu_num) {
		case 1:
			if (1 == AddFriend(name, age, height, weight, count)) {
				count++;
			}
			break;
		case 2:
			ShowFriendList(name, age, height, weight, count);
			break;
		default:
			printf("1~3 번호만 입력");
		}
	}
	return 0;
}