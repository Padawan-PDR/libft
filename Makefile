all: 
	gcc TDD_usando_a_libft/src/*.c ./TDD_usando_a_libft/tests/test_libft.c -lrt -lm -o ./TDD_usando_a_libft/test_program && ./TDD_usando_a_libft/test_program