#include <stdio.h>
int main()
{
	char name[200];
	int length,i=0;
	printf("Enter the text  :");
	scanf("%[^\n]%*c",name);
	while(name[i]!='\0')
	{
		i++;
	}	
	length = i;
		if ((name[0]>'a')&&(name[0]<'z'))
		{
			name[0] = name[0]-32;
		}
		for (int j = 0; j < length; j++)
		{
			if(name[j]==' ')
			{
				if ((name[j+1]>'a')&&(name[j+1]<'z'))
				 {
				 	name[j+1] = name[j+1]-32;
				 } 
			}
		}
			printf("Now the above text become  :%s",name); 
}