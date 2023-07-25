#include "3-calc.h"
/**
 * main - entry point
 * @argc:argument count
 * @argv:argument vector
 * Return: 0 (success)
*/
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	char *op;
	int (*func_ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];
	func_ptr = get_op_func(op);

	if (func_ptr == NULL || (*op != '+' && *op != '-' && *op != '*' && *op != '/' && *op != '%'))
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' || *op == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", func_ptr(num1, num2));
return (0);
}
