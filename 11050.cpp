#include <iostream>
using namespace std;

int iterative_factorial(int n)
{
  int res = 1;
  for (int i = 1; i <= n; i++)
    res *= i;

  return res;
}

int recursive_factorial(int n)
{
  if (n == 1 || n == 0)
    return 1;
  else
    return recursive_factorial(n - 1) * n;
}

int main(void)
{
  int N, K;
  cin >> N >> K;
  
  int res = iterative_factorial(N) / (recursive_factorial(K) * recursive_factorial(N - K));
  cout << res;

  return 0;
}
