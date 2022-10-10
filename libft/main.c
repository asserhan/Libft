//******************** Testing ****************//

//ft_isprint
int main ()
{
	printf("%d",ft_isprint('\t'));
	return (0);
}
//ft_memset
int main()
{
	char buffer[] = "abcdef";
	printf("%s\n",ft_memset(buffer+2, '&',3));	
	printf("%s\n",buffer);
	printf("%s\n",memset(buffer+2, '&',3));
	printf("%s\n",buffer);

	return (0);
}
//ft_bzero
int main()
{
	char buffer [5];
	ft_bzero(buffer,5);	
	printf("%s\n",buffer);
	bzero(buffer,5);
	printf("%s\n",buffer);

	return (0);

}
//ft_memcpy
int main()
 {
	 char src[10] = "hello";
	 //char dest[10]= "hello";
	 ft_memcpy(src+2,src ,3);
     printf("%s\n",src);
     memcpy(src+2,src,3);
    printf("%s",src);

     return(0);
 }
 //ft_memmove
 #include <stdio.h>
#include <string.h>
int main()
{
    char str[10] = "hello";
	//char s1[10] = "hello";
    printf("Original string :%s\n ", str);
      
    // when overlap happens then it just ignore it
    printf("memcpy overlap : %s\n ", memcpy(str + 2, str, 5));
	
    // when overlap it start from first position
    printf("memmove overlap : %s\n ", memmove(str + 2, str, 3));
	printf("memmove overlap : %s\n ", str);
  
    return 0;
}
//ft_memmove
int main()
{
	char str[10]="hello";
	char s[10]="hello";
	ft_memmove (str + 2,str , 3);
	printf ("%s\n",str);
	memmove(s + 2, s ,3);
	printf ("%s\n",s);
	return (0);	
}
int main()
{
	int i;
	int j;
	j=0;
	i=0;
	int tab[6] ={0,1,2,3,4};
	int tab2[6]={0,1,2,3,4};
	ft_memmove (tab + 2,tab , 3);
	
	while (i < 5)
	{
		printf ("%d\n",tab[i]);
		i++;

	}
	memmove(tab2 + 2, tab ,3);
	while (j < 5)
	{
		printf ("%d",tab2[j]);
		j++;

	}

	return (0);	
}
//strlcpy
int main ()
{
	char dst[15];
	const char  src[15] = "hello world";
	printf("%zu\n",ft_strlcpy(dst,src,15));
	printf("%s\n",dst);
	char dst1[15];
	const char  src1[15] = "hello world";
	printf("%zu\n",strlcpy(dst1,src1,15));
	printf("%s",dst1);	
}
//ft_strlcat
int main ()
{
	char dst [6]="hello";
	char src [6]="world";
	printf("%zu\n",ft_strlcat(dst,src,13));
	printf("%s\n",dst);
	char dst1 [6]="hello";
	char src2 [6]="world";
	printf("%zu\n",strlcat(dst1,src2,13));
	printf("%s",dst1);
}
//ft_toupper
int main ()
{
    printf("%c\n",ft_toupper('A'));
    printf("%c",toupper('A'));
    
}
//ft_strchr
int main ()
{
	const char str[]="NULL";
	const char str2[]="NULL";
	printf("%s\n",ft_strchr(str,'k'));
	printf("%s",strchr(str2,'k'));

}
//strrchr
int main ()
{
	const char str[]=NULL;
	const char str2[]=NULL;
	printf("%s\n",ft_strrchr(NULL,'L'));
	printf("%s",strrchr(NULL,'L'));

}
//strncmp
int main()
{
	char *s1 = NULL;
	char *s2 = NULL;
	printf("%d\n",ft_strncmp(s1,s2,6));
	printf("%d\n",strncmp(s1,s2,6));

}