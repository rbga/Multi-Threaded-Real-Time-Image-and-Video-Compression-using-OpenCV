# Multi Threaded Real-Time Image and Video Compression using OpenCV

This project demonstrates real-time image and video compression using OpenCV in C++. It provides an interactive application that allows the user to choose between image or video compression, specify the compression level, and visualize the results.

## Features

- **Image Compression:**
  - Allows the user to select an image file for compression.
  - Supports multi-threading for efficient compression.
  - Calculates the compression percentage and displays it on the compressed image.
  - Displays the original and compressed images side by side.

- **Video Compression:**
  - Utilizes the webcam as the video source for compression.
  - Implements multi-threading to enable real-time compression while capturing frames.
  - Calculates the compression percentage for each frame and displays it on the video window.
  - Provides separate windows for displaying the original video and the compressed output.

## Prerequisites

- C++ compiler supporting C++11 or later.
- OpenCV library (version 2.4 or later) installed.
- Webcam connected to the system (for video compression).

## Usage

1. Clone the repository or download the project files.

2. Ensure that OpenCV is properly installed and configured.

3. Compile the project using a C++ compiler with the OpenCV library linked. For example, using g++:

4. Run the compiled executable.

5. The program will prompt you to choose between image or video compression. Enter your choice accordingly.

6. If you selected **image compression**:
- Enter the compression level as a percentage (e.g., 50 for 50% compression).
- The program will display the original and compressed images side by side, along with the compression percentage.

7. If you selected **video compression**:
- Enter the compression level as a percentage (e.g., 50 for 50% compression).
- The program will open two windows: "Original Video" and "Compressed Output".
- The "Original Video" window displays the real-time video feed from the webcam.
- The "Compressed Output" window displays the compressed video with the compression percentage overlayed on each frame.
- Press 'q' to exit the program.

## Notes

- **Image Compression:**
- The input image file should be in a supported format (e.g., JPEG, PNG).
- Adjust the compression level to balance between image quality and file size.

- **Video Compression:**
- Ensure that the webcam is properly connected and accessible by the program.
- Adjust the compression level to control the trade-off between video quality and file size.
- The frame rate of the compressed video is the same as the frame rate of the webcam feed.

## License

This project is licensed under the [MIT License](LICENSE).

## Simulation

### Initial Prompt

![1689528134313](https://github.com/rbga/Real-Time-Image-and-Video-Compression-using-OpenCV/assets/75168756/f96aeca7-4d9f-434e-83d6-df38af9344e2)

### Image Compression

![1689528151793](https://github.com/rbga/Real-Time-Image-and-Video-Compression-using-OpenCV/assets/75168756/39b71303-31aa-4b72-ac96-73daa9bdac42)

### Live Webcam Video Compression

![1689528143695](https://github.com/rbga/Real-Time-Image-and-Video-Compression-using-OpenCV/assets/75168756/9c5cb7b1-5650-4d38-8df6-8a040f442995)




Contributions to this project are welcome! If you find any issues or have suggestions for improvement, please create an issue or submit a pull request.

## Acknowledgments

This project utilizes the power of OpenCV to enable real-time image and video compression. Special thanks to the OpenCV community for their fantastic work.
