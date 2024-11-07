#include "minunit.h"
#include "../../libft.h"
#include <bsd/string.h>

MU_TEST(test_ft_isalpha_receiving_A_returns_true)
{
	//ARRANGE
	char	input = 65;
	int		expected_result = 1;// it could be any number different from 0
	int		actual_result;

	//ACT
	actual_result = ft_isalpha(input);

	//ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_ft_isdigit_receiving_digit_returns_true)
{
	//ARRANGE
	char	input = '8';
	int		expected_result = 1;// it could be any number different from 0
	int		actual_result;

	//ACT
	actual_result = ft_isdigit(input);

	//ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_ft_isalnum_receiving_alphanumeric_returns_true)
{
	//ARRANGE
	char	input = 'K';
	int		expected_result = 1;// it could be any number different from 0
	int		actual_result = ft_isalnum(input);

	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_ft_isascii_receiving_ascii_returns_true)
{
	//ARRANGE
	char	input = ' ';
	int		expected_result = 1;// it could be any number different from 0#include "../../libft.h"
	int  actual_result;

	//ACT
	actual_result = ft_isascii(input);

	//ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_ft_isprint_receiving_printable_argument_returns_true)
{
	//ARRANGE
	char	input = '\n';
	int		expected_result = 1;// it could be any number different from 0
	int		actual_result;

	//ACT
	actual_result = ft_isprint(input);

	//ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_ft_toupper_change_word_lower_to_upper)
{
	//ARRANGE
	char	input = 'a';
	int		expected_min = 65;
	int		expected_max = 90;
	int		actual_result;

	//ACT
	actual_result = ft_toupper(input);

	//ASSERT
	mu_assert_int_between(expected_min, actual_result, expected_max);
}

MU_TEST(test_ft_tolower_change_word_upper_to_lower)
{
	//ARRANGE
	char	input = 'A';
	int		expected_min = 97;
	int		expected_max = 123;
	int		actual_result;

	//ACT
	actual_result = ft_tolower(input);

	//ASSERT
	mu_assert_int_between(expected_min, actual_result, expected_max);
}

MU_TEST(test_ft_strlen_return_string_legth)
{
	//ARRANGE
	char	*input = "LOFI_NORDESTE";
	int		actual_result;
	int		expected_result = strlen(input);

	//ACT
	actual_result = ft_strlen(input);

	//ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_ft_strchr_return_first_occurrence_of_a_character_in_a_string)
{
	//ARRANGE
	char	*input = "313fdease1234";
	int		character = 'e';
	char	*actual_result;
	char	*expected_result = strchr(input, character);

	//ACT
	actual_result = ft_strchr(input, character);

	//ASSERT
	mu_assert_string_eq(expected_result, actual_result);
}

MU_TEST(test_ft_strrchr_return_last_occurrence_of_a_character_in_a_string)
{
	//ARRANGE
	char	*input = "313fdease1234";
	int		character = 'e';
	char	*actual_result;
	char	*expected_result = strrchr(input, character);

	//ACT
	actual_result = ft_strrchr(input, character);

	//ASSERT
	mu_assert_string_eq(expected_result, actual_result);
}

MU_TEST(test_ft_strncmp_compare_two_strings)
{
	//ARRANGE
	char	*input1 = "Feijão com macarrão";
	char	*input2 = "Feijão e Arroz";
	int		from = 17;
	int		actual_result;
	int		expected_result = strncmp(input1, input2, from);

	//ACT
	actual_result = ft_strncmp(input1, input2, from);

	//ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_ft_strlcpy_copy_src_to_dest_and_return_src_len)
{
	 // ARRANGE
    char src[] = "Feijao com macarrao";
    char dest[20];
    size_t expected_len = ft_strlen(src);

    // ACT
    size_t actual_len = ft_strlcpy(dest, src, sizeof(dest));

    // ASSERT
    mu_assert_int_eq(expected_len, actual_len);
    mu_assert_string_eq(src, dest);
}

MU_TEST(test_ft_strlcat_concatenate_src_to_dest_and_return_lenght_src_and_dst)
{
	// ARRANGE
    char src[] = "batata";
    char dst[30] = "feijola";
    size_t expected_len = strlen(dst) + strlen(src);
    char expected_dst[30] = "feijolabatata";

    // ACT
    size_t actual_len = ft_strlcat(dst, src, sizeof(dst));

    // ASSERT
    mu_assert_int_eq(expected_len, actual_len);
    mu_assert_string_eq(expected_dst, dst);
}

MU_TEST(test_ft_strnstr_serch_little_string_in_the_big_string)
{
	// ARRANGE
    char *big = "Foo Bar Baz";

	char *little = "B";
    char *expected_result = "Bar Baz";

    // ACT
    char *actual_result = ft_strnstr(big, little, 4);

    // ASSERT
    mu_assert_string_eq(expected_result, actual_result);
}

MU_TEST(test_ft_memset_replaces_c_in_n_places_in_string_memory)
{
	// ARRANGE
    char string[10] = "PAlabras9";

	char c = 'B';
	int	n = 4;
    char *expected_result = "BBBBbras9";

    // ACT
    char *actual_result = ft_memset(string, c, n);

    // ASSERT
    mu_assert_string_eq(expected_result, actual_result);
}
 
MU_TEST(test_ft_bzero_turn_zero_n_places_in_string_s_memory)
{
	// ARRANGE
    char string[10] = "PAlabras9";
	size_t	n = 4;
    char *expected_result = "bras9";

    // ACT
	ft_bzero(string, n);
    char actual_result[10];
	ft_strlcpy(actual_result, string, 10);


    // ASSERT
	char src[] = "Feijao com macarrao";
    char dest[20];
    size_t expected_len = ft_strlen(src);
}

MU_TEST(test_ft_memcpy_copy_src_to_dest)
{
	// ARRANGE
    int src[4] = {25, 30, 22, 35};
    int	dest[20];
	size_t n = 4;

    // ACT
    void *actual_result = ft_memcpy(dest, src, n);
	int expected_result[] = {25, 30, 22, 35};


    // ASSERT
    mu_assert_mem_eq(expected_result, actual_result, n);
}

MU_TEST(test_ft_memmove_copy_src_to_dest)
{
	// ARRANGE
    char a[10] = "cavalinho";
	int	 n = ft_strlen(a);
	char b[7];
	memcpy(b, a + 2, 7);

    // ACT
    void *actual_result = ft_memmove(b, a, n - 2);
	char expected_result[7] = "cavalin";


    // ASSERT
    mu_assert_mem_eq(expected_result, actual_result, n);
}

MU_TEST_SUITE(libft_test_suite) 
{
	MU_RUN_TEST(test_ft_isalpha_receiving_A_returns_true);
	MU_RUN_TEST(test_ft_isdigit_receiving_digit_returns_true);
	MU_RUN_TEST(test_ft_isalnum_receiving_alphanumeric_returns_true);
	MU_RUN_TEST(test_ft_isascii_receiving_ascii_returns_true);
	MU_RUN_TEST(test_ft_isprint_receiving_printable_argument_returns_true);
	MU_RUN_TEST(test_ft_toupper_change_word_lower_to_upper);
	MU_RUN_TEST(test_ft_tolower_change_word_upper_to_lower);
	MU_RUN_TEST(test_ft_strlen_return_string_legth);
	MU_RUN_TEST(test_ft_strchr_return_first_occurrence_of_a_character_in_a_string);
	MU_RUN_TEST(test_ft_strrchr_return_last_occurrence_of_a_character_in_a_string);
	MU_RUN_TEST(test_ft_strncmp_compare_two_strings);
	MU_RUN_TEST(test_ft_strlcpy_copy_src_to_dest_and_return_src_len);
	MU_RUN_TEST(test_ft_strlcat_concatenate_src_to_dest_and_return_lenght_src_and_dst);
	MU_RUN_TEST(test_ft_strnstr_serch_little_string_in_the_big_string);
	MU_RUN_TEST(test_ft_memset_replaces_c_in_n_places_in_string_memory);
	MU_RUN_TEST(test_ft_bzero_turn_zero_n_places_in_string_s_memory);
	MU_RUN_TEST(test_ft_memcpy_copy_src_to_dest);
	MU_RUN_TEST(test_ft_memmove_copy_src_to_dest);
}

int main(int argc, char *argv[]) {
	MU_RUN_SUITE(libft_test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}