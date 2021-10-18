#include<stdio.h>
#include<stdlib.h>
int main(void){
	printf("数据类型       申请内存大小\n");
	printf("---------------------------\n");
    printf("  int              %d\n",sizeof(int));
	printf("  char             %d\n",sizeof(char));
	printf("  short            %d\n",sizeof(short));
	printf("  float            %d\n",sizeof(float));
	printf("  long             %d\n",sizeof(long));
	printf("  long long        %d\n",sizeof(long long));
	printf("  double           %d\n",sizeof(double));
	printf("  long double      %d\n",sizeof(long double));
	printf("  void             %d\n",sizeof(void));
	system("pause");
	return 0;
}
