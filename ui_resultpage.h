/********************************************************************************
** Form generated from reading UI file 'resultpage.ui'
**
** Created: Tue Jun 12 16:54:49 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULTPAGE_H
#define UI_RESULTPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>
#include <QtGui/QWidget>
#include <QtGui/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_ResultPage
{
public:
    QWidget *widget;
    QFormLayout *formLayout;
    QTextBrowser *results;
    QPushButton *save;

    void setupUi(QWizardPage *ResultPage)
    {
        if (ResultPage->objectName().isEmpty())
            ResultPage->setObjectName(QString::fromUtf8("ResultPage"));
        ResultPage->resize(400, 300);
        widget = new QWidget(ResultPage);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 40, 339, 194));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setContentsMargins(0, 20, 0, 20);
        results = new QTextBrowser(widget);
        results->setObjectName(QString::fromUtf8("results"));
        results->setEnabled(false);

        formLayout->setWidget(0, QFormLayout::LabelRole, results);

        save = new QPushButton(widget);
        save->setObjectName(QString::fromUtf8("save"));

        formLayout->setWidget(0, QFormLayout::FieldRole, save);

        QWidget::setTabOrder(save, results);

        retranslateUi(ResultPage);
        QObject::connect(save, SIGNAL(clicked()), ResultPage, SLOT(saveResults()));

        QMetaObject::connectSlotsByName(ResultPage);
    } // setupUi

    void retranslateUi(QWizardPage *ResultPage)
    {
        ResultPage->setWindowTitle(QApplication::translate("ResultPage", "WizardPage", 0, QApplication::UnicodeUTF8));
        results->setHtml(QApplication::translate("ResultPage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Camera intrinsics</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">0 0 0</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">0 0 0</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8"
                        "pt;\">0 0 0</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Distortion coeffcients</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">0 0 0 0 0</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        save->setText(QApplication::translate("ResultPage", "Save results", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ResultPage: public Ui_ResultPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULTPAGE_H
