
#include <stdio.h>

#define year 2017
void main()
{
	char a[14];

	int m,n,k,i,year_data[10];
	int age,set_year;
	puts(" 주민 등록번호를 입력하세요ttt:");

	for(k=0;k<14;k++)
	{
		scanf("%c",&a[k]);
	}
	m=a[0]-48;
	n=a[1]-48;
	set_year=10*m+n;
	age=year-(1900+set_year);


	for(i=0;i<8;i++)
	{
			year_data[i]=a[i]-48;

	}

	//strcat(a, b);

	if (a[6]=='1'||a[6]=='3'||a[6]=='5' ){ //배열이 문자로 저장되므로 =='1'로 비교
		//printf("주민등록번호: %s",a);
		printf("주민등록번호: %d%d%d%d%d%d-%d@@@@@\n"
			   ,year_data[0],year_data[1],year_data[2]
			   ,year_data[3],year_data[4],year_data[5]
			   ,year_data[6]);

		printf("나이 :%d\n",age);
	    printf("성별 : 남 \n");


	}
	else if (a[6]=='2' ||a[6]=='4' ||a[6]=='6' ) {

		printf("나이이 :%d\n",age);
	    printf("성별 : 여 \n");
	}
	else {

		printf("잘못 입력 하셨습니다.");
	}

}
