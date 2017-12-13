#include <iostream>
using namespace std;

class Shape { // important class because of all of the other shapes being inhereted from this and broken down.
   private:// private will let you inherant everything? wouldn't we only need one private then?
      float width_;
   public:
      void setWidth(float width){ width_ = width; } 
      float getWidth() { return width_; }
      float area() { return width_;}
};

class Rectangle : public Shape { //inhereted class of shape
   private: //:inheretance operator
      float height_;
   public: // do we need to have multiple publics if we are having a public from shape?
      void setLength(float height,float width) { height_ = height; setWidth(width); } /
      float getHeight() { return height_; }
      float area() { return height_ * getWidth(); }
      float perimeter() { return height_*2 + getWidth()*2; }
};

class Circle : public Shape {
    public:
       float area() { return 3.14 * getWidth()*getWidth(); }
       float circumference() { return 2 * 3.14 * getWidth(); }
};

int main()
{
    Shape s;
    Rectangle r;
    Circle c;
    
    s.setWidth(10);
    r.setLength(10, 2);
    c.setWidth(10);
    
    cout<<"Shape area: "<<s.area()<<endl;
    cout<<"Rectangle area: "<<r.area()<<endl;
    cout<<"Circle area: "<<c.area()<<endl;
    
    cout<<"Rectangle perimeter: "<<r.perimeter()<<endl;
    cout<<"Circle circumference: "<<c.circumference()<<endl;
    
}

//Mark with //* 2-4 items that are important
//Mark with //? 2-4 items that are incorrect, unclear or you have questions about.