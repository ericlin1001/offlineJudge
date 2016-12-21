int gcd(int m, int n) 
{
  return (m > n) ? (n > 0) ? gcd(n, m%n) : m : (m > 0) ? gcd(m, n%m) : n; 
}