/********************************************************************************
** Form generated from reading UI file 'chessboardcornerspage.ui'
**
** Created: Tue Jun 12 16:54:49 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHESSBOARDCORNERSPAGE_H
#define UI_CHESSBOARDCORNERSPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QGraphicsView>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>
#include <QtGui/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_ChessboardCornersPage
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QGraphicsView *graphicsView;
    QFormLayout *formLayout;
    QToolButton *toolButton_2;
    QToolButton *toolButton;

    void setupUi(QWizardPage *ChessboardCornersPage)
    {
        if (ChessboardCornersPage->objectName().isEmpty())
            ChessboardCornersPage->setObjectName(QString::fromUtf8("ChessboardCornersPage"));
        ChessboardCornersPage->resize(400, 300);
        layoutWidget = new QWidget(ChessboardCornersPage);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 40, 258, 221));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(20, 20, 40, 20);
        graphicsView = new QGraphicsView(layoutWidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        gridLayout->addWidget(graphicsView, 0, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setContentsMargins(85, -1, -1, -1);
        toolButton_2 = new QToolButton(layoutWidget);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));

        formLayout->setWidget(0, QFormLayout::FieldRole, toolButton_2);

        toolButton = new QToolButton(layoutWidget);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));

        formLayout->setWidget(0, QFormLayout::LabelRole, toolButton);


        gridLayout->addLayout(formLayout, 1, 0, 1, 1);


        retranslateUi(ChessboardCornersPage);

        QMetaObject::connectSlotsByName(ChessboardCornersPage);
    } // setupUi

    void retranslateUi(QWizardPage *ChessboardCornersPage)
    {
        ChessboardCornersPage->setWindowTitle(QApplication::translate("ChessboardCornersPage", "WizardPage", 0, QApplication::UnicodeUTF8));
        toolButton_2->setText(QApplication::translate("ChessboardCornersPage", ">", 0, QApplication::UnicodeUTF8));
        toolButton->setText(QApplication::translate("ChessboardCornersPage", "!", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ChessboardCornersPage: public Ui_ChessboardCornersPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHESSBOARDCORNERSPAGE_H
