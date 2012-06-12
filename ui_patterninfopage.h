/********************************************************************************
** Form generated from reading UI file 'patterninfopage.ui'
**
** Created: Tue Jun 12 16:54:48 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATTERNINFOPAGE_H
#define UI_PATTERNINFOPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGraphicsView>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QWidget>
#include <QtGui/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_PatternInfoPage
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *widthLabel;
    QLineEdit *width;
    QLabel *heightLabel;
    QLineEdit *height;
    QGraphicsView *sampleImage;

    void setupUi(QWizardPage *PatternInfoPage)
    {
        if (PatternInfoPage->objectName().isEmpty())
            PatternInfoPage->setObjectName(QString::fromUtf8("PatternInfoPage"));
        PatternInfoPage->resize(400, 300);
        widget = new QWidget(PatternInfoPage);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(9, 15, 325, 246));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 20, 30, 0);
        widthLabel = new QLabel(widget);
        widthLabel->setObjectName(QString::fromUtf8("widthLabel"));

        gridLayout->addWidget(widthLabel, 0, 0, 1, 1);

        width = new QLineEdit(widget);
        width->setObjectName(QString::fromUtf8("width"));

        gridLayout->addWidget(width, 0, 1, 1, 1);

        heightLabel = new QLabel(widget);
        heightLabel->setObjectName(QString::fromUtf8("heightLabel"));

        gridLayout->addWidget(heightLabel, 1, 0, 1, 1);

        height = new QLineEdit(widget);
        height->setObjectName(QString::fromUtf8("height"));

        gridLayout->addWidget(height, 1, 1, 1, 1);

        sampleImage = new QGraphicsView(widget);
        sampleImage->setObjectName(QString::fromUtf8("sampleImage"));
        sampleImage->setMaximumSize(QSize(400, 200));
        sampleImage->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(sampleImage, 2, 1, 1, 1);


        retranslateUi(PatternInfoPage);

        QMetaObject::connectSlotsByName(PatternInfoPage);
    } // setupUi

    void retranslateUi(QWizardPage *PatternInfoPage)
    {
        PatternInfoPage->setWindowTitle(QApplication::translate("PatternInfoPage", "WizardPage", 0, QApplication::UnicodeUTF8));
        widthLabel->setText(QApplication::translate("PatternInfoPage", "Board width", 0, QApplication::UnicodeUTF8));
        heightLabel->setText(QApplication::translate("PatternInfoPage", "Board height", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PatternInfoPage: public Ui_PatternInfoPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATTERNINFOPAGE_H
