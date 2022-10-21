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
ll max_profit(ll a[], ll n)
{
  ll maxprofit = 0;
  ll profit = 0;
  ll mins = a[0]; // min element so far
  for (ll i = 0; i < n; i++)
  {
    mins = min(mins, a[i]);
    profit = a[i] - mins;
    maxprofit = max(profit, maxprofit);
  }
  cout << maxprofit << endl;
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
  max_profit(a, n);
  return 0;
}