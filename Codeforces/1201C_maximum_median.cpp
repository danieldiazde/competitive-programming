#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    ll k;
    cin >> n >> k;

    vector<ll> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int median_index = n / 2;
    ll count = 1; //We need to count how many times numbers we need to make up the difference

    for (int i = median_index + 1; i < n; i++) {
        ll diff = arr[i] - arr[i - 1]; //The right one - the left one
        ll needed = diff * count; //How much we need in that iteration for each one we have passed

        if (k >= needed) { //We can do it
            k -= needed; //We get rid of it
            count++; //Increase the number we will need
        } else { //We failed, we increase the median
            cout << arr[i - 1] + k / count << "\n"; //We increase as much as possible the last element to the left (witch would be the value of the median) with a floor division
            return 0;
        }
    }

    cout << arr[n - 1] + k / count << "\n"; //If we updated everythgin and we still have everything, we update last element as much as possible
}