#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    int n, q;
    cin >> n >> q;

    // create vector of vectors
    vector<vector<int>> arr(n);

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        arr[i].resize(k);

        for (int j = 0; j < k; j++)
        {
            int elem;
            cin >> elem;
            arr[i][j] = elem; // or just cin >> a[i][j]
        }
    }


    // accessing  an item in row i and column j (i.e. the jth element in the ith array)
    // with q being the number of queries 
    for (int quer = 0; quer < q; quer++)
    {
        int i, j;
        cin >> i >> j;
        cout << arr[i][j] << endl;
    }

    return 0;
}