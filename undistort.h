#ifndef UNDISTORT_H
#define UNDISTORT_H

#include <QDialog>

namespace Ui {
class Undistort;
}

class Undistort : public QDialog
{
    Q_OBJECT
    
public:
    explicit Undistort(QWidget *parent = 0);
    ~Undistort();

//public slots:
//    virtual void load();
//    virtual void browse();
//    virtual void undistort();
    
private:
    Ui::Undistort *ui;
};

#endif // UNDISTORT_H
