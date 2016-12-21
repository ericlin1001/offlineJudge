void swap(long & i, long & j)
{
    i = i^j;
    j = i^j;
    i = i^j;
}