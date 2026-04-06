#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    // n kids, m puzzles. First kid gets piece 1.
    // Each subsequent kid gets the next piece from whichever half.
    // The answer is: first kid always gets 1, then alternately from left/right.
    // Simpler: kid i (1-indexed) gets piece ceil(m/2) - (i-1) from left, or from right.
    // Actually: distribute m pieces to n kids round-robin from both ends.
    // Kid 1 gets piece 1 (leftmost), Kid 2 gets piece m (rightmost), etc.
    // Output: for each kid, how many pieces? floor(m/n) each, first (m%n) kids get one extra.
    // But the problem just asks how many pieces each kid receives.

    // Re-reading: output the index of the puzzle piece each child gets.
    // Child 1 gets piece 1. Each subsequent child gets the next one clockwise.
    // It's a circle: pieces 1..m in order, each child picks the next available.
    // Child i gets piece i (if i <= m), else wraps... but n <= m is guaranteed? No.
    // Problem: n children, m pieces in a row. Vasya takes one, gives neighbors pieces
    // such that each child gets floor or ceil of m/n.

    // Actual problem: n kids stand in line. Kid 1 gets piece 1 (guaranteed).
    // Output each kid's piece number if they get exactly floor(m/n) pieces,
    // with first (m mod n) kids getting one extra — but it's about WHICH piece.
    // Actually the problem outputs just one number per kid: the last piece they receive.
    // Let's just implement: assign pieces left to right greedily.
    int base = m / n, extra = m % n;
    int pos = 1;
    for (int i = 0; i < n; i++) {
        int pieces = base + (i < extra ? 1 : 0);
        cout << pos << "\n";  // first piece this kid gets
        pos += pieces;
    }
    return 0;
}
