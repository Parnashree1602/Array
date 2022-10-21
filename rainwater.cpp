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
// TC =O(N), SC =O(N)
ll max_trap(ll a[], ll n)
{
  ll maxleft = 0, maxright = 0, maxtrap = 0;
  ll left[n], right[n];
  for (ll i = 0; i < n; i++)
  {
    maxleft = max(maxleft, a[i]);
    left[i] = maxleft;
  }
  for (ll i = n - 1; i >= 0; i--)
  {
    maxright = max(maxright, a[i]);
    right[i] = maxright;
  }
  for (ll i = 0; i < n; i++)
  {
    maxtrap += (min(left[i], right[i])) - a[i];
  }
  cout << maxtrap << endl;
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
  max_trap(a, n);
  return 0;
}