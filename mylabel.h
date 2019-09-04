#ifndef MYLABEL_H
#define MYLABEL_H
#include <QLabel>



class MyLabel : public QLabel
{
    Q_OBJECT
public:
    MyLabel(QWidget *parent = nullptr);
    void mousePressEvent(QMouseEvent *ev);
    void mouseReleaseEvent(QMouseEvent *ev);

    void setColor1();
    void setColor2();
    void setImage3();
    void setImageChoice(QImage);
    void setImgChoice(QImage c);
    QImage getColor1();
    QImage getColor2();
    QImage getimage3();


   // QImage imageChoice;
    int x1,y1,x2,y2;
//private slots:

};

#endif // MYLABEL_H
