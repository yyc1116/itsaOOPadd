#include <iostream>
#include <vector>
#include <cmath>
#include <limits>

struct Point {
    int x, y;
};

double distance(const Point& a, const Point& b) {
    return std::sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

int main() {
    int N;
    std::cin >> N;

    std::vector<Point> points(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> points[i].x >> points[i].y;
    }

    double minOffset = std::numeric_limits<double>::max();
    Point center = { std::numeric_limits<int>::max(), std::numeric_limits<int>::max() };

    for (int i = 0; i < N; ++i) {
        double maxDistance = 0;
        for (int j = 0; j < N; ++j) {
            if (i != j) {
                maxDistance = std::max(maxDistance, distance(points[i], points[j]));
            }
        }
        if (maxDistance < minOffset || 
            (maxDistance == minOffset && (points[i].x < center.x || 
            (points[i].x == center.x && points[i].y < center.y)))) {
            minOffset = maxDistance;
            center = points[i];
        }
    }

    std::cout << center.x << " " << center.y << std::endl;

    return 0;
}
