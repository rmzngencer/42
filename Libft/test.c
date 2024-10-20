/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgencer <rgencer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 10:13:34 by rgencer           #+#    #+#             */
/*   Updated: 2024/10/20 13:12:41 by rgencer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>  // toupper ve tolower için
#include <stdlib.h>
#include <string.h>
// Kendi fonksiyon tanımlarını burada eklemelisin
#include "libft.h"
void ft_lstprint(t_list *lst) {
    while (lst) {
        printf("%s\n", lst->content); // İçeriği ekrana bastır
        lst = lst->next; // Sonraki düğüme geç
    }
}
int main(void)
{
    // Test for ft_isalpha
    printf("\nft_isalpha için test verileridir ************************************\n");
    int c = 'a';
    printf("Test 1: %c is %s\n", c, ft_isalpha(c) ? "alpha" : "not alpha");
    printf("Test 1: %c is %s\n", c, isalpha(c) ? "alpha" : "not alpha");
    printf("kolay fonksiyon olduğu için test yok\n");


    // Test for ft_isdigit
    printf("\nft_isdigit için test verileridir ************************************\n");
    c = '5';
    printf("Test 1: %c is %s\n", c, ft_isdigit(c) ? "digit" : "not digit");
    printf("Test 1: %c is %s\n", c, isdigit(c) ? "digit" : "not digit");
    printf("kolay fonksiyon olduğu için test yok\n");

    // Test for ft_isalnum
    printf("\nft_isalnum için test verileridir ************************************\n");
    c = '5';
    printf("Test 1: %c is %s\n", c, ft_isalnum(c) ? "alnum" : "not alnum");
    printf("Test 1: %c is %s\n", c, isalnum(c) ? "alnum" : "not alnum");
    printf("bu fonsiyonun amacı verilen sitring büyük harf küöçük harf ve numara dan oluşuyorsa 0 dan farklı bir ramakm döndürür\n");

    // Test for ft_isascii
    printf("\nft_isascii için test verileridir ************************************\n");
    c = 127;
    printf("Test 1: %c is %s\n", c, ft_isascii(c) ? "ascii" : "not ascii");
    printf("Test 1: %c is %s\n", c, isascii(c) ? "ascii" : "not ascii");
    printf("bu fonksiyon verilen değer ascii tablosunda ise 0 dan farklı bir değer döndürür\n");

    // Test for ft_isprint
    printf("\nft_isprint için test verileridir ************************************\n");
    c = 32;
    printf("Test 1: %c is %s\n", c, ft_isprint(c) ? "printable" : "not printable");
    printf("Test 1: %c is %s\n", c, isprint(c) ? "printable" : "not printable");
    printf("bu fonksiyon verilen değer ekrana basılabilir bir karakter ise 0 dan farklı bir değer döndürür\n");
    
    // Test for ft_strlen
    printf("\nft_strlen için test verileridir ************************************\n");
    const char *str = "Hello, World!";
    printf("Test 1: Length of \"%s\" is %lu\n", str, ft_strlen(str)); // Çıktı: 13
    printf("Test 1: Length of \"%s\" is %lu\n", str, strlen(str)); // Çıktı: 13
    printf("bu fonksiyon verilen stringin uzunluğunu döndürür\n");

    // Test for ft_memset
    printf("\nft_memset için test verileridir ************************************\n");
    char buffer[50]= "deneme ne olduğu belirsiz";
    ft_memset(buffer, 'x', 10);
    printf("Test 1: %s\n", buffer); // Çıktı: "AAAAAAAAAA"
    memset(buffer, 'x', 10);
    printf("Test 1: %s\n", buffer); // Çıktı: "AAAAAAAAAA"
    printf("bu fonksiyon verilen stringin belirtilen uzunluğunu belirtilen karakter ile doldurur\n");


    int a[] = {4,520,34,55};
    ft_memset(a,0,6);
    ft_memset(a,73,5);

    printf("Test 1: %d\n", a[1]); // Çıktı: 73


    // Test for ft_bzero
    printf("\nft_bzero için test verileridir ************************************\n");
    char buffer2[50]= "deneme ne olduğu belirsiz";  
    ft_bzero(buffer2, 10);
    printf("Test 1: %s\n", buffer2); // Çıktı: "          "
    bzero(buffer2, 10);
    printf("Test 1: %s\n", buffer2); // Çıktı: "          "
    printf("bu fonksiyon verilen stringin belirtilen uzunluğunu 0 ile doldurur\n");
    
	// Test for ft_memcpy
	printf("\nft_memcpy için test verileridir ************************************\n");
	char src[50] = "yasir";
	char src4[50] = "yasir";
	//char dest[50] = "aasxa";
	ft_memcpy(src, src+1, 4);
	printf("Test 1: %s\n", src); // Çıktı: "deneme ne"
	memcpy(src4, src4+1, 4);
	printf("Test 1: %s\n", src4); // Çıktı: "deneme ne"
	printf("bu fonksiyon verilen stringin belirtilen uzunluğunu başka bir stringe kopyalar\n");

	// Test for ft_memmove
	printf("\nft_memmove için test verileridir ************************************\n");
	char src2[50] = "yasir";
	char src3[50] = "yasir";
	//char dest2[50] = "aaff";
	ft_memmove(src2, src2+1, 4);
	printf("Test 1: %s\n", src2); // Çıktı: "deneme ne"
	memmove(src3, src3+1, 4);
	printf("Test 1: %s\n", src3); // Çıktı: "deneme ne"
	printf("bu fonksiyon verilen stringin belirtilen uzunluğunu başka bir stringe kopyalar\n");

	// Test for ft_memchr
	printf("\nft_memchr için test verileridir ************************************\n");
	char str2[50] = "deneme ne olduğu belirsiz";
	char *ptr = ft_memchr(str2, 'n', 2);
	if (ptr != NULL)
		printf("Test 1: %s\n", ptr); // Çıktı: "ne olduğu belirsiz"
	char *ptr2 = memchr(str2, 'n', 2);
	if (ptr2 != NULL)
		printf("Test 1: %s\n", ptr2); // Çıktı: "ne olduğu belirsiz"
	printf("bu fonksiyon verilen stringin belirtilen uzunluğunu belirtilen karakteri arar\n");

	// Test for ft_strlcpy
	printf("\nft_strlcpy için test verileridir ************************************\n");
	char dest[50] = "deneme ne olduğu belirsiz";
	const char *src5 = "Hello, World!";
	size_t len = ft_strlcpy(dest, src5, 5);
	printf("Test 1: %s\n", dest); // Çıktı: "Hello"
	printf("Test 1: %lu\n", len); // Çıktı: 5
	char dest2[50] = "deneme ne olduğu belirsiz";
	const char *src6 = "Hello, World!";
	size_t len2 = strlcpy(dest2, src6, 5);
	printf("Test 1: %s\n", dest2); // Çıktı: "Hello"
	printf("Test 1: %lu\n", len2); // Çıktı: 5
	printf("bu fonksiyon verilen stringin belirtilen uzunluğunu başka bir stringe kopyalar\n");
	
    // Test for ft_strcat
    printf("\nft_strcat için test verileridir ************************************\n");
    char dest3[50] = "Hello, ";
	const char *src7 = "World!";
	ft_strlcat(dest3, src7 ,6);
	printf("Test 1: %zu\n", ft_strlcat(dest3, src7 ,6)); // Çıktı: "Hello, World!"
	char dest4[50] = "Hello, ";
	const char *src8 = "World!";
	strlcat(dest4, src8, 6);
	printf("Test 1: %lu\n", strlcat(dest4, src8, 6)); // Çıktı: "Hello, World!"
	printf("bu fonksiyon verilen stringi başka bir stringe ekler\n");

	// Test for ft_strchr

	printf("buradan sonra\n");
    t_list **my_list = malloc(sizeof(t_list *)); // Allocate memory for the list pointer
    *my_list = NULL; // Initialize the list to NULL

    t_list *first_node = ft_lstnew("b");
    printf("%s",first_node->content);
    ft_lstadd_front(my_list, first_node);

    t_list *second_node = ft_lstnew("a");
    ft_lstadd_front(my_list, second_node);

	ft_lstprint(*my_list);
    printf("liiste uzunluğu\n");

    printf("%d", ft_lstsize(*my_list));
    // Cleanup code would go here to free the list
    printf("%s",ft_lstlast(*my_list)->content);
    t_list *last_node = ft_lstnew("c");
    ft_lstadd_back(my_list,last_node);
    ft_lstprint(*my_list);

    ft_putnbr_fd(-2147483648,1);
    

    free(my_list); // Don't forget to free the allocated pointer



	/*
	✔ Executing: make fclean all (no bonus)
ℹ Executing: libft-war-machine (https://github.com/y3ll0w42/libft-war-machine)

FUNCTION         TESTS                RESULT
ft_strchr        ✓✓✓✓✓✓               OK

✔ Compiling tests: libftTester (https://github.com/Tripouille/libftTester)
ℹ Testing:
ft_strchr	: 1.OK 2.OK 3.OK 4.OK 5.KO 


Errors in:

For /Users/rgencer/francinette/tests/libft/Tripouille/tests/ft_strchr_test.cpp:
KO  22: 	 5  check(ft_strchr(s, 't' + 256) == s); showLeaks();

✔ Compiling tests: libft-unit-test (https://github.com/alelievr/libft-unit-test)
ℹ Testing:
ft_strchr       : [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] 

✔ Compiling tests: fsoares (my own)
ℹ Testing:
ft_strchr       : KO

Errors found:
For ft_strchr, in /Users/rgencer/francinette/tests/libft/fsoares/test_strchr.c:

Error in test 5: ft_strchr(0x104567a40: "teste", 357: 'e'): expected: 
0x104567a41, yours: 0x0
Error in test 6: ft_strchr(0x104567a40: "teste", 1024: '\0'): expected: 
0x104567a45, yours: 0x0


	*/
