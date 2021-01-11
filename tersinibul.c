#include<stdio.h>
#include<string.h>


char ters(char isim[]){
	int i;	
	int size;
   size =strlen(isim);
	for(i=0;i<size;i++){
		printf("%c",isim[i]);
	}
	printf("\n");
	for(i=size-1; i>=0 ;i--){
		
		printf("%c",isim[i]);
}
}


int main(){
	
	char isim[]= "merhabalar nasilsiniz";
	
	ters(isim);
	
	
	return 0;
	
}
