#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main()
{
    // Open the webcam for video capture
    VideoCapture cap(0);
    if (!cap.isOpened())
    {
        cout << "Failed to open the webcam." << endl;
        return -1;
    }

    // Create a window to display the compressed output
    namedWindow("Compressed Output", WINDOW_NORMAL);

    // Read and process frames from the webcam
    while (true)
    {
        Mat frame;
        cap.read(frame);

        if (frame.empty())
            break;

        // Compress the frame
        vector<uchar> buf;
        vector<int> params;
        params.push_back(IMWRITE_JPEG_QUALITY);
        params.push_back(50); // Adjust compression level as needed
        imencode(".jpg", frame, buf, params);
        Mat compressed_frame = imdecode(buf, IMREAD_COLOR);

        // Display the compressed output in a separate window
        imshow("Compressed Output", compressed_frame);

        // Display the original frame in the default window
        imshow("Original Frame", frame);

        // Check for the 'q' key to exit the loop
        if (waitKey(1) == 'q')
            break;
    }

    // Release the VideoCapture object
    cap.release();

    // Destroy any OpenCV windows
    destroyAllWindows();

    return 0;
}
