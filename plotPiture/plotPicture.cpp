#include<iostream>
#include<opencv2\opencv.hpp>
using namespace cv;
using namespace std;
int main()
{	
	cv::Mat dispMat=imread("1.png",3);
	cv::Mat dispMat1 = imread("1.png",3);
	cv::Mat dispMat2 = imread("1.png",3);
	cv::Point pt;
	pt.x = 100;
	pt.y = 100;
	circle(dispMat, pt, 30, CV_RGB(255, 0, 0), 1, 8, 0);
	cv::Point pt1;
	pt1.x = 100;
	pt1.y = 100;
	cv::Point pt2;
	pt2.x = 0;
	pt2.y = 0;
	line(dispMat1, pt1, pt2, CV_RGB(255, 0, 0), 1, 8, 0);
	cv::Rect rect;
	rect.x = 100;
	rect.y = 100;
	rect.width=60;
	rect.height=60;
	rectangle(dispMat2, rect, CV_RGB(255, 0, 0), 1, 8, 0);
	imshow("dispmat1",dispMat);
	imshow("dispmat2", dispMat1);
	imshow("dispmat3", dispMat2);
	waitKey(0);
	system("pause");
}