#include "dot.hpp"
#include <FL/fl_draw.H>
void dot::draw(){
  fl_color(color());
  fl_pie(x(),y(),r,r,0,360); 
}

//Konstuktører
dot::dot(float _x, float _y, float _r) : 
  is_vector(_x,_y), has_color(true), r{_r}
{
  animated::t=1;
}

dot::dot(float _x, float _y, float _r, Color c) :
  is_vector(_x,_y), has_color(c), r{_r}
{
  animated::t=1;
}

dot::~dot(){
}

void dot::clear(){
  fl_color(FL_BLACK);
  fl_pie(x(),y(),r,r,0,360);
}

void dot::operator++(){
  if(t%5 == 0)
    darken_color();
  t++;
  increment_position();
  draw();
}

void dot::reset(){
  is_vector::reset();
  draw();
}
