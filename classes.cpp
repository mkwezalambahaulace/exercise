#include <iostream>

class Rectangle {
private:
    float length; // Length of the rectangle
    float width;  // Width of the rectangle

public:
    // Default constructor initializes both member variables to zero
    Rectangle() : length(0.0), width(0.0) {}

    // Accessor methods for assigning values to length and width
    void setLength(float len) {
        length = len;
    }

    void setWidth(float wid) {
        width = wid;
    }

    // Accessor methods for retrieving values from length and width
    float getLength() const {
        return length;
    }

    float getWidth() const {
        return width;
    }

    // Calculate and return the area of the rectangle
    float calculateArea() const {
        return length * width;
    }

    // Destructor (does nothing for now)
    ~Rectangle() {
        // No specific cleanup needed
    }
};

int main() {
    // Create an instance of Rectangle
    Rectangle myRectangle;

    // Set length and width using accessor methods
    myRectangle.setLength(5.0);
    myRectangle.setWidth(3.0);

    // Retrieve length and width using accessor methods
    double length = myRectangle.getLength();
    double width = myRectangle.getWidth();

    // Calculate and display the area
    double area = myRectangle.calculateArea();
    std::cout << "Rectangle with length " << length << " and width " << width
              << " has an area of " << area << std::endl;

    return 0;
}