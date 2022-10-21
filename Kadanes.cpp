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
// TC =O(N), SC =O(1)
ll max_sum(ll a[], ll n)
{
  ll maxsum = 0;
  ll cursum = 0;
  for (ll i = 0; i < n; i++)
  {
    cursum += a[i];
    if (cursum > maxsum)
    {
      maxsum = cursum;
    }
    if (cursum < 0)
    {
      cursum = 0;
    }
  }
  cout << maxsum << endl;
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
  max_sum(a, n);
  return 0;
}