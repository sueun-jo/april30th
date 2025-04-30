/* fflush.c */

//#include <stdio.h>
//#include <stdlib.h>
//
//void ClearLineFromReadBuffer(void) {
//	while (getchar() != '\n');
//}
//int main(void) {
//
//	char perID[7]; // 6+null까지 7자리
//	char name[10];
//
//	fputs("주민번호 앞 6자리를 입력하세요: ", stdout);
//	fgets(perID, sizeof(perID), stdin); //엔터키 포함해서 7문자 입력됨, 끝자리 \n은 8번째로 입력버퍼에 남아있음
//
//	ClearLineFromReadBuffer(); //입력버퍼 비우기
//
//	fputs("이름 입력: ", stdout);
//	fgets(name, sizeof(name), stdin); //fgets는 \n만나면 바로 출력하게 됨, 남아있는 \n만 읽음
//
//	printf("주민번호: %s \n", perID);
//	printf("이름: %s \n", name);
//
//
//	return 0;
//}