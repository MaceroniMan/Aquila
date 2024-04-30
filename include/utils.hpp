
typedef struct point_struct Point;
struct point_struct {int x; int y;};

Point point(int xx, int yy){
  Point p;
  p.x = xx;
  p.y = yy;
  return p;
}