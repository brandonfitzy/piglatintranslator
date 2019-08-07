/*Pig Latin Translator*/

#include<stdio.h>
#include <string.h>

main(){
	char word[]="Brandon";
/*	printf("What is the word you would like to translate? \n");  <----the goal is to submitt your own words (latter sentences)
	scanf("%s", word); */
	int i;
	int s=0;
	for (i=0; i<strlen(word); i++){
	    if (word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u'||word[i]=='y'){
	        break;
	    } else {
	        s++;
	    }
	}
	char firstchars[s];
	int k;
	for (k=0;k<s;k++){
	    firstchars[k]=word[k];
	}
	int lastindex=strlen(word)-1;
	char newword[strlen(word)];
	int j;
	for (j=0; j<=lastindex; j++) {
		if (j!=lastindex){
			newword[j]=word[j+s];
		} else {
			strcat(newword, firstchars);
			newword[strlen(word)]='a';

		}
	}
	printf("%s \n", newword);
	
return 0;

}
