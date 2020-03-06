#include<iostream>
#include<opencv2\opencv.hpp>
using namespace cv;
using namespace std;
int main()
{	
	cv::OutputArray dispMat;
	cv::Point pt;
	pt.x = 10;
	pt.y = 10;
	circle(dispMat, pt, 5, CV_RGB(255, 0, 0), 1, 8, 0);
	cv::Point pt1;
	pt1.x = 10;
	pt1.y = 10;
	cv::Point pt2;
	pt2.x = 0;
	pt2.y = 0;
	line(dispMat, pt1, pt2, CV_RGB(255, 0, 0), 1, 8, 0);
	cv::Rect rect;
	rect.x = 10;
	rect.y = 10;
	rect.width;
	rect.height;
	rectangle(dispMat, rect, CV_RGB(255, 0, 0), 1, 8, 0);
	waitKey(0);
	system("pause");
	line()
}