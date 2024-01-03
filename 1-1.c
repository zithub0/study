#include <stdio.h>

void main(void)
{
	char data[]= "print";
	char getdata[10];
	FILE *fp;
	
	// int printf(const char* format, …)
	// 오류 발생시 아래 함수들과 마찬가지로 음수를 반환
	// %[flags][width][.precision][length]지정자 여기서 지정자는 정수 d, 캐릭터 타임 c를 의미
	printf("%sf\n",data);
	
	//int sprintf ( char * str, const char * format, ... );
	//첫번째 인자는 결과값이 저장되는 곳, 그 이후 format형식은 printf와 같음 
	sprintf(getdata, "s%sf", data);
	printf("%s\n", getdata);
	
	//int snprintf(char *buf, size_t size, const char *format, ...);
	//sprintf랑 차이점은 포인터로 저장되는 버퍼, 그리고 사이즈 크기를 표시하게 되어 있음
	snprintf(getdata, sizeof(getdata), "sn%sf", data);
	printf("%s\n",getdata);



	//FILE* fopen(const char* filename, const char* mode);
	//첫번째 인자는 파일의 경로와 이름을 동시에 표현하고 두번째 인자는 파일의 접근 모드와 파일 입출력 모드를 표현
	//해당 파일을 쓰기 위해 작성하며, 해당 옵션은 이름의 파일이 존재했을 경우 기존 내용 삭제
	fp = fopen("test.txt", "wb");
	if (fp ==NULL) {
		printf("파일 읽기 실패\n");
		return ;
	}


	// int fprintf(FILE* file, const char* format, ...);
	// 처음 인자로 파일의 포인터를 입력받고, 그 다음에 저장할 데이터의 서식을 입력 받음
	
	fprintf(fp,"f%sf", data);
	fclose(fp);
	
}
