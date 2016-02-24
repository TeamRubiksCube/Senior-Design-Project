#include "vision.h"
#include <unistd.h>
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/core/core.hpp"
#include "opencv2/opencv.hpp"
#include "opencv/cv.h"


#define COLOR_WHITE 0
#define COLOR_RED 1
#define COLOR_GREEN 2
#define COLOR_YELLOW 3
#define COLOR_ORANGE 4
#define COLOR_BLUE 5

#define NUM_COMNMAND_LINE_ARGUMENTS 2
#define CAMERA_FRAME_WIDTH 640
#define CAMERA_FRAME_HEIGHT 360
#define CAMERA_FORMAT CV_8UC1
#define CAMERA_FPS 30
#define CAMERA_BRIGHTNESS .125
#define CAMERA_CONTRAST .125
#define CAMERA_SATURATION .6
#define CAMERA_HUE 0
#define CAMERA_GAIN 0
#define CAMERA_EXPOSURE -6
#define CAMERA_CONVERT_RGB false



Vision::Vision()
{

}

/*
int Vision::assign_color(Mat image, int x, int y)
{

     Vec3b bgrPixel[5][5];
     int lowest = 999;
     int chosen_color = 0;
     int sum = 0;
     int average[3] = {0, 0, 0};

     //int r[6] = {173, 138,  14, 169, 232,  0};
     //int g[6] = {183,  41, 137, 188, 106,  67};
     //int b[6] = {192,   6,  74,  98,  32, 175};

     int r[6] = {170, 110,  14, 130, 5,  35};
     int g[6] = {190,  30, 137, 140, 5,  25};
     int b[6] = {210,  20,  74,  70, 5,  70};



     for (int c = 0; c < 5; c++)
     {
         for (int f = 0; f < 5; f++)
         {
             bgrPixel[c][f] = image.at<Vec3b>(y + c - 2, x + f - 2);
         }
     }

     for (int v = 0; v < 5; v++)
     {
         for (int w = 0; w < 5; w++)
         {
             average[0] += bgrPixel[v][w].val[0];
             average[1] += bgrPixel[v][w].val[1];
             average[2] += bgrPixel[v][w].val[2];
         }
     }

     average[0] = average[0]/25;
     std::cout << average[0]<< ", ";
     average[1] = average[1] / 25;
     std::cout << average[1] << ", ";
     average[2] = average[2] / 25;
     std::cout << average[2];
     std::cout << std::endl;
     std::cout << std::endl;

     if (abs(average[0] - average[2]) < 13 &&  abs(average[0] - average[1]) < 13 &&  abs(average[2] - average[1]) < 13 && (average[0] + average[1] + average[2])/3 < 80)
     {
         chosen_color = 4;
     }
     else
     for (int i = 0; i < 6; i++)
     {

         sum = 0;
         sum += abs( average[0] - b[i]);
         sum += abs( average[1] - g[i]);
         sum += abs( average[2] - r[i]);

         if (sum < lowest)
         {
                 lowest = sum;
                 chosen_color = i;
         }
     }
     //std::cerr << chosen_color << std::endl;
     //return chosen_color;
     return  chosen_color;
}
*/
double Vision::normSqr(double x1, double y1, double z1, double x2, double y2, double z2)
{
    return (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2) + (z1 - z2)*(z1 - z2);
}

