// Coded, Designed and Developed by Muhammad Saim 23-0708

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iomanip>
using namespace std;

class Image
{
private:
    int width;
    int height;
    int *imageData;

public:
    // Constructor
    Image(int widthh, int heightt, int *data) : width(widthh), height(heightt)
    {
        imageData = new int[width * height];
        // I am Copyingg data from input array to imageData
        memcpy(imageData, data, width * height * sizeof(int));
    }

    // Copy consTructor
    Image(const Image &other) : width(other.width), height(other.height)
    {
        imageData = new int[width * height];
        memcpy(imageData, other.imageData, width * height * sizeof(int));
    }

    ~Image()
    {
        delete[] imageData;
    }

    void display() const
    {
        cout << "Image data :" << endl;
        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < width; j++)
            {
                cout << setw(3) << imageData[i * width + j] << " ";
            }
            cout << endl;
        }
    }

    void updateData()
    {
        srand(time(nullptr));
        for (int i = 0; i < width * height; i++)
        {
            if (imageData[i] <= 0)
            {
                imageData[i] = rand() % 255 + 1;
            }
        }
    }
};

int main()
{
    int sampleData[] = {1, -6, 2, 4, 6, -1};

    Image originalImage(2, 3, sampleData);

    Image copiedImage = originalImage;

    cout << "Original Image:" << endl;
    originalImage.display();
    cout << endl;
    cout << "Copied Image:" << endl;
    copiedImage.display();
    cout << endl;

    originalImage.updateData();
    copiedImage.updateData();

    cout << "Original Image after the update is :" << endl;
    originalImage.display();
    cout << "\n";
    cout << "Copied Image after update:" << endl;
    copiedImage.display();

    return 0;
}
