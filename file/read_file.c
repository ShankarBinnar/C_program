#include<stdio.h>
#include<error.h>

int main () {
   FILE *fp;
   char string[20];
   fp = fopen("file.txt", "r+");
   if(fp==NULL)
	{
		perror("file not opened.\n");
		return (-1);
	}
   	printf("shankar\n");
   fputs("This is c programming.", fp);
   fputs("This is a system programming language.", fp);
printf("file_close\n");
   fclose(fp);
   fp=fopen("file.txt","r+");

	if(fp==NULL)
	{
		perror("file not opened.\n");
		return (-1);
	}
	while(fgets(string,20,fp)!=NULL)
	{
		puts(string);
	}
	fclose(fp);
	printf("exiting");
	return 0;
}	
