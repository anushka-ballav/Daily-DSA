#include<stdio.h>
#include<string.h>
//#include<stdlib.h>
/*char* revStr(char str[])
{
	char rev[20];
	int len=strlen(str)-1,i=0;
	while(i<len)
	{
        if (str[i] != ' ')
        rev[len--]=str[i];
        i++;
    }
    printf("%s",&rev);
    //int res=strcmp(str,rev);
    return rev;
}*/
int main()
{
	char str[100];
	char w[20];
	char rev[20];
	printf("Enter string: ");
	gets(str);
	char* word=strtok(str," ");
	printf("Palindrome words: \n");
	while(word!=NULL)
	{
		strcpy(w,word);		
		//int len=strlen(w)-1,i=0;
		//printf("%s",w);
		/*while(i<len)
		{
			//if (w[i] != ' ')
            rev[len--]=w[i];
	        i++;
 		}*/
		//printf("%s",rev);
		//if(isPalin(w)==0)
		char* revword=strrev(word);
		int res=strcmp(w,revword);
		//int res=strcmp(w,rev);
		//printf("%d",res);
		if(res==0)
		printf("%s ",w);
		word=strtok(NULL," ");
		/*printf( " %s\n",trim(word)); //printing each token
      	word = strtok(NULL, " ");*/
	}
	/*if(isPalin(str)==0)
	printf("Palindrome");
	else
	printf("Not");*/
	return 0;
}
