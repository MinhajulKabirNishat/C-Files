
int main()
{
    int i, num, rev = 0;
    printf("Enter any number to check palindrome: ");
    scanf("%d", &i);
    num = i;
    while(i != 0)
    {
        rev = (rev * 10) + (i % 10);
        i=i/10;
    }
    if(rev == num)
    {
        printf("%d is palindrome.", num);
    }
    else
    {
        printf("%d is not palindrome.", num);
    }

    return 0;
}
