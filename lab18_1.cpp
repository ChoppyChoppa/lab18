#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect r1, Rect r2){
    double left1   = r1.x;
    double right1  = r1.x + r1.w;
    double top1    = r1.y;
    double bottom1 = r1.y - r1.h;

    double left2   = r2.x;
    double right2  = r2.x + r2.w;
    double top2    = r2.y;
    double bottom2 = r2.y - r2.h;

    double overlapW  = min(right1, right2) - max(left1, left2);
    double overlapH = min(top1, top2) - max(bottom1, bottom2);

    if (overlapW <= 0 || overlapH <= 0)
        return 0;

    return overlapW * overlapH;
}
