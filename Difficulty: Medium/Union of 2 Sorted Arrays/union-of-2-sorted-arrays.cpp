class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        int n1 = a.size();
        int n2 = b.size();
        int i = 0, j = 0;
        vector<int> unionArr;

        while (i < n1 && j < n2) {
            if (a[i] <= b[j]) {
                if (unionArr.size() == 0 || unionArr.back() != a[i]) {
                    unionArr.push_back(a[i]);
                }
                i++;
            } else {
                if (unionArr.size() == 0 || unionArr.back() != b[j]) {
                    unionArr.push_back(b[j]);
                }
                j++;
            }
        }

        // Add remaining elements from a
        while (i < n1) {
            if (unionArr.size() == 0 || unionArr.back() != a[i]) {
                unionArr.push_back(a[i]);
            }
            i++;
        }

        // Add remaining elements from b
        while (j < n2) {
            if (unionArr.size() == 0 || unionArr.back() != b[j]) {
                unionArr.push_back(b[j]);
            }
            j++;
        }

        return unionArr;
    }
};
