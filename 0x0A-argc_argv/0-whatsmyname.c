#include <stdio.h>

/**
<<<<<<< HEAD
 * main - Print the name of the program
 * @argc: The number of arguments
 * @argv: An array of pointers
 *
 * Return: Always 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%\n", argv[0]);

=======
 * main - this is a function to print its name
 * @argc: argc parameter
 * @argv: an array of a command listed
 * Return: 0 for success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
>>>>>>> 74f5ea643ae5c97656a4e7a784fc5eb405722618
	return (0);
}