int Vision::assign_color(Mat image, int x, int y)
{
    Rect myROI( x - 3, y - 3, 7, 3);
    Mat imageIn = image(myROI);
    //imshow("Rect", imageIn);
    //waitKey();
    // split the BGR image into individual channels
    Mat img_b(imageIn.rows, imageIn.cols, CV_8UC1);
    Mat img_g(imageIn.rows, imageIn.cols, CV_8UC1);
    Mat img_r(imageIn.rows, imageIn.cols, CV_8UC1);
    Mat channels[] = {img_b, img_g, img_r};
    split(imageIn, channels);

    // compute the overall intensity for each pixel as (b + g + r)
    Mat intensity(imageIn.rows, imageIn.cols, CV_32F);
    add(img_b, img_g, intensity);
    add(intensity, img_r, intensity);
    intensity = intensity / 3.0;

    // compute the normalized color values for each channel
    Mat norm_b = img_b / intensity;
    Mat norm_g = img_g / intensity;
    Mat norm_r = img_r / intensity;

    // compute the average normalized color value of each channel
    double avg_b = cv::mean(norm_b)[0];
    double avg_g = cv::mean(norm_g)[0];
    double avg_r = cv::mean(norm_r)[0];

    // print the color values to console
    std::printf("B: %f     G: %f     R: %f \n", avg_b, avg_g, avg_r);

    // define the reference color values

    double RED[] = {0.0, 0.5, 3.0};
    double GREEN[] = {.5, 2.5, .0};
    double BLUE[] = {2.5, 0.7, 0.0};
    double YELLOW[] = {0.0, 2, 1};
    double ORANGE[] = {0.0, 1.0, 2.0};
    double WHITE[] = {2.0, 2.0, 2.0};
    double YELLOW2[] = {0.0, 2.0, 2.0};
    double ORANGE2[] = {0.0, 2.0, 3.0};


    /*
    double RED[][3] = {{0.0, 1.0, 2.0},{0.0, 1.0, 2.0},{0.0, 0.3, 3.0},{0.0, 1.0, 2.0}};
    double GREEN[][3] = {{.5, 2.5, .0},{.5, 2.5, .0} ,{.5, 2.5, .0},{.5, 2.5, .0}};
    double BLUE[][3] = {{2.0, 1.0, 0.0}, {2.0, 1.0, 0.0}, {2.0, 1.0, 0.0}, {2.0, 1.0, 0.0}};
    double YELLOW[][3] = {{0.0, 2.0, 1.0}, {0.0, 2.0, 1.0}, {0.0, 3.0, 3.0}, {0.0, 2.0, 1.0}};
    double ORANGE[][3] = {{0.0, 2.0, 3.0}, {0.0, 1.0, 2.5}, {0.0, 1.0, 3.0}, {0.0, 1.0, 3.0}};
    double WHITE[][3] = {{2.0, 2.0, 2.0}, {1.0, 1.0, 1.0}, {2.0, 2.0, 2.0}, {1.0, 1.0, 1.0}};
    */

    // compute the squerror relative to the reference color values
    double minError = 10.0;
    double errorSqr;
    char bestFit = 'x';
   // int bestFit = 9999;

    // check RED fitness
    errorSqr = normSqr(RED[0], RED[1], RED[2], avg_b, avg_g, avg_r);
    if(errorSqr < minError)
    {
        minError = errorSqr;
        bestFit = COLOR_RED;
    }
    // check GREEN fitness
    errorSqr = normSqr(GREEN[0], GREEN[1], GREEN[2], avg_b, avg_g, avg_r);
    if(errorSqr < minError)
    {
            minError = errorSqr;
        bestFit = COLOR_GREEN;
    }
    // check BLUE fitness
    errorSqr = normSqr(BLUE[0], BLUE[1], BLUE[2], avg_b, avg_g, avg_r);
    if(errorSqr < minError)
    {
        minError = errorSqr;
        bestFit = COLOR_BLUE;
    }
    // check YELLOW fitness
    errorSqr = normSqr(YELLOW[0], YELLOW[2], YELLOW[2], avg_b, avg_g, avg_r);
    if(errorSqr < minError)
    {
        minError = errorSqr;
        bestFit = COLOR_YELLOW;
    }
    errorSqr = normSqr(YELLOW2[0], YELLOW2[2], YELLOW2[2], avg_b, avg_g, avg_r);
    if(errorSqr < minError)
    {
        minError = errorSqr;
        bestFit = COLOR_YELLOW;
    }
    // check ORANGE fitness
    errorSqr = normSqr(ORANGE[0], ORANGE[1], ORANGE[2], avg_b, avg_g, avg_r);
    if(errorSqr < minError)
    {
        minError = errorSqr;
        bestFit = COLOR_ORANGE;
    }
    errorSqr = normSqr(ORANGE2[0], ORANGE2[1], ORANGE2[2], avg_b, avg_g, avg_r);
    if(errorSqr < minError)
    {
        minError = errorSqr;
        bestFit = COLOR_ORANGE;
    }
    // check WHITE fitness
    errorSqr = normSqr(WHITE[0], WHITE[1], WHITE[2], avg_b, avg_g, avg_r);
    if(errorSqr < minError)
    {
        minError = errorSqr;
        bestFit = COLOR_WHITE;
    }
    errorSqr = normSqr(1.0, 1.0, 1.0, avg_b, avg_g, avg_r);
    if(errorSqr < minError && abs(avg_b - avg_r) < .3 && abs(avg_g - avg_r < .3) && abs(avg_g - avg_b < .3))
    {
        minError = errorSqr;
        bestFit = COLOR_WHITE;
    }

    // return the best fit color label
    return bestFit;

}

