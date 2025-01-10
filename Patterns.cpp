#include <iostream>
using namespace std;

// Function prototypes
void SquarePatternNumber(int n);
void SquarePatternStars(int n);
void SquarePatternLetters(int n);
void SquarePatternContinuousNumbers(int n);
void SquarePatternContinuousLetters(int n);
void TriangleStars(int n);
void TriangleNumbers(int n);
void TriangleIncreasingNumbers(int n);
void ReverseTriangle(int n);
void FloydsTriangle(int n);
void InvertedTriangle(int n);
void PyramidPattern(int n);
void HollowDiamond(int n);
void ButterflyPattern(int n);
void TreePattern(int n);
void BoatPattern(int n);

int main() {
    int choice, n;

    cout << "Pattern Printing Program\n";
    cout << "Enter the size of the pattern (n > 0): ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input! Size must be greater than 0.\n";
        return 1;
    }
    while (true)
    {

    cout << "\nSelect a pattern to print:\n";
    cout << "1. Square with numbers\n";
    cout << "2. Square with stars\n";
    cout << "3. Square with letters\n";
    cout << "4. Square with continuous numbers\n";
    cout << "5. Square with continuous letters\n";
    cout << "6. Triangle with stars\n";
    cout << "7. Triangle with numbers\n";
    cout << "8. Triangle with increasing numbers\n";
    cout << "9. Reverse triangle\n";
    cout << "10. Floyd's triangle\n";
    cout << "11. Inverted triangle\n";
    cout << "12. Pyramid pattern\n";
    cout << "13. Hollow diamond\n";
    cout << "14. Butterfly pattern\n";
    cout << "15. Tree pattern\n";
    cout << "16. Boat pattern\n";
    cout << "17. Exit\n";
    cout << "18. Clear Screen\n";
    cout << "Enter your choice (1-18): ";
    cin >> choice;

    cout << endl;

        switch (choice) {
        case 1: SquarePatternNumber(n); break;
        case 2: SquarePatternStars(n); break;
        case 3: SquarePatternLetters(n); break;
        case 4: SquarePatternContinuousNumbers(n); break;
        case 5: SquarePatternContinuousLetters(n); break;
        case 6: TriangleStars(n); break;
        case 7: TriangleNumbers(n); break;
        case 8: TriangleIncreasingNumbers(n); break;
        case 9: ReverseTriangle(n); break;
        case 10: FloydsTriangle(n); break;
        case 11: InvertedTriangle(n); break;
        case 12: PyramidPattern(n); break;
        case 13: HollowDiamond(n); break;
        case 14: ButterflyPattern(n); break;
        case 15: TreePattern(n); break;
        case 16: BoatPattern(n); break;
        case 17: return 0; break;
        case 18:system("cls"); break;
        default: cout << "Invalid choice!\n";
        }
    }
    return 0;
}

// Function implementations

void SquarePatternNumber(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << j;
        }
        cout << endl;
    }
}

void SquarePatternStars(int n) {
    for (int i = 0; i < n; i++) {
        cout << string(n, '*') << endl;
    }
}

void SquarePatternLetters(int n) {
    for (int i = 0; i < n; i++) {
        char ch = 'A';
        for (int j = 0; j < n; j++) {
            cout << ch++;
        }
        cout << endl;
    }
}

void SquarePatternContinuousNumbers(int n) {
    int num = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << num++;
        }
        cout << endl;
    }
}

void SquarePatternContinuousLetters(int n) {
    char ch = 'A';
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << ch++;
        }
        cout << endl;
    }
}

void TriangleStars(int n) {
    for (int i = 1; i <= n; i++) {
        cout << string(i, '*') << endl;
    }
}

void TriangleNumbers(int n) {
    for (int i = 1; i <= n; i++) {
        cout << string(i, char('0' + i)) << endl;
    }
}

void TriangleIncreasingNumbers(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }
}

void ReverseTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = i; j > 0; j--) {
            cout << j;
        }
        cout << endl;
    }
}

void FloydsTriangle(int n) {
    int num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            cout << num++ << " ";
        }
        cout << endl;
    }
}

void InvertedTriangle(int n) {
    for (int i = n; i > 0; i--) {
        cout << string(i, '*') << endl;
    }
}

void PyramidPattern(int n) {
    for (int i = 1; i <= n; i++) {
        cout << string(n - i, ' ') << string(2 * i - 1, '*') << endl;
    }
}

void HollowDiamond(int n) {
    for (int i = 1; i <= n; i++) {
        cout << string(n - i, ' ');
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << ((j == 1 || j == 2 * i - 1) ? '*' : ' ');
        }
        cout << endl;
    }
    for (int i = n - 1; i > 0; i--) {
        cout << string(n - i, ' ');
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << ((j == 1 || j == 2 * i - 1) ? '*' : ' ');
        }
        cout << endl;
    }
}

void ButterflyPattern(int n) {
    for (int i = 1; i <= n; i++) {
        cout << string(i, '*') << string(2 * (n - i), ' ') << string(i, '*') << endl;
    }
    for (int i = n; i > 0; i--) {
        cout << string(i, '*') << string(2 * (n - i), ' ') << string(i, '*') << endl;
    }
}

void TreePattern(int n) {
    for (int i = 1; i <= n; i++) {
        cout << string(n - i, ' ') << string(2 * i - 1, '*') << endl;
    }
    for (int i = 1; i <= n / 2; i++) {
        cout << string(n - 1, ' ') << "***" << endl;
    }
}

void BoatPattern(int n) {
    for (int i = 1; i <= n; i++) {
        cout << string(n - i, ' ') << string(2 * i - 1, '*') << endl;
    }
    for (int i = n; i > 0; i--) {
        cout << string(n - i, ' ') << string(2 * i - 1, '*') << endl;
    }
}
