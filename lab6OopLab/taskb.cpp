//Coded, Designed and Developed by Muhammad Saim 23-0708


#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring> // Include <cstring> for memcpy
using namespace std;
class Image {
private:
    int width;
    int height;
    int* imageData;

public:
    // Constructor
    Image(int w, int h, int* data) : width(w), height(h) {
        imageData = new int[width * height];
        memcpy(imageData, data, width * height * sizeof(int));
    }

    // Copy constructor
    Image(const Image& other) : width(other.width), height(other.height) {
        imageData = new int[width * height];
        memcpy(imageData, other.imageData, width * height * sizeof(int));
    }

    // Destructor
    ~Image() {
        delete[] imageData;
    }

    // Display function
    void display() const {
        cout << "Image Data:" << endl;
        for (int i = 0; i < height; ++i) {
            for (int j = 0; j < width; ++j) {
                cout << imageData[i * width + j] << " ";
            }
            cout << endl;
        }
    }

    // Update data function
    void updateData() {
        srand(time(nullptr));
        for (int i = 0; i < width * height; ++i) {
            if (imageData[i] <= 0) {
                imageData[i] = rand() % 255 + 1; // Random value between 1 and 255
            }
        }
    }
};

int main() {
    // Sample image data
    int sampleData[] = {1, -2, 3, 4, -5, 6};

    // Create an Image object with dimensions 2x3 and initialize it with sample data
    Image originalImage(2, 3, sampleData);

    // Create a copy of the original image
    Image copiedImage = originalImage;

    // Display data of both original and copied images
    cout << "Original Image:" << endl;
    originalImage.display();
    cout << endl;
    cout << "Copied Image:" << endl;
    copiedImage.display();
    cout << endl;

    // Update data and display again
    originalImage.updateData();
    copiedImage.updateData();

    cout << "Original Image after update:" << endl;
    originalImage.display();
    cout << endl;
    cout << "Copied Image after update:" << endl;
    copiedImage.display();
    

    return 0;
}
