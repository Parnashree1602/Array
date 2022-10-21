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
// DUTCH NATIONAL FLAG sorting algorithm.(sort 0s 1s 2s)
// three pointers algorithm.
//  TC =O(N), SC =O(1)
ll dnf(ll a[], ll n)
{
  ll low = 0, mid = 0, high = n - 1;
  while (mid <= high)
  {
    switch (a[mid]) // we will use mid to propagate
    {
    case 0:
    {
      swap(a[low], a[mid]);
      low++;
      mid++;
      break;
    }
    case 1:
    {
      mid++;
      break;
    }
    case 2:
    {
      swap(a[high], a[mid]);
      high--;
      break;
      // here we do not increment mid bcz after swapping may b mid=0 (high=0 previously)..so we need to check on 0 also na.
    }
    }
  }
  for (ll i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
  cout << endl;
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
  dnf(a, n);
  return 0;
}