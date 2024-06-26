#include <iostream>
#include <map>
using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore();

    while (T--) {
        int n, k;
        cin >> n >> k;

        map<int, pair<int, int>> input;

        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            if (input.find(num) == input.end()) {
                input[num] = {i, i}; 
            } else {
                input[num].second = i; 
            }
        }

        for (int j = 0; j < k; j++) {
            int a, b;
            cin >> a >> b;

            string ans = "NO";

            if (input.find(a) != input.end() && input.find(b) != input.end()) {
                if (input[a].first < input[b].second) {
                    ans = "YES";
                }
            }

            cout << ans << endl;
        }
    }
}
