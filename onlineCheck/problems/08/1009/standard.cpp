double pi(int n)
{
    double pi =0;
    for (int i = 0; i <= n; i++)
    {
        pi += 4 * 1.0 / (2 * i + 1)*(i % 2 ? -1 : 1);
    }
    return pi;
}