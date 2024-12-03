#include <bits/stdc++.h>
using namespace std;

// Part 1
/*
int main() {
    vector<int> arr1;
    vector<int> arr2;

    ifstream inputFile("day1input.txt");
    if (!inputFile) {
        cerr << "Error opening file.\n";
        return 1;
    }

    int num1, num2;
    while (inputFile >> num1 >> num2) {
        arr1.push_back(num1); 
        arr2.push_back(num2); 
    }

    inputFile.close();

    cout << "array1 :" << " ";
    for (int i=0; i<arr1.size(); i++){
        cout << arr1[i] << " ";
    }
    cout << endl;

    cout << "array2 :" << " ";
    for (int i=0; i<arr2.size();i++){
        cout << arr2[i] << " ";
    }
    cout << endl; 

    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    int diff;
    int sum = 0;
    for (int i=0; i<arr1.size();i++){
        diff = abs(arr1[i]-arr2[i]);
        sum = sum + diff;
    }

    cout << sum << " ";
    return sum;
}*/

//Part 2

int main(){

    vector<int> arr1;
    vector<int> arr2;

    ifstream inputFile("day1input.txt");
    if (!inputFile) {
        cerr << "Error opening file.\n";
        return 1;
    }

    int num1, num2;
    while (inputFile >> num1 >> num2) {
        arr1.push_back(num1); 
        arr2.push_back(num2); 
    }

    inputFile.close();

    int x;
    int count;
    int score;
    int sum = 0;
    for (int i=0; i<arr1.size(); i++){
        x = arr1[i];
        count = 0;

        for (int j=0; j<arr2.size(); j++){
            if (x==arr2[j]){
                count += 1;
            }
        }
        score = x * count;
        sum += score;
    }

    cout << sum << " ";
    return 0;
}