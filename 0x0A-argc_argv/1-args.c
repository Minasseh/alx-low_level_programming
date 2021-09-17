#include <stdio.h>
/**
 * main - function that helps to find number of arguments
 * @argc: counts number
 * @argv: array of string
 * Return: returns zero value
 */

int main(int argc, char __attribute__((__unsigned__)) *argv[])
{
  printf("%d\n", argc - 1);
  return 0;
}
