#include <iostream>
using namespace std;

void getTwoValues(int begin, int end);
int getNextPrime(int begin);
int getPrevPrime(int end);

void getTwoValues(int begin, int end){
    cout << "Enter start and end integers(begin < end): ";
    cin >> begin >> end;
    while (begin >= end) {
        cout << "start value must be less than end value!" << endl;
        cout << "Enter start and end integers: ";
        cin >> begin >> end;
    }
}

int getNextPrime(int begin) {
    begin +=1;
    while (true) {
        bool isPrime = true;
        
        for (int i = 2; i * i <= begin; i++) {
            if (begin % i == 0) {
                isPrime = false;
                break;
            }
        }
        
        if(isPrime) {
            return begin;
        }
        begin +=1;
    }
}

int getPrevPrime(int end) {
    end -=1;
    while (true) {
        bool isPrime = true;
        
        for (int i = 2; i * i <= end; i++) {
            if (end % i == 0) {
                isPrime = false;
                break;
            }
        }
        
        if(isPrime) {
            return end;
        }
        end -=1;
    }
}