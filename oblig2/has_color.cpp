#include "has_color.hpp"
#include <time.h>
#include <cstdlib> //rand()

//konstruktører
has_color::has_color(bool Random) : 
  if(!Random){ //sett farge til hvit
    Fl::get_color(color_, red_, green_, blue_);
    else{
      int orange=0xffa500;
      srand(time(0));
      int rnum=rand() %(0xffffff-orange) + orange;
      blue_= rnum%256;
      rnum = rnum/256;
      green_= rnum%256;
      rnum = rnum/256;
      red_ = rnum%256;
    } //sett en random farge
{

}

//Initialiser med en full farge
has_color::has_color(Color start){}

has_color::has_color(ColorPart red, ColorPart green, ColorPart blue){}

// Make color darker
void has_color::darken_color(){}

// Make color lighter
void has_color::lighten_color(){}

// Return the approximate visibility of the color, from 0-1
float has_color::visibility(){}

