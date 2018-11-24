#include <stdio.h>

int main() {
	int integer, *p_integer;
	char name, *p_name;

	integer = 10; p_integer = &integer;
	name = 'A'; p_name = &name;
	
	printf("%10s %10s %10s %10s\n", "printf", "기본", "p_", "*p_");
	printf("%10s %10d %10d %10d\n", "int형", integer, p_integer, *p_integer);
	printf("%10s %10c %10d %10c\n", "char형", name, p_name, *p_name);
}