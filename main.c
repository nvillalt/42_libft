/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvillalt <nvillalt@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:54:59 by nvillalt          #+#    #+#             */
/*   Updated: 2023/10/11 18:51:41 by nvillalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <fcntl.h>

char f(unsigned int n, char c)
{
	n = 0;
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

void	delete(void *content)
{
	free(content);
}

int	main()
{
	// bzero:
	/*
	char string[] = "Hola";
	char s[] = "Hola";
	size_t	n = 3;
	size_t i = 3;

	ft_bzero(string, n);
	bzero(s, i);
	printf("ft_bzero: %s\n", string);
	printf("bzero: %s\n", s);
	*/

	// calloc:
	
	char *s1 = ft_calloc(sizeof(char), 7);
	char *s2 = calloc(sizeof(char), 7);

	printf("ft_calloc: %s\n", s1);
	printf("calloc: %s\n", s2);
	

	// atoi:
	/*
	char	*n = "21474836488";

	printf("ft_atoi: %d\n", ft_atoi(n));
	printf("atoi: %d\n", atoi(n));
	*/

	//itoa:
	/*
	int	integer = -2147483648;

	printf("ft_itoa: %s\n", ft_itoa(integer));
	*/
	
	// memchr:
	/*
	const char str[] = "Hola Buenas";
	int c = ' ';
	char *ret;
	char *ret2;
	
	ret = ft_memchr(str, ch, ft_strlen(str));
	ret2 = memchr(str, ch, ft_strlen(str));
	
	printf("ft_memchr despues de |%c| es - |%s|\n", ch, ret);
	printf("memchr despues de |%c| es - |%s|\n", ch, ret2);
	*/

	// memcmp:
	/*
	const char s1[10] = "";
	const char s2[10] = "";

	printf("ft_memcmp: %d\n", ft_memcmp(s1, s2));
	printf("memcmp: %d\n", memcmp(s1, s2));
	*/

	// memcpy:
	/*
	const char src[] = "Hola";
	char dest[] = "Hey";
	char dest2[] = "Hey";
	size_t size = 4;

	ft_memcpy(dest, src, size);
	memcpy(dest2, src, size);
	printf("ft_memcpy: %s\n", dest);
	printf("memcpy: %s")
	*/

	// memmove:
	/*
	char	*s1 = "Hola";
	char	*s2 = "Hola";
	size_t	num = 0;

	printf("ft_memmove: %p\n", ft_memmove((void*)0, (void *)0, 0));
	printf("memmove: %p\n", memmove((void*)0, (void *)0, 0));
	*/

	// memset:
	/*
	char str[] = "Hola";
	int ch = 'z';
	size_t n = 2;

	printf("ft_memset: %s\n", ft_memset(str, ch, n));
	printf("memset: %s\n", memset(str, ch, n));
	*/

	// split:
	/*
	int	i = 0;
	char **split;
	char str[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Mauris aliquam tincidunt elit eu aliquam. Proin euismod odio sit amet neque pharetra tincidunt. Duis eget purus fermentum, condimentum tellus ac, consequat nibh.";
	char c = 'i';


	split = ft_split(str, c);
	while (split[i])
	{
		printf("%s\n", split[i++]);
	}
	*/

	// strchr y strrchr:
	/*
	const char str[] = "";
	int c = 'a';

	printf("ft_strchr: %s\n", ft_strchr(str, c));
	printf("strchr: %s\n", strchr(str, c));

	printf(ft_strrchr: %s\n, ft_strrchr(str, c));
	printf(strrchr: %s\n, strrchr(str, c));
	*/

	// strnstr:
	/*
	char haystack[50] = "Hola que tal";
	char needle[20] = "que";
	size_t n = 10;

	//printf("%s\n", ft_strnstr((void *)0, "fake", 3)); // El mío da null, no segfault
	printf("%s\n", ft_strnstr(haystack, needle, n));
	*/

	// strlcpy:
	/*
	const char src[] = "Holi";
	char dest[] = "Pepe"
	size_t n = 3;

	printf("ft_strlcpy: %zu\nCopia: %s\n", ft_strlcpy(dest, src, n), dest);
	printf("strlcpy: %zu\nCopia: %s\n", strlcpy(dest, src, n), dest);
	*/
	
	// strtrim
	/*

	 */

	// strlcat:
	/*
	const char src[] = "Holi";
	char dest[] = "Pepe"
	size_t n = 8;

	printf("ft_strlcpy: %zu\nCopia: %s\n", ft_strlcpy(dest, src, n), dest);
	printf("strlcpy: %zu\nCopia: %s\n", strlcpy(dest, src, n), dest);
	*/

	// strmapi y striteri
	/*
	char *s = "Hola";

	printf("%s\n", ft_strmapi(s, &f));
	*/

	// ft_putchar_fd
	/*
	int	fd;

	fd = open("ejemplo.txt", O_RDWR);
	printf("%d\n", fd);
	*/

	// LISTAS
	/*
	char	*a = "Hola";
	char	*b = "Adios";
	char	*c = "Amigos";
	t_list	*first;
	t_list	*second;
	t_list	*third;
	t_list	**todas;

	first = ft_lstnew(a);
	second = ft_lstnew(b);
	first->next = second;
	third = ft_lstnew(c);
	todas = &first;
	
	*todas = first;
	int	i = 0;
	printf("%s\n", (char *)(first)->content);
	ft_lstdelone((first)->content, &delete);
	printf("%s\n", (char *)(first)->content);
	printf("%s\n")
	*/
	
	/*
	printf("%d\n", ft_lstsize(todas));
	*/

	/*
	ft_lstmap(todas, &f, &delete);
	*/

	/*	while (*todas)
	{
		printf("%s\n", (char *)(*todas)->content);
		*todas = (*todas)->next;
	}
	*/

	system("leaks -q ./a.out");
}
