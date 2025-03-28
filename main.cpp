#include <iostream>
using namespace std;
//prob1
/*int main() {
    int n, sum = 0, num;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        sum += num;
    }
    cout << "sum=" << sum << endl;
    return 0;
    }*/
//prob2
/* double findAverage(int arr[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return sum / size;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << findAverage(arr, n) << endl;
    return 0;
}*/

//prob3
/*int findMin(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] < min)
            min = arr[i];
    return min;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Min=" << findMin(arr, n) << endl;
    return 0;
}*/

//prob4
/*int indexOfLargestElement(double array[], int size) {
    if (size <= 0) return -1;
    int maxIndex = 0;
    for (int i = 1; i < size; i++)
        if (array[i] >= array[maxIndex])
            maxIndex = i;
    return maxIndex;
}

int main() {
    double arr[15];
    for (int i = 0; i < 15; i++)
        cin >> arr[i];
    cout << indexOfLargestElement(arr, 15) << endl;
    return 0;
}*/

//prob5
/*bool strictlyEqual(const int list1[], const int list2[], int size) {
    for (int i = 0; i < size; i++)
        if (list1[i] != list2[i])
            return false;
    return true;
}

int main() {
    int n;
    cin >> n;
    int list1[n], list2[n];
    for (int i = 0; i < n; i++) cin >> list1[i];
    for (int i = 0; i < n; i++) cin >> list2[i];

    if (strictlyEqual(list1, list2, n))
        cout << "Two lists are strictly identical" << endl;
    else
        cout << "Two lists are not strictly identical" << endl;
    return 0;
} */

//prob6
/*int main() {
    int freq[26] = {0};
    char ch;
    while (cin >> ch && ch != '0') {
        if (ch >= 'a' && ch <= 'z')
            freq[ch - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0)
            cout << (char)(i + 'a') << ": " << freq[i] << endl;
    }
    return 0;
} */

//prob7
/*int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}*/

//prob8
/*int main() {
    int freq[7] = {0};
    srand(time(0));
    for (int i = 0; i < 10000; i++) {
        int roll = rand() % 6 + 1;
        freq[roll]++;
    }
    for (int i = 1; i <= 6; i++)
        cout << i << ": " << freq[i] << endl;
    return 0;
}*/

//prob9
/*void reverseArray(int arr[], int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    reverseArray(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}*/

//prob10
/*bool isSorted(int arr[], int n) {
    for (int i = 1; i < n; i++)
        if (arr[i] < arr[i - 1])
            return false;
    return true;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    if (isSorted(arr, n))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}*/
