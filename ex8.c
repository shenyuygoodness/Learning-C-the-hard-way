#include <stdio.h>
int main(int argc, char *argv[])
{
int areas[] = {10, 12, 13, 14, 20};
char name[] = "Zed";
char full_name[] = {
'Z', 'e', 'd', ' ', 'A', '.', ' ', 's', 'n', 'a', 'w', '\0'};
// the above initialized array use the format "type name[] = 
// {initializer};


printf("The size of an int: %ld", sizeof(int));
printf("The size of ares(int[]0: %ld\n", sizeof(areas));
printf("The number of ints in areas: %ld.\n", 
    sizeof(areas)/ sizeof(int));
printf("The first area is %d, the 2nd %d.\n", areas[0], areas[1]);

printf("The size of a char: %ld\n", sizeof(char));

printf("The size of name (char[]): %ld\n", sizeof(name)/sizeof(char));

printf("The number of chars: %ld\n", sizeof(name)/ sizeof(char));

printf("The size of full.name (char[]): %ld\n", sizeof(full_name));

printf("The number of chars: %ld\n", sizeof(full_name) / sizeof(char));

printf("name=\"%s\" and full name = \"%s\"\n", name, full_name);

return 0;
}
