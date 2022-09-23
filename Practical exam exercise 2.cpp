#include <stdio.h>
#include <string.h>
void uppercase(char s[]){
	for(int i=0;i<strlen(s);i++){
		if(s[i]>=97 && s[i]<=122){
			s[i]-=32; //s[i] = s[i] - 32;
		}
	}
}
int main(){
	char s[20];
	printf("Enter string: ");
	scanf("%s",s);
	uppercase(s);
	printf("Upper Case: %s\n",s);
}
