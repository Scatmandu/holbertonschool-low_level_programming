#include "holberton.h"
/**
*prime- finds if a number is prime
*@x: number that tests whether n is prime
*@n: number to test
*Return: 0, 1, or prime function
**/
int prime(int x, int n)
{
	if (x == 1)
	{
		return (1);
	}
	else if (n % x == 0)
	{
		return (0);
	}
	else
	{
		return (prime(x - 1, n));
	}
/**
*is_prime_number- finds if a number is prime
*@n: number to test primeness of
*Return: 0 or prime
**/
int is_prime_number(int n)
{
	int x = n - 1;

	if (n < 2)
	{
		return (0);
	}
	else
	{
		return (prime(x, n));
	}
}
