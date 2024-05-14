#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
char *__builtin_concat(char *str1, char *str2)
{
	char *res = malloc(sizeof(str1)+sizeof(str2));
	strcat(res, str1);
	strcat(res, str2);
	return res;
}
void __builtin_readBool(bool *b)
{
	char *__bool_str_tmp = malloc(2);
	scanf("%1024s", __bool_str_tmp);
	if (strcmp(__bool_str_tmp, "True") == 0) *b = true;
	else if (strcmp(__bool_str_tmp, "False") == 0) *b = false;
	else {fprintf(stderr, "Error: invalid value for type bool"); exit(EXIT_FAILURE);}
	free(__bool_str_tmp);
}
void __builtin_printBool(bool b)
{
	if (b) printf("%s", "True");
	else printf("%s", "False");
}

int main()
{
	int n = 0;
	double sum = 0.000000;
	double last = 0.000000;
	double fact = 1.000000;
	double threshold = 0.001000;
	bool is_done = false;
	double change = 0.000000;
	while (is_done != true)
	{
		 last = sum;
		 sum = sum + 1 / fact;
		 n = n + 1;
		 fact = fact * n;
		 change = sum - last;
		if (change <= threshold)
		{
			 is_done = true;
		}
	}
	printf("%s\n", "Approximate value of e: ");
	printf("%f\n", sum);
	printf("%s\n", ". Computed after ");
	printf("%d\n", n);
	printf("%s\n", " iterations.");
return 0;

}
