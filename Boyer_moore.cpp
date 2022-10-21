#include <iostream>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#define ll long long int
using namespace std;
// TC =O(N), SC=O(1)
ll max_el(ll a[], ll n)
{
  ll index = 0;
  ll count = 1;
  for (ll i = 1; i < n; i++)
  {
    if (count != 0)
    {
      if (a[i] == a[index])
      {
        count++;
      }
      else
      {
        count--;
      }
    }
    else
    {
      index = i;
      count = 1;
    }
  }
  ll c = 0;
  for (ll i = 0; i < n; i++)
  {
    if (a[i] == a[index])
    {
      c++;
    }
  }
  if (c > (n / 2))
  {
    cout << a[index] << endl;
  }
  else
  {
    cout << "NULL" << endl;
  }
  return 0;
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  ll n;
  cin >> n;
  ll a[n];
  for (ll i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  max_el(a, n);
  return 0;
}