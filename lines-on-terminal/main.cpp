#include <bits/stdc++.h>
using dbl = double;


struct Point{
  dbl x = 0,y = 0;
  Point() : x(0),y(0){}
  Point(dbl in_x,dbl in_y) : x(in_x),y(in_y){}
};
class Graph(){
  std::unordered_map<string,Point> points;
  public:
    void add_point(Point& pt,string name)points[name] = pt;
    void rem_point(string &name)points.erase(name);
}

int main(){

}
