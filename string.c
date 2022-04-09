
#include <stdio.h>
#include "string.h"
#include <stdlib.h>
int my_strlen(char *s){
	int i=0;
	while (s[i] !='\0'){
		i++;
	}
	
	return i;
}

int str2upper(char *s){
	if (s == NULL) return -1;
	int i=0;
	int flag = 0;
	while(s[i] !='\0'){
	if (s[i] >= 'a' && s[i] <= 'z'){
		s[i] = s[i] - 32;
		flag++;
		}
	i++;
	}
	return flag;
}

int str2lower(char *s){
		int i=0;
	int flag = 0;
	while(s[i] !='\0'){
	if (s[i] > 'A' && s[i] < 'Z'){
		s[i] = s[i] + 32;
		flag++;
		}
	i++;
	}
	return flag;
}

int str_strip_numbers(char *s){
	if ( s==NULL ) return -1;
	int count;
	int i=0;int j=0;
	for(i=0;i<my_strlen(s);i++){
		 if (!(s[i] >= '0'  && s[i] <= '9')){
			s[j]=s[i];
			j++;
		}
	}
	s[j]='\0';
	return my_strlen(s);
}
void my_strcpy(char *d,char *s){
	//int sizes = my_strlen(s);
//	int i=0;
//	while (s[i]!='\0'){
//		d[i] = s[i];
//		i++;
//	}
	for(int i=0; i<= my_strlen(s); i++){
		if(i==my_strlen(s)) {d[i] = '\0';}
		else  {d[i] = s[i];}
	}
}
int my_strcmp (char *s, char *d){
	int value = 0;
	int i = 0;

	while(s[i]!='\0'||d[i]!='\0'){
		if (s[i]!= d[i]) break; 
		i++;
	}
	if(s[i]<d[i]){
		return -(i+1);	
	}
	else if(s[i]>d[i]){
		return i+1;
	}else 
	return 0;
}
char * my_strdupl(char *s){
	int size = my_strlen(s);
	if (s == NULL) return NULL;
	char *b = (char *) malloc((size+1) * sizeof (char));
	int i;
	for(i=0; i<size; i++){
		b[i] = s[i];
	}
	b[i]='\0';
	//nhulon
	return b;
}
