/********************************************************************************
** Form generated from reading UI file 'undistort.ui'
**
** Created: Tue Jun 12 16:54:48 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UNDISTORT_H
#define UI_UNDISTORT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Undistort
{
public:
    QFrame *line;
    QWidget *layoutWidget;
    QFormLayout *formLayout_3;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *undistort;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *camParam;
    QPushButton *loadParam;
    QLabel *label_2;
    QLineEdit *initialImg;
    QPushButton *loadImage;

    void setupUi(QDialog *Undistort)
    {
        if (Undistort->objectName().isEmpty())
            Undistort->setObjectName(QString::fromUtf8("Undistort"));
        Undistort->resize(355, 243);
        line = new QFrame(Undistort);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 60, 341, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        layoutWidget = new QWidget(Undistort);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 10, 309, 47));
        formLayout_3 = new QFormLayout(layoutWidget);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_4);

        undistort = new QPushButton(Undistort);
        undistort->setObjectName(QString::fromUtf8("undistort"));
        undistort->setGeometry(QRect(260, 180, 75, 23));
        layoutWidget1 = new QWidget(Undistort);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 100, 317, 54));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        camParam = new QLineEdit(layoutWidget1);
        camParam->setObjectName(QString::fromUtf8("camParam"));

        gridLayout->addWidget(camParam, 0, 1, 1, 1);

        loadParam = new QPushButton(layoutWidget1);
        loadParam->setObjectName(QString::fromUtf8("loadParam"));

        gridLayout->addWidget(loadParam, 0, 2, 1, 1);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        initialImg = new QLineEdit(layoutWidget1);
        initialImg->setObjectName(QString::fromUtf8("initialImg"));

        gridLayout->addWidget(initialImg, 1, 1, 1, 1);

        loadImage = new QPushButton(layoutWidget1);
        loadImage->setObjectName(QString::fromUtf8("loadImage"));

        gridLayout->addWidget(loadImage, 1, 2, 1, 1);

        layoutWidget->raise();
        layoutWidget->raise();
        line->raise();
        undistort->raise();

        retranslateUi(Undistort);

        QMetaObject::connectSlotsByName(Undistort);
    } // setupUi

    void retranslateUi(QDialog *Undistort)
    {
        Undistort->setWindowTitle(QApplication::translate("Undistort", "Undistort", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Undistort", "Image undistortion", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Undistort", "Specify the file containg the camera parameters and the image \n"
" to undistort", 0, QApplication::UnicodeUTF8));
        undistort->setText(QApplication::translate("Undistort", "Undistort", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Undistort", "Camera parameters", 0, QApplication::UnicodeUTF8));
        loadParam->setText(QApplication::translate("Undistort", "Browse", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Undistort", "Initial image", 0, QApplication::UnicodeUTF8));
        loadImage->setText(QApplication::translate("Undistort", "Load", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Undistort: public Ui_Undistort {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UNDISTORT_H
