#include "libft.h"
#include <string.h>
#include <unistd.h>

void ft_putstr(char *s)
{
	int i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

// *****************************
// CHECKING FT_ISALPHA.
// *****************************

static int check_isalpha(int i)
{
    int expected;

    expected = 0;
    if ((i >= 'A' && i <= 'Z')
            || (i >= 'a' && i <= 'z'))
        expected = 1;
    else
        expected = 0;
    if (ft_isalpha(i) != expected)
    {
        ft_putstr("\tFAILURE");
        return (0);
    }
    return (1);
}

static void ft_test_isalpha()
{
    int success;
    int i;

    success = 0;
    i = 0;
    ft_putstr("Testing ft_isalpha:\n");
    while (i < 128 && check_isalpha(i) == 1)
        i++;
    if (i == 128)
        ft_putstr("\tSUCCESS\n\n");
}

// *****************************
// CHECKING FT_ISDIGIT.
// *****************************

static int check_isdigit(int i)
{
    int expected;

    expected = 0;
    if (i >= '0' && i <= '9')
        expected = 1;
    else
        expected = 0;
    if (ft_isdigit(i) != expected)
    {
        ft_putstr("\tFAILURE");
        return (0);
    }
    return (1);
}

static void ft_test_isdigit()
{
    int success;
    int i;

    success = 0;
    i = 0;
    ft_putstr("Testing ft_isdigit:\n");
    while (i < 128 && check_isdigit(i) == 1)
        i++;
    if (i == 128)
        ft_putstr("\tSUCCESS\n\n");
}

// *****************************
// CHECKING FT_ISALNUM.
// *****************************

static int check_isalnum(int i)
{
    int expected;

    expected = 0;
    if ((i >= '0' && i <= '9')
            || (i >= 'A' && i <= 'Z')
            || (i >= 'a' && i <= 'z'))
        expected = 1;
    else
        expected = 0;
    if (ft_isalnum(i) != expected)
    {
        ft_putstr("\tFAILURE");
        return (0);
    }
    return (1);
}

static void ft_test_isalnum()
{
    int success;
    int i;

    success = 0;
    i = 0;
    ft_putstr("Testing ft_isalnum:\n");
    while (i < 128 && check_isalnum(i) == 1)
        i++;
    if (i == 128)
        ft_putstr("\tSUCCESS\n\n");
}

// *****************************
// CHECKING FT_ISASCII.
// *****************************

static int check_isascii(int i)
{
    int expected;

    expected = 0;
    if (i <= 127)
        expected = 1;
    else
        expected = 0;
    if (ft_isascii(i) != expected)
    {
        ft_putstr("\tFAILURE");
        return (0);
    }
    return (1);
}

static void ft_test_isascii()
{
    int success;
    int i;

    success = 0;
    i = 0;
    ft_putstr("Testing ft_isascii:\n");
    while (i < 128 && check_isascii(i) == 1)
        i++;
    if (i == 128)
        ft_putstr("\tSUCCESS\n\n");
}

// *****************************
// CHECKING FT_ISPRINT.
// *****************************

static int check_isprint(int i)
{
    int expected;

    expected = 0;
    if (i >= 32 && i <= 127)
        expected = 1;
    else
        expected = 0;
    if (ft_isprint(i) != expected)
    {
        ft_putstr("\tFAILURE");
        return (0);
    }
    return (1);
}

static void ft_test_isprint()
{
    int success;
    int i;

    success = 0;
    i = 0;
    ft_putstr("Testing ft_isprint:\n");
    while (i < 128 && check_isprint(i) == 1)
        i++;
    if (i == 128)
        ft_putstr("\tSUCCESS\n\n");
}

/* ************************************************************************ */
/*                                 FT_STRLEN                                */
/* ************************************************************************ */

static int check_strlen(char const *s)
{
	if (ft_strlen(s) != strlen(s))
	{
		ft_putstr("\tFAILURE");
		ft_putstr((char *)s);
		ft_putstr("\"\n");
		return (0);
	}
	return (1);
}

static void ft_test_strlen(void)
{
	const char *cases[] = {"", "a", "hello", "hello world", "   ",
            "tab\tand\nnewline", "0123456789012345678901234567890123456789", NULL};
	int i;

	ft_putstr("Testing ft_strlen:\n");
	i = 0;
	while (cases[i] && check_strlen(cases[i]) == 1)
		i++;
	if (cases[i] == NULL)
		ft_putstr("\tSUCCESS\n\n");
}

// *****************************
// CHECKING FT_TOUPPER.
// *****************************

static int check_toupper(int i)
{
    int expected;

    expected = i;
    if (i >= 'a' && i <= 'z')
        expected = i - 32;
    if (ft_toupper(i) != expected)
    {
        ft_putstr("\tFAILURE");
        return (0);
    }
    return (1);
}

static void ft_test_toupper()
{
    int success;
    int i;

    success = 0;
    i = 0;
    ft_putstr("Testing ft_toupper:\n");
    while (i < 128 && check_toupper(i) == 1)
        i++;
    if (i == 128)
        ft_putstr("\tSUCCESS\n\n");
}

// *****************************
// CHECKING FT_TOLOWER.
// *****************************

static int check_tolower(int i)
{
    int expected;

    expected = i;
    if (i >= 'A' && i <= 'Z')
        expected = i + 32;
    if (ft_tolower(i) != expected)
    {
        ft_putstr("\tFAILURE");
        return (0);
    }
    return (1);
}

static void ft_test_tower()
{
    int success;
    int i;

    success = 0;
    i = 0;
    ft_putstr("Testing ft_tolower:\n");
    while (i < 128 && check_tolower(i) == 1)
        i++;
    if (i == 128)
        ft_putstr("\tSUCCESS\n\n");
}

void    ft_test_1(void)
{
    ft_test_isalpha();
    ft_test_isdigit();
    ft_test_isalnum();
    ft_test_isascii();
    ft_test_isprint();
    ft_test_toupper();
    ft_test_tolower();
}

void    ft_test_2(void)
{
    ft_test_strlen();
    ft_test_strlcpy();
    ft_test_strlcat();
    ft_test_strchr();
    ft_test_strrchr();
    ft_test_strncmp();
    ft_test_strnstr();
    ft_test_atoi();
}

void    ft_test_3(void)
{
    ft_test_bzero();
    ft_test_memset();
    ft_test_memcpy();
    ft_test_memmove();
    ft_test_memchr();
    ft_test_memcmp();
}

void    ft_test_4(void)
{
    ft_test_strdup();
    ft_test_calloc();
}

void    ft_test_5(void)
{
    ft_test_substr();
    ft_test_strjoin();
    ft_test_strtrim();
    ft_test_strmapi();
    ft_test_striteri();
    ft_test_split();
    ft_test_itoa();
}

void    ft_test_6(void)
{
    ft_test_putchar_fd();
    ft_test_putstr_fd();
    ft_test_putendl_fd();
    ft_test_putnbr_fd();
}

void    ft_test_6()
{
    ft_test_lstnew();
    ft_test_lstadd_front();
    ft_test_lstsize();
    ft_test_lstlast();
    ft_test_lstadd_back();
    ft_test_lstdelone();
    ft_test_lstclear();
    ft_test_lstiter();
    ft_test_lstmap();
}

int main(void)
{
    ft_test_1();
    ft_test_2();
    ft_test_3();
    ft_test_4();
    ft_test_5();
    ft_test_6();
}
