#include <stdio.h>

int main(void)
{
	// 대문자의 아스키 코드는 모두 여섯번째 비트가 0이고 소문자의 경우에는 여섯 번째 비트가 모두 1
	// 알파벳이 아닌 경우에도 변형되는 특수기호들이 있겠지만 입력값을 알파벳만 받는 가정하에 작성
	char alph;
	char mask = 1<<5;

	printf("비트 연산자를 활용하여 대소문자를 구별하고  소문자 알파벳을 대문자 알파벳으로 바꾸는 코드를 만드시오\n");
	printf("알파벳을 입력하시오 = ");
	
	//int scanf(char const * const _Format, ...);
	//첫번째 인자로 입력받을 서식, 2번째 변수의 주소를 받음
	scanf("%c", &alph);
	
	//입력값과 마스크 값 중에 2진수 6번째 자리 즉 32의 값을 and연산하고, 이후 and 연산이 진행되었을 경우 마스크 값을 or연산을 하여 계산 
	if ((alph&mask)==32){
		printf("소문자 알파벳을 대문자로 변환하겠습니다.");
	    alph = alph^mask;
		printf("%c\n", alph); 
	}
    return 0;
}	



