#include "mylabel.h"
#include "dialog.h"
#include "ui_dialog.h"
#include <iostream>
#include <QMouseEvent>

// publlic variable
static int w =949;
static int h = 498;
QImage image(w, h, QImage::Format_RGB32);
QImage image2(w, h, QImage::Format_RGB32);
QImage img;
QImage imageChoice; // to identify which image we are drawing boxes on
QImage *imgChoice;

MyLabel::MyLabel(QWidget *parent) : QLabel(parent) //constructer
{
    setColor1();
    setColor2();
    setImage3();
}

void MyLabel::mousePressEvent(QMouseEvent *ev){

   // std::cout<< "\n x =" << ev->x() << " y=" << ev->y();
    this->x1 = ev->x();
    this->y1 = ev->y();

}

void MyLabel::mouseReleaseEvent(QMouseEvent *ev){
   // std::cout<< "\nRelease point x =" << ev->x() << " y=" << ev->y();
    this->x2 = ev->x();
    this->y2 = ev->y();

    QRgb value;
    value = qRgb(0,0,0);

    if(x1>x2)
        std::swap(x1,x2);
    if(y1>y2)
        std::swap(y1,y2);

    if(imageChoice==image){
        for(int i=x1; i<x2;i++)
        {
            for(int j =y1; j<y2; j++){
                image.setPixel(i,j,value); //should change pixel colors

            }
        }
        setPixmap(QPixmap::fromImage(image));
        show();
    }
    else if(imageChoice==image2){
        for(int i=x1; i<x2;i++)
        {
            for(int j =y1; j<y2; j++){
                image2.setPixel(i,j,value); //should change pixel colors

            }
        }
        setPixmap(QPixmap::fromImage(image2));
        show();
    }
    else if(imageChoice==img){
        for(int i=x1; i<x2;i++)
        {
            for(int j =y1; j<y2; j++){
                img.setPixel(i,j,value); //should change pixel colors

            }
        }
        setPixmap(QPixmap::fromImage(img));
        show();
    }
    /*
     * for(int i=x1; i<x2;i++)
        {
            for(int j =y1; j<y2; j++){
                imgChoice->setPixel(i,j,value); //should change pixel colors

            }
        }
        setPixmap(QPixmap::fromImage(*imgChoice));
        show(); */


}
 void MyLabel::setColor1(){
     QRgb value;
     value = qRgb(255,101,10);
     for(int i=0; i<w; i++)
     {
         for(int j =0; j<h; j++)
             image.setPixel(i,j,value);
     }
}

QImage MyLabel:: getColor1(){
    return image;
}
void MyLabel::setColor2(){

   QRgb value;
   value = qRgb(200,10, 200);
   for(int i=0; i<w; i++)
   {
       for(int j =0; j<h; j++)
           image2.setPixel(i,j,value);
   }

}
QImage MyLabel:: getColor2(){
    return image2;
}

void MyLabel::setImage3(){

    img.load("C:/Users/damir/Documents/Computer Graphics/DisplayDialogV3/clip.png");

}
QImage MyLabel::getimage3()
{
    return img;
}
void MyLabel::setImageChoice(QImage c){ // recieves image from dialog toggle
    imageChoice = c;
}

void MyLabel::setImgChoice(QImage c)
{
    imgChoice = &c;
}
