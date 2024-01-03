#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS


//argc는 메인 함숭 전달되는 정보의 갯수, argv는 메인함수로 전달되는 배열로 실질적인 정보
//argc는 처음 자신의 시작 주소와 나머지 실행할때 입력한 정보를 띄어쓰기로 구분하여 argument 정보를 입력받음
//해당 코드는 자신을 포함하여 4개의 정보가 있어서 동작(ex.3 + 2)

int main(int argc, char *argv[]){
	float num1, num2, result;
	char op;
	if (argc!=4){
		printf("wrong value\n");
		exit(1);
	}
	

	//해당 계산을 소수점 계산을 위해 사용하기 위해 다음과 같이 atof함수를 이용하여, 숫자를 실수형으로 변환
	//argv를 op 변수를 이용해 char로 수정, switch는 int형 정수와 char형 변수만 가능

	num1=atof(argv[1]);
	num2=atof(argv[3]);
	op=argv[2][0];

	//이후에 switch 문을 이용하여 두 변수의 사칙연산 값을 계산후 출력
	//%연산 같은 경우는 예외 실수로 동작하지 않아 int로 연산
	switch(op) {
		case '+': result=num1+num2;
            break;

        case '-': result=num1-num2;
            break;

        case '*': result=num1*num2;
            break;

        case '/': result=num1/num2;
            break;

        case '%': result=(int)num1%(int)num2;
            break;

        default:
            printf("wrong operation.\n");
    }
함
	printf("%f\n",result);
	

}

