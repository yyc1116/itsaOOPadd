#include <iostream>
#include <cmath>

using namespace std;

// Function to calculate the square of the distance between two points
int dist2(int x1, int y1, int x2, int y2) {
    return (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
}

// Function to calculate the dot product of vectors AB and BC to check for right angle
int dotProduct(int x1, int y1, int x2, int y2, int x3, int y3) {
    int abx = x2 - x1;
    int aby = y2 - y1;
    int bcx = x3 - x2;
    int bcy = y3 - y2;
    return abx * bcx + aby * bcy;
}

// Function to determine if a point is within the valid range
bool isValidCoordinate(int x, int y) {
    return x >= -1000 && x <= 1000 && y >= -1000 && y <= 1000;
}

int main() {
    int x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    // Check if all coordinates are valid
    if (!isValidCoordinate(x1, y1) || !isValidCoordinate(x2, y2) ||
        !isValidCoordinate(x3, y3) || !isValidCoordinate(x4, y4)) {
        cout << "invalid" << endl;
        return 0;
    }

    // Calculate the squared distances of all sides
    int d2_12 = dist2(x1, y1, x2, y2);
    int d2_23 = dist2(x2, y2, x3, y3);
    int d2_34 = dist2(x3, y3, x4, y4);
    int d2_41 = dist2(x4, y4, x1, y1);

    // Calculate the squared distances of the diagonals
    int d2_13 = dist2(x1, y1, x3, y3);
    int d2_24 = dist2(x2, y2, x4, y4);

    // Check for a square or rectangle by verifying equal sides and right angles
    bool isSquare = (d2_12 == d2_23 && d2_23 == d2_34 && d2_34 == d2_41 &&
                     dotProduct(x1, y1, x2, y2, x3, y3) == 0 &&
                     dotProduct(x2, y2, x3, y3, x4, y4) == 0 &&
                     dotProduct(x3, y3, x4, y4, x1, y1) == 0);

    bool isRectangle = (d2_12 == d2_34 && d2_23 == d2_41 &&
                        dotProduct(x1, y1, x2, y2, x3, y3) == 0 &&
                        dotProduct(x2, y2, x3, y3, x4, y4) == 0 &&
                        dotProduct(x3, y3, x4, y4, x1, y1) == 0);

    // Check for a rhombus (diamond) by verifying equal sides but not necessarily right angles
    bool isDiamond = (d2_12 == d2_23 && d2_23 == d2_34 && d2_34 == d2_41);

    // Check for a parallelogram by verifying opposite sides are equal
    bool isParallelogram = (d2_12 == d2_34 && d2_23 == d2_41);

    if (isSquare) {
        cout << "square" << endl;
    } else if (isRectangle) {
        cout << "rectangle" << endl;
    } else if (isDiamond) {
        cout << "diamond" << endl;
    } else if (isParallelogram) {
        cout << "parallelogram" << endl;
    } else {
        cout << "others" << endl;
    }

    return 0;
}
