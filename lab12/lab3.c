#include <stdio.h>
#include <string.h>

int main(){
	
	int Vowels=0;
	int Consonants=0;
	int Digits=0;
	int WhiteSpaces=0;
	int i;
	
	char str1[30];
	
	gets(str1);
	
	for(i=0 ; i<30 ; i++) {
	
		if(str1[i]>='0' && str1[i]<='9') {
		
		Digits++;
	}
		else if(str1[i]=='a' || str1[i]== 'e'|| str1[i]=='i' || str1[i]== 'o' || str1[i]=='u' || str1[i]=='I'){
		
		Vowels++;}
		else if(str1[i]==' '){
		
		WhiteSpaces++;
	}
	
		else{
		
		Consonants++;
}
}
		
	printf("Digits:%d\t",Digits);
	printf("Vowels:%d\t",Vowels);	
	printf("Connsonants:%d\t",Consonants);	
	printf("Spaces:%d",WhiteSpaces);
	
	
	return 0;
}
