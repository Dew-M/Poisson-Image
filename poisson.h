#ifndef POISSON_H
#define POISSON_H
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <cv.h>
#include <vector>
#include <opencv2/highgui.hpp>
#include <opencv2/opencv.hpp>
#include "type.h"
using namespace cv;
class Poisson
{
private:
	const float PI = 3.14159;
	Mat* gradient;
	Mat* srcImg;
	Mat* addImg;
	Mat tmp;

	int begin;
	int end;
	int width;
	int height;
	int iterTimes;
	void mkTempCos(int m, int n);
	void calculate(int i,int j);
	void run_normal();
	void run_gradient();
	void cal_gradient();
public:
	Poisson();
	void set(Mat* src,Mat* add, int times,int x,int y,int w,int h);
	// iterTimes��������
	Mat* run(Type type);
	
};
#endif