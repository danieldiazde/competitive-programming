#include <bits/stdc++.h>
using namespace std;

#define nl "\n"
#define ll long long

vector<int> primes;
vector<int> order; //In here we will store the regular numbers
int N, Q;


void visit(ll current_node_value, int smallest_prime_index) {
    order.push_back((int)current_node_value);

    //We walk throught the primes

    for (int i = smallest_prime_index; i<primes.size() ;++i) {

        if (current_node_value * primes[i] > N) break; 

        visit(current_node_value * primes[i], i);

    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    cin >> N >> Q;

    //You have to use a graph, where each children is a hierarchy and you make children by appending more primes

    //[]      -> 1
    //[2]     -> 2
    //[2,2]   -> 4
    //[2,2,2] -> 8
    //[2,3]   -> 6
    //[2,5]   -> 10
    //[3]     -> 3
    //[3,3]   -> 9
    //[5]     -> 5
    //[7]     -> 7

    // becomes

/*                    [] (= 1)
                   /           \    \      \
              [2]=2          [3]=3  [5]=5  [7]=7
        /      |     \            |
     [2,2]=4 [2,3]=6 [2,5]=10  [3,3]=9
          |
       [2,2,2]=8 */
//You read the graph as a DFS algorithm

//First we use a Sieve of erasthothenes to find all the primes
vector<bool> is_prime(N + 1, true);
is_prime[0] = is_prime[1] = false;
for (int i = 2 ; (ll)i*i <= N; ++i) {
    if (is_prime[i]) {
        for (int j = i * i; j <= N; j+=i){
            is_prime[j] = false;
        }
    }
}
for (int i = 2; i <=N; ++i) {
    if (is_prime[i]) primes.push_back(i);
}

//In our graph, to go from a parent to a child, we go bu multypying the parent by a prime that is >= to the parent
// child = parent x prime, where prime >= biggest prime already in parent
// for parent 4, biggest parent in parent 4 = 2x2 is 2, so primes are allowed for p >= 2


visit(1, 0);
vector<int> queries;
int q;
for (int i = 0; i < Q; ++i) {
    cin >> q;
    queries.push_back(q);
}

for (int x : queries) {
    cout << order[x - 1] << nl;
}



    
return 0;

}