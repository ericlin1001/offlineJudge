int sumDigits(long n)
{
    int remain, sum=0;
    if (n < 0) n = -n;
    remain = n % 10;
    while (remain>0)
    {
        remain = n % 10;
        n = (n - remain) / 10;
        sum += remain;
    }
    return sum;
}