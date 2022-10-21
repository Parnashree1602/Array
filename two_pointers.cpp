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
// TC =O(N^2), SC =O(1)
ll triplet(ll a[], ll n, ll sum)
{
  sort(a, a + n);
  for (ll i = 0; i < n - 2; i++)
  {
    ll l = i + 1, r = n - 1;
    while (l < r)
    {
      if (a[i] + a[l] + a[r] == sum)
      {
        cout << a[i] << " " << a[l] << " " << a[r] << " " << endl;
        break; // prints all possible triplets if u want 1 then try with flag variable.
      }
      else if (a[i] + a[l] + a[r] < sum)
      {
        l++;
      }
      else if (a[i] + a[l] + a[r] > sum)
      {
        r--;
      }
    }
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
  ll sum;
  cin >> sum;
  triplet(a, n, sum);
  return 0;
}