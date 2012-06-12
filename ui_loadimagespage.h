/********************************************************************************
** Form generated from reading UI file 'loadimagespage.ui'
**
** Created: Tue Jun 12 16:54:49 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADIMAGESPAGE_H
#define UI_LOADIMAGESPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>
#include <QtGui/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_LoadImagesPage
{
public:
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QPushButton *load;
    QListWidget *images;
    QFrame *frame;
    QToolButton *addImage;
    QToolButton *removeImage;

    void setupUi(QWizardPage *LoadImagesPage)
    {
        if (LoadImagesPage->objectName().isEmpty())
            LoadImagesPage->setObjectName(QString::fromUtf8("LoadImagesPage"));
        LoadImagesPage->resize(400, 300);
        layoutWidget = new QWidget(LoadImagesPage);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 0, 339, 353));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setContentsMargins(20, 20, 60, 0);
        load = new QPushButton(layoutWidget);
        load->setObjectName(QString::fromUtf8("load"));

        formLayout->setWidget(1, QFormLayout::LabelRole, load);

        images = new QListWidget(layoutWidget);
        images->setObjectName(QString::fromUtf8("images"));
        images->setMinimumSize(QSize(0, 250));

        formLayout->setWidget(1, QFormLayout::FieldRole, images);

        frame = new QFrame(layoutWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(0, 20));
        frame->setMaximumSize(QSize(100, 24));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        addImage = new QToolButton(frame);
        addImage->setObjectName(QString::fromUtf8("addImage"));
        addImage->setGeometry(QRect(0, 0, 25, 19));
        removeImage = new QToolButton(frame);
        removeImage->setObjectName(QString::fromUtf8("removeImage"));
        removeImage->setGeometry(QRect(30, 0, 25, 19));

        formLayout->setWidget(2, QFormLayout::FieldRole, frame);


        retranslateUi(LoadImagesPage);
        QObject::connect(load, SIGNAL(clicked()), LoadImagesPage, SLOT(loadImages()));
        QObject::connect(removeImage, SIGNAL(clicked()), LoadImagesPage, SLOT(removeImage()));
        QObject::connect(addImage, SIGNAL(clicked()), LoadImagesPage, SLOT(addImage()));

        QMetaObject::connectSlotsByName(LoadImagesPage);
    } // setupUi

    void retranslateUi(QWizardPage *LoadImagesPage)
    {
        LoadImagesPage->setWindowTitle(QApplication::translate("LoadImagesPage", "WizardPage", 0, QApplication::UnicodeUTF8));
        load->setText(QApplication::translate("LoadImagesPage", "Load images", 0, QApplication::UnicodeUTF8));
        addImage->setText(QApplication::translate("LoadImagesPage", "+", 0, QApplication::UnicodeUTF8));
        removeImage->setText(QApplication::translate("LoadImagesPage", "-", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class LoadImagesPage: public Ui_LoadImagesPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADIMAGESPAGE_H
