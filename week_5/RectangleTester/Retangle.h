#pragma once

//Length and Width of rectangle
class Rectangle{
    private:
    double length = 0;
    double width = 0;

    //Values of lenght and width of the rectangle
    public:
    void setLength(double userlength){length = userlength;};

    void setWidth(double userWidth){width = userWidth;};

    //Determine the values for the rectangle
    void getline(){return length;};

    void getline(){return width;};

    //Calculated Area
    double getArea(){
        double area = (length * width);
        return area;
    }
};