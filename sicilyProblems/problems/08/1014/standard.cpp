int reverse(int n)
{
    int reversed = 0, remainder = 0, minus = 1;
    if (n < 0)
    {
        minus = -1;
        n = -n;
    }
    while (n > 0)
    {
        remainder = n % 10;
        n = (n - remainder) / 10;
        reversed = reversed * 10 + remainder;
    }
    return minus*reversed;
}