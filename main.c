#include <stdio.h>
#include "libft.h"

int	main(void)
{
	// isalpha
	char		character;

	character = 8;
	if (ft_isalpha(character))
		printf("%c is alphabet\n", character);
	else 
		printf("%c is not alphabet\n", character);


	// isdigit
	int 		d;

	d = 'k';
	if (ft_isdigit(d))
		printf("%d is a digit\n", d);
	else 
		printf("%d is not a digit\n", d);

	
	// isalnum
	if (ft_isalnum(d))
		printf("%d is a alphanumeric\n", d);
	else 
		printf("%d is not alphanumeric\n", d);

	// isascii
	if (ft_isascii(d))
		printf("%d is ascii\n", d);
	else 
		printf("%d is not ascii\n", d);

	// isprint
	if (ft_isprint(d))
		printf("%d is printabel\n", d);
	else 
		printf("%d is not printabel\n", d);

	
	// strlen
	char 		str1[] = "Hello World";
	printf("The string %s has %ld characters.\n", str1, ft_strlen(str1));



	// memset
	char 		arr1[20];
	int 		i = 0;

	ft_memset(arr1, 'a', sizeof(char) * 10);
	while (i++ < 10)
		printf("memset: %c", arr1[i]);
	printf("\n");


	// bzero
	int 		j = 0;
	ft_bzero(arr1, sizeof(char) * 10);
	while (j++ < 10)
		printf("%c", arr1[j]);
	printf("\n");


	// memcpy
	char 		str2[] = "Start stop";
	
	printf("Before ft_memcpy %s\n", str2);
	ft_memcpy(str2, str2 + 6, 4 * sizeof(char));
	printf("After ft_memcpy %s\n", str2);

	// memmove
	char 		dest[] = "oldstring";
	const char 	src[] = "new string";

	printf("Before ft_memmove dest = %s, src = %s\n", dest, src);
	ft_memmove(dest, src, 9 * sizeof(char));
	printf("After ft_memmove dest = %s, src = %s\n", dest, src);


	// strlcpy
	char 		string[]= "Hello there.";
	char 		buffer[19];
	int			size;
	int 		r;

	size = 0;
	r = ft_strlcpy(buffer, string, size);
	printf("Copied %d characters of %s, which lenght is %d, into %s\n", size, string, r, buffer);



	// strlcat
	// TODO understand and make working
	char 		first[] = "";
	char		last[] = "toto";
	
	r = ft_strlcat(first, last, size);
	printf("strlcat: Concatenated %d characters of %s onto %s, which lenght is supposed to be %d \n", size, last, first, r);



	// toupper
	char		c;

	c = 'e';
	printf("%c becomes to %c\n", c, ft_toupper(c));

	// tolower
	c = 'K';
	printf("%c becomes to %c\n", c, ft_tolower(c));


	// strchr
	if (ft_strchr(first, 'i'))
		printf("character found\n");
	else
		printf("character not found\n");

	// strrchr
	if (ft_strrchr(first, 'x'))
		printf("character found\n");
	else
		printf("character not found\n");


	// strncmp
	char		s1[] ="xxxads";
	char		s2[] ="xxxAsd";
	size_t		n;

	n = 3;
	printf("%d\n", ft_strncmp(s1, s2, n));




	// memchr
	int arr2[] = {3, 4, 5, 6};
	int arr3[] = {3, 4, 5, 8};

	if (ft_memchr(arr2, 1, sizeof(int) * 2))
		printf("memchr Found the byte\n");
	else
		printf("memchr Did not find the byte\n");
	
	// memcmp
	if (ft_memcmp(arr2, arr3, n * sizeof(int)) == 0)
		printf("memcmp Arrays are the same\n");
	else
		printf("memcmp Array are not the same\n");
	


	// strnstr
	// TODO does not work
	char haystack[] = "strnstr Apples are good for your health";
	char needle[] = "good";

	char *res = ft_strnstr(haystack, needle, 4);

	printf("strnstr %s\nstrnstr %s\n", haystack, needle);
	if (res)
	{
		printf("%p\n", res);	
		printf("strnstr The word has been found\n");
	}
	else
	{
		printf("%p\n", res);	
		printf("strnstr The word has NOT been found\n");
	}



	// atoi
	char atoistr[] = "-2000";

	printf("atoi %d", ft_atoi(atoistr));

	printf("\n");


	// calloc

	int idx, * ptr, sum = 0;
    ptr = ft_calloc(10, sizeof(int));
    if (ptr == NULL) {
        printf("calloc Error! memory not allocated.");
        exit(0);
    }
    printf("calloc Building and calculating the sequence sum of the first 10 terms\n");
    for (idx = 0; idx < 10; ++idx) 
	{ 	* (ptr + idx) = idx;
        sum += * (ptr + idx);
    }
    printf("calloc Sum = %d\n", sum);
    free(ptr);


	// strdup

	char 			source[] = "strdup GeeksForGeeks\n";
    char			*target =ft_strdup(source);

    printf("%s", target);
	free(target);



	// substr

	char 			strtosub[] = "das ist der Substr String";
	unsigned int 	start = 12;
	size_t 			len = 13;
	char 			*substr;

	substr = ft_substr(strtosub, start, len);
	printf("substr: %s \n", substr);
	free(substr);


	// strjoin

	char			Anfang[] = "Der Anfang";
	char			Ende[] = ", das Ende.";
	char			*strjoin;

	strjoin = ft_strjoin(Anfang, Ende);
	printf("strjoin: %s\n", strjoin);
	free(strjoin);



	// strtrim
//TODO main.c:240:10: error: assignment to ‘char *’ from ‘int’ makes pointer from integer without a cast [-Werror=int-conversion]
//   240 |  trimmed = strtrim(strtrims1, strtrimset);
//       |          ^
	// char			strtrims1[] = "123456789123";
	// char			strtrimset[] = "123";
	// char			*trimmed;							// Steffen warum hier pointer, trimmed[x] geht nicht

	// trimmed = strtrim(strtrims1, strtrimset);

	// printf("strtrim: %s\n", trimmed);
	// free(trimmed);


	// split
	//TODO how to print an array in this 
	char			split_str[] = "alles wird gut";
	char 			split_c = ' ';
	char			**splitted;
	char			**freesplit;

	splitted = ft_split(split_str, split_c);
	freesplit = splitted;
	while (*splitted)
	{
		printf("split: %s\n", *splitted);
		splitted++;
	}			
	free(freesplit);
	splitted = NULL;



	// itoa
	char			*itoa;

	itoa = ft_itoa(-28);
	printf("itoa: %s\n", itoa);
	free(itoa);


	// strmapi
	//TODO Verstehen und testen
	// char f(unsigned int i, char c)
	// {
	// 	char str10;
	// 	str10 = c + 1;
	// 	return (str10);
	// }

	// char str8[] = "abc";
	// char* str9;
	// str9 = ft_strmapi(str8, *f);
	// printf("%s\n", str9);




	// striteri
	//TODO verstehen was die Funktion macht, main schreiben




	// putchar_fd
	//TODO main von war machine verstehen




	// putstr_fd
	//TODO verstehen, main von war machine anschauen
	ft_putstr_fd("putstr_fd: lorem ipsum dolor sit amet\n", 2);
	ft_putstr_fd("  lorem\nipsum\rdolor\tsit amet  \n", 1);
	ft_putstr_fd("", 2);
	ft_putstr_fd("lorem ipsum do\0lor sit amet!\n", 1);


	// putendl_fd
	//TODO main von war machine verstehen
	ft_putendl_fd("\nputendl_fd: lorem ipsum dolor sit amet", 2);




	return (0);
}