/*

✔ Executing: make fclean all (no bonus)
ℹ Executing: libft-war-machine (https://github.com/y3ll0w42/libft-war-machine)

FUNCTION         TESTS                RESULT
ft_strrchr       ✓✓✓✓✓✓✓✓             OK

✔ Compiling tests: libftTester (https://github.com/Tripouille/libftTester)
ℹ Testing:
ft_strrchr	: 1.OK 2.OK 3.OK 4.OK 5.OK 6.KO 7.OK 8.OK 


Errors in:

For /Users/rgencer/francinette/tests/libft/Tripouille/tests/ft_strrchr_test.cpp:
KO  25: 	 6  check(ft_strrchr(s, 't' + 256) == s); showLeaks();

✔ Compiling tests: libft-unit-test (https://github.com/alelievr/libft-unit-test)
ℹ Testing:
ft_strrchr      : [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] 

\xe2\x9a\xa0 : your libft is using forbidden functions so the result may not be relevant !


✔ Compiling tests: fsoares (my own)
ℹ Testing:
ft_strrchr      : KO

Errors found:
For ft_strrchr, in 
/Users/rgencer/francinette/tests/libft/fsoares/test_strrchr.c:

Error in test 5: ft_strrchr(0x10084b9c0: "teste", 1125: 'e'): expected: 
0x10084b9c4, yours: 0x0
Error in test 6: ft_strrchr(0x10084b9c0: "teste", 1024: '\0'): expected: 
0x10084b9c5, yours: 0x0


*/




	

	


    

   

    return 0;
}

