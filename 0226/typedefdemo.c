#include <stdio.h>
#include <stdlib.h>

typedef struct point {
    float x;
    float y;
} point;

int main(int argc, char* argv[]) {
    point p;
    p.x = 1.0;
    p.y = 0.1;
    printf("%f, %f\n", p.x, p.y);

    point* q = (point*) malloc(sizeof(point));
    q->x = 2.0;
    q->y = 0.2;
    printf("%f, %f\n", q->x, q->y);
}
