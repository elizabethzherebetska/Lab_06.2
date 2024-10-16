#include <iostream>
#include <vector>

using namespace std;


void calculateOddSumAndCount(const vector<int>& a, int index, int& sum, int& count) {
    
    if (index >= a.size()) {
        return;
    }

    
    if (a[index] % 2 != 0) {
        sum += a[index]; 
        count++;         
    }

    
    calculateOddSumAndCount(a, index + 1, sum, count);
}


double calculateOddAverage(const vector<int>& a) {
    int sum = 0;   
    int count = 0; 

    
    calculateOddSumAndCount(a, 0, sum, count);

    
    if (count == 0) {
        return 0;
    }

    
    return static_cast<double>(sum) / count;
}

int main() {
   
    vector<int> a = { 1, 4, 7, 10, 13, 16, 19 };

    
    double average = calculateOddAverage(a);

   
    cout << "Arithmetic average of odd elements: " << average << endl;

    return 0;
}
