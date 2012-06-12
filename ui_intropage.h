/********************************************************************************
** Form generated from reading UI file 'intropage.ui'
**
** Created: Tue Jun 12 16:54:49 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTROPAGE_H
#define UI_INTROPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_IntroPage
{
public:

    void setupUi(QWizardPage *IntroPage)
    {
        if (IntroPage->objectName().isEmpty())
            IntroPage->setObjectName(QString::fromUtf8("IntroPage"));
        IntroPage->resize(400, 300);

        retranslateUi(IntroPage);

        QMetaObject::connectSlotsByName(IntroPage);
    } // setupUi

    void retranslateUi(QWizardPage *IntroPage)
    {
        IntroPage->setWindowTitle(QApplication::translate("IntroPage", "WizardPage", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class IntroPage: public Ui_IntroPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTROPAGE_H
