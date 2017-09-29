#include <unistd.h>

void	sastantua(int size);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main()
{
    sastantua(8);
    return (0);
}
