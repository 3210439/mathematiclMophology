#include<opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int main()
{
	Mat src, dst, open, close;
	src = imread("./lenna.jpg", IMREAD_GRAYSCALE);

	imshow("src", src);

	Mat element = getStructuringElement(MORPH_RECT, Size(5, 5));
	morphologyEx(src, open, MORPH_GRADIENT, element);
	imshow("Gradient Demo", open);
	waitKey();
	return 0;
}