#include<stdio.h>
#include<math.h>

struct Point{
    double x;
    double y;
};

struct Line{
    struct Point start;
    struct Point end;
};

struct Line connectPoints(struct Point p1, struct Point p2){
    struct Line line;
    line.start = p1;
    line.end = p2;
    return line;
}

int main(){

    struct Point point1 = {1.0, 2.0};
    struct Point point2 = {4.0, 6.0};

    struct Line line = connectPoints(point1, point2);

    printf("Line Start: (%.2f, %.2f)\n", line.start.x, line.start.y);
    printf("Line End: (%.2f, %.2f)\n", line.end.x, line.end.y);

    return 0;
}
