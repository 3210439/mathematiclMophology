#include<opencv2/opencv.hpp>
#include<iostream>
using namespace cv;
using namespace std;

int main()
{
	Mat src, dst, erosion_dst, dilation_dst;
	src = imread("./lenna.jpg", IMREAD_GRAYSCALE);

	threshold(src, dst, 127, 255, THRESH_BINARY);
	imshow("dst", dst);

	Mat element = getStructuringElement(MORPH_RECT, // 형태소 생성
		Size(3, 3),
		Point(-1, -1)); 

	erode(dst, erosion_dst, element);
	imshow("Erosion Demo", erosion_dst);

	dilate(dst, dilation_dst, element);
	imshow("Dilate Demo", dilation_dst);
	waitKey(0);
	return 0;
}