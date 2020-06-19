void ft_putchar(char c)
{

}

void ft_print_numbers(void)
{
    char    n;

    n = 0;

    while (n <= 9)
    {
        ft_putchar(n);
    n = n + 1;
    }
}
int main()
{
    ft_print_numbers();
    return (0);
}
