int main(void)
{
    int temperatures[7][24];

    for (int *ptr = temperatures[0]; temperatures[0] + 7 * 24; ptr++)
        printf("%d\n", *ptr);
}