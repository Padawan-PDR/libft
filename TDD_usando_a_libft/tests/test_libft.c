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
	char	input = '\0';
	int		expected_result = 1;// it could be any number different from 0
	int		actual_result;

	//ACT
	actual_result = ft_isprint(input);

	//ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_ft_toupper_change_letter_lower_to_upper)
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

MU_TEST(test_ft_toupper_change_letter_upper_to_lower)
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
	//ARRANGE
	char	src[] = "Feijão com macarrão";
	char	dest[20];
	int from = sizeof(dest);
	int		actual_result;
	int		expected_result = strlcpy(dest, src, from);

	//ACT
	actual_result = ft_strlcpy(dest, src, from);

	//ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST_SUITE(libft_test_suite) 
{
	MU_RUN_TEST(test_ft_isalpha_receiving_A_returns_true);
	MU_RUN_TEST(test_ft_isdigit_receiving_digit_returns_true);
	MU_RUN_TEST(test_ft_isalnum_receiving_alphanumeric_returns_true);
	MU_RUN_TEST(test_ft_isascii_receiving_ascii_returns_true);
	MU_RUN_TEST(test_ft_isprint_receiving_printable_argument_returns_true);
	MU_RUN_TEST(test_ft_toupper_change_letter_lower_to_upper);
	MU_RUN_TEST(test_ft_toupper_change_letter_upper_to_lower);
	MU_RUN_TEST(test_ft_strlen_return_string_legth);
	MU_RUN_TEST(test_ft_strchr_return_first_occurrence_of_a_character_in_a_string);
	MU_RUN_TEST(test_ft_strrchr_return_last_occurrence_of_a_character_in_a_string);
	MU_RUN_TEST(test_ft_strncmp_compare_two_strings);
	MU_RUN_TEST(test_ft_strlcpy_copy_src_to_dest_and_return_src_len);

}

int main(int argc, char *argv[]) {
	MU_RUN_SUITE(libft_test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}