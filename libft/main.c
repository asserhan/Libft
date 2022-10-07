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
