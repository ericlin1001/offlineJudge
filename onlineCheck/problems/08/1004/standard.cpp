#include<iostream>
using namespace std;

bool isLeap(int year)
{
    return (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0));
}

int getYear(long& second)
{
    int thisYear = 1970;
    long secondOfThisYear;
    secondOfThisYear = 365 * 24 * 3600 + 24 * 3600 * isLeap(thisYear);
    while (second >= secondOfThisYear)
    {
        second -= secondOfThisYear;
        thisYear++;
        secondOfThisYear = 365 * 24 * 3600 + 24 * 3600 * isLeap(thisYear);
    }
    return thisYear;
}
int getMonth(long& second, int year)
{
    int thisMonth = 0;
    int dayOfMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if (isLeap(year))
        dayOfMonth[1] = 29;

    long secondOfThisMonth = dayOfMonth[thisMonth] * 24 * 3600;

    while (second >= secondOfThisMonth)
    {
        second -= secondOfThisMonth;
        thisMonth++;
        secondOfThisMonth = dayOfMonth[thisMonth] * 24 * 3600;
    }
    return thisMonth+1;
}

int getPeriod(long& second, int onePeriod)
{
    int period;
    period = second / onePeriod;
    second = second % onePeriod;
    return period;
}

int main()
{
    long second;
    int cases, year;
    cin >> cases;
    for (int i = 1; i <= cases; i++)
    {
        cin >> second;
        year = getYear(second);
        cout << year << "-";
        cout << getMonth(second, year) << "-";
        cout << getPeriod(second, 24 * 3600) + 1 << endl;
        cout << getPeriod(second, 3600) << ":";
        cout << getPeriod(second, 60) << ":";
        cout << second << endl;
    }
}