void Vision::get_array(int faces[6][9])
{

  Mat image0;
  Mat image1;
  Mat image2;
  Mat image3;

  Mat filtered, denoised;


  {
  VideoCapture cap0(0);
  //cap0.set(CV_CAP_PROP_BRIGHTNESS, CAMERA_BRIGHTNESS);
  //cap0.set(CV_CAP_PROP_CONTRAST, CAMERA_CONTRAST);
  cap0.set(CV_CAP_PROP_SATURATION, CAMERA_SATURATION);
  //cap0.set(CV_CAP_PROP_CONTRAST, CAMERA_CONTRAST);
  /*
  cap0.set(CV_CAP_PROP_BRIGHTNESS, CAMERA_BRIGHTNESS);

  cap0.set(CV_CAP_PROP_HUE, CAMERA_HUE);
  cap0.set(CV_CAP_PROP_GAIN, CAMERA_GAIN);
  cap0.set(CV_CAP_PROP_EXPOSURE, CAMERA_EXPOSURE);
  */
  cap0 >> image0;
    //imshow("Image 0", image0);

  }


  {
  VideoCapture cap1(1);
  //cap1.set(CV_CAP_PROP_BRIGHTNESS, CAMERA_BRIGHTNESS);
  //cap1.set(CV_CAP_PROP_CONTRAST, CAMERA_CONTRAST);
  cap1.set(CV_CAP_PROP_SATURATION, CAMERA_SATURATION);
  /*
  cap1.set(CV_CAP_PROP_BRIGHTNESS, CAMERA_BRIGHTNESS);
  cap1.set(CV_CAP_PROP_CONTRAST, CAMERA_CONTRAST);
  cap1.set(CV_CAP_PROP_HUE, CAMERA_HUE);
  cap1.set(CV_CAP_PROP_GAIN, CAMERA_GAIN);
  cap1.set(CV_CAP_PROP_EXPOSURE, CAMERA_EXPOSURE);
  */
  cap1 >> image1;
  //imshow("Image 1", image1);

  }


  {

  VideoCapture cap2(2);
  cap2.set(CV_CAP_PROP_SATURATION, CAMERA_SATURATION);
  //cap2.set(CV_CAP_PROP_BRIGHTNESS, CAMERA_BRIGHTNESS);
  //cap2.set(CV_CAP_PROP_CONTRAST, CAMERA_CONTRAST);
  /*
  cap2.set(CV_CAP_PROP_HUE, CAMERA_HUE);
  cap2.set(CV_CAP_PROP_GAIN, CAMERA_GAIN);
  cap2.set(CV_CAP_PROP_EXPOSURE, CAMERA_EXPOSURE);
  */
  cap2 >> image2;
  /*imshow("Image 2", image2);
  bilateralFilter(image2, filtered, 3, 75, 75, BORDER_DEFAULT);
  imshow("Filtered", filtered);
  fastNlMeansDenoisingColored(filtered, denoised, 3, 10, 7, 21);
  imshow("Denoised", denoised);*/
  }


  {
  VideoCapture cap3(3);
  //cap3.set(CV_CAP_PROP_BRIGHTNESS, CAMERA_BRIGHTNESS);
  //cap3.set(CV_CAP_PROP_CONTRAST, CAMERA_CONTRAST);
  cap3.set(CV_CAP_PROP_SATURATION, CAMERA_SATURATION);
  /*

  cap3.set(CV_CAP_PROP_HUE, CAMERA_HUE);
  cap3.set(CV_CAP_PROP_GAIN, CAMERA_GAIN);
  cap3.set(CV_CAP_PROP_EXPOSURE, CAMERA_EXPOSURE);
  */
  cap3 >> image3;
  //imshow("Image 3", image3);
 // waitKey(1);
  }




  //all this stuff gets manually filled out
  std::cout <<"Image 0" << std::endl;
  faces[0][1] = assign_color( image0, 363, 62);
  faces[0][2] = assign_color( image0, 293, 94);
  faces[0][5] = assign_color( image0, 227, 58);
  faces[2][0] = assign_color( image0, 330, 156);
  faces[2][1] = assign_color( image0, 395, 114);
  faces[2][2] = assign_color( image0, 445, 85);
  faces[2][3] = assign_color( image0, 327, 235);
  faces[2][6] = assign_color( image0, 321, 293);
  faces[4][0] = assign_color( image0, 140, 94);
  faces[4][1] = assign_color( image0, 193, 119);
  faces[4][2] = assign_color( image0, 256, 156);
  faces[4][5] = assign_color( image0, 265, 237);
  faces[4][8] = assign_color( image0, 270, 294);
/*
  std::cout <<"Image 0 Modified" << std::endl;
  faces[0][1] = assign_color( denoised, 363, 62, 0);
  faces[0][2] = assign_color( denoised, 293, 94, 0);
  faces[0][5] = assign_color( denoised, 227, 58, 0);
  faces[2][0] = assign_color( denoised, 330, 156, 0);
  faces[2][1] = assign_color( denoised, 395, 114, 0);
  faces[2][2] = assign_color( denoised, 445, 85, 0);
  faces[2][3] = assign_color( denoised, 327, 235, 0);
  faces[2][6] = assign_color( denoised, 321, 293, 0);
  faces[4][0] = assign_color( denoised, 140, 94, 0);
  faces[4][1] = assign_color( denoised, 193, 119, 0);
  faces[4][2] = assign_color( denoised, 256, 156, 0);
  faces[4][5] = assign_color( denoised, 265, 237, 0);
  faces[4][8] = assign_color( denoised, 270, 294, 0);
*/

  std::cout << "Image 1" << std::endl;
  faces[3][0] = assign_color( image1, 313, 282 );
  faces[3][1] = assign_color( image1, 319, 227 );
  faces[3][2] = assign_color( image1, 324, 152);
  faces[3][5] = assign_color( image1, 388, 110);
  faces[3][8] = assign_color( image1, 441, 68);
  faces[4][3] = assign_color( image1, 216, 49);
  faces[4][6] = assign_color( image1, 286, 86);
  faces[4][7] = assign_color( image1, 358, 51);
  faces[5][2] = assign_color( image1, 138, 79 );
  faces[5][5] = assign_color( image1, 187, 111 );
  faces[5][6] = assign_color( image1, 259, 282 );
  faces[5][7] = assign_color( image1, 257, 226 );
  faces[5][8] = assign_color( image1, 250, 150);

  std::cout << "Image 2" << std::endl;
  faces[0][0] = assign_color( image2, 191, 13);
  faces[0][3] = assign_color( image2, 246, 47);
  faces[0][6] = assign_color( image2, 320, 81);
  faces[0][7] = assign_color( image2, 385, 45);
  faces[0][8] = assign_color( image2, 422, 19);
  faces[1][0] = assign_color( image2, 163, 73);
  faces[1][1] = assign_color( image2, 216, 111);
  faces[1][2] = assign_color( image2, 284, 149);
  faces[1][5] = assign_color( image2, 287, 224);
  faces[1][8] = assign_color( image2, 288, 278);
  faces[5][0] = assign_color( image2, 356, 148);
  faces[5][1] = assign_color( image2, 420, 103);
  faces[5][3] = assign_color( image2, 349, 224);


  std::cout << "Image 3" << std::endl;
  faces[1][3] = assign_color( image3, 219, 50);
  faces[1][6] = assign_color( image3, 291, 93 );
  faces[1][7] = assign_color( image3, 360, 51 );
  faces[2][5] = assign_color( image3, 182, 109 );
  faces[2][7] = assign_color( image3, 249, 228 );
  faces[2][8] = assign_color( image3, 252, 155 );
  faces[3][3] = assign_color( image3, 385, 109 );
  faces[3][6] = assign_color( image3, 324, 151 );
  faces[3][7] = assign_color( image3, 313, 227 );


  for (int v = 0; v < 6; v++)
  {
      faces[v][4] = v;
  }
 /*
  for (int d = 0; d < 6; d++)
  {
      for (int o = 0; o < 9; o++)
      {
          sum[ faces[d][o] ] += 1;
      }
  }


  for (int h = 0; h < 6; h++)
  {
      if (sum[h] != 9)
      {
            //std::cerr << "Color reading error..." << std::endl;
      }
  }
  */


}




