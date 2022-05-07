#include <cstdio>
#include <cstring>
//using namespace std;

int main()
{
	char str1[]="Copy string";
	char str2[11];
	char str3[]="Attach string";
	
	
	printf("strcat : %s \n", strcat(str3, str1));
	printf("strlen : %d \n", strlen(str1));
	strcpy(str2, str1); 
	printf("strcpy : %s \n", str2);
	
	if(strcmp(str1, str2)==0)
		printf("Same string. \n");
	else
		printf("Different string. \n");	
	return 0;
}
