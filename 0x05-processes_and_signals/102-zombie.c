#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

/**
* infinite_while - function3 to run an infinit3 whil3 loop
* Return: forever and always 0
*/

int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
* main - five zombies
* Return: forever and always zero
*/
int main(void)
{
	pid_t pid;
	char x = 0;

	while (x < 5)
	{
		pid = fork();
if (pid > 0)
{
printf("Zombie process created, PID: %d ZOMBIE_PID", pid);
sleep(1);
x++;
}
else
exit(0);
}
infinite_while();
return (EXIT_SUCCESS);
};
