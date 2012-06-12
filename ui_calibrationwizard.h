/********************************************************************************
** Form generated from reading UI file 'calibrationwizard.ui'
**
** Created: Tue Jun 12 16:54:48 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALIBRATIONWIZARD_H
#define UI_CALIBRATIONWIZARD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWizard>

QT_BEGIN_NAMESPACE

class Ui_CalibrationWizard
{
public:

    void setupUi(QWizard *CalibrationWizard)
    {
        if (CalibrationWizard->objectName().isEmpty())
            CalibrationWizard->setObjectName(QString::fromUtf8("CalibrationWizard"));
        CalibrationWizard->resize(400, 480);
        CalibrationWizard->setMinimumSize(QSize(320, 480));

        retranslateUi(CalibrationWizard);

        QMetaObject::connectSlotsByName(CalibrationWizard);
    } // setupUi

    void retranslateUi(QWizard *CalibrationWizard)
    {
        CalibrationWizard->setWindowTitle(QApplication::translate("CalibrationWizard", "Calibration wizard", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CalibrationWizard: public Ui_CalibrationWizard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALIBRATIONWIZARD_H
