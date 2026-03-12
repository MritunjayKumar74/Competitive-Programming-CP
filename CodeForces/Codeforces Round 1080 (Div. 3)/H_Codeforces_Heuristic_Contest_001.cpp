#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;

        // Maximum number of triangles
        int m = 3 * n * n;
        cout << m << "\n";

        // We tile the 3n x 3n grid with blocks of size 6 (height) x 8 (width)
        // Coordinates will stay inside [1, 3n]
        // Step sizes
        int W = 8;
        int H = 6;

        for (int i = 0; i + H <= 3 * n; i += H) {
            for (int j = 0; j + W <= 3 * n; j += W) {
                int x = j + 1;
                int y = i + 1;

                // Triangle 1
                cout << x     << " " << y
                     << " " << x + 4 << " " << y
                     << " " << x     << " " << y + 6 << "\n";

                // Triangle 2
                cout << x + 4 << " " << y
                     << " " << x + 4 << " " << y + 6
                     << " " << x     << " " << y + 6 << "\n";

                // Triangle 3
                cout << x + 4 << " " << y + 6
                     << " " << x + 8 << " " << y + 6
                     << " " << x + 8 << " " << y << "\n";
            }
        }
    }

    return 0;
}