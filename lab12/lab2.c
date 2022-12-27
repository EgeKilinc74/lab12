#include <stdio.h>

int main(){
	
	char str1[40];
	char str2[40];
	int i,a;
	int j=0;
	gets(str1);
	
	for(i=0 ; i<40 ;i++){
		if(str1[i]>='a' && str1[i]<='z' || str1[i]>='A' && str1[i]<='Z'){
		
		str2[j]=str1[i];
		j++;
		
	}	
}
	
	puts(str2);
	
	
	
	
	
	
	
	return 0;
}
