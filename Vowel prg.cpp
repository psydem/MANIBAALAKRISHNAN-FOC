#include<stdio.h>
int main()
{
	char str[100];
	char *p;
	int vcount=0,ccount=0,d=0,i=0;
	printf("Enter any string:\n");
	gets(str);
	p=str;
	while(*p!='\0')
	{
		if (*p=='A' || *p=='E' || *p=='I' || *p=='O' || *p=='U' || *p=='a' || *p=='e' || *p=='i' || *p=='o' || *p=='u')
		vcount++;
		else 
		{
		ccount++;
		
	    }
		if(*p>='0'&&*p<='9')
	           {
			    d++;
			    
			   }
        p++;
	}
		printf("number of vowels in string :%d\n",vcount);
	printf("number of consonants in string :%d\n",ccount);
	printf("number of integer in string :%d\n",d);
	return 0;
}
