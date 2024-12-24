/********************************************************************************
** Form generated from reading UI file 'dialogemployee.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGEMPLOYEE_H
#define UI_DIALOGEMPLOYEE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialogemployee
{
public:
    QLabel *label;
    QLabel *label_2;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_12;
    QLineEdit *linename;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_13;
    QLineEdit *lineage;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_49;
    QLineEdit *linegender;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_52;
    QLineEdit *linecnic;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_25;
    QLineEdit *line_phone_number;
    QHBoxLayout *horizontalLayout;
    QLabel *label_54;
    QLineEdit *line_category;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Dialogemployee)
    {
        if (Dialogemployee->objectName().isEmpty())
            Dialogemployee->setObjectName("Dialogemployee");
        Dialogemployee->resize(1356, 702);
        Dialogemployee->setStyleSheet(QString::fromUtf8("\n"
"QMainWindow {\n"
"	background-color:rgb(76, 77, 78);\n"
"}\n"
"QDialog {\n"
"	background-color:rgb(153,160,255);\n"
"}\n"
"QColorDialog {\n"
"	background-color:rgb(76, 77, 78);\n"
"}\n"
"QTextEdit {\n"
"	background-color:rgb(0, 0, 0);\n"
"	color: #a9b7c6;\n"
"}\n"
"QPlainTextEdit {\n"
"	selection-background-color:#007b50;\n"
"	background-color:#1e1d23;\n"
"	border-style: solid;\n"
"	border-top-color: transparent;\n"
"	border-right-color: transparent;\n"
"	border-left-color: transparent;\n"
"	border-bottom-color: transparent;\n"
"	border-width: 1px;\n"
"	color: #a9b7c6;\n"
"}\n"
"QPushButton{\n"
"	border-style: solid;\n"
"	border-top-color: transparent;\n"
"	border-right-color: transparent;\n"
"	border-left-color: transparent;\n"
"	border-bottom-color: transparent;\n"
"	border-width: 1px;\n"
"	border-style: solid;\n"
"	color: #a9b7c6;\n"
"	padding: 2px;\n"
"	background-color: #1e1d23;\n"
"}\n"
"QPushButton::default{\n"
"	border-style: inset;\n"
"	border-top-color: transparent;\n"
"	border-right-color: tran"
                        "sparent;\n"
"	border-left-color: transparent;\n"
"	border-bottom-color: #04b97f;\n"
"	border-width: 1px;\n"
"	color: #a9b7c6;\n"
"	padding: 2px;\n"
"	background-color: #1e1d23;\n"
"}\n"
"QToolButton {\n"
"	border-style: solid;\n"
"	border-top-color: transparent;\n"
"	border-right-color: transparent;\n"
"	border-left-color: transparent;\n"
"	border-bottom-color: #04b97f;\n"
"	border-bottom-width: 1px;\n"
"	border-style: solid;\n"
"	color: #a9b7c6;\n"
"	padding: 2px;\n"
"	background-color: #1e1d23;\n"
"}\n"
"QToolButton:hover{\n"
"	border-style: solid;\n"
"	border-top-color: transparent;\n"
"	border-right-color: transparent;\n"
"	border-left-color: transparent;\n"
"	border-bottom-color: #37efba;\n"
"	border-bottom-width: 2px;\n"
"	border-style: solid;\n"
"	color: #FFFFFF;\n"
"	padding-bottom: 1px;\n"
"	background-color: #1e1d23;\n"
"}\n"
"QPushButton:hover{\n"
"	border-style: solid;\n"
"	border-top-color: transparent;\n"
"	border-right-color: transparent;\n"
"	border-left-color: transparent;\n"
"	border-bottom-c"
                        "olor: #37efba;\n"
"	border-bottom-width: 1px;\n"
"	border-style: solid;\n"
"	color: #FFFFFF;\n"
"	padding-bottom: 2px;\n"
"	background-color: #1e1d23;\n"
"}\n"
"QPushButton:pressed{\n"
"	border-style: solid;\n"
"	border-top-color: transparent;\n"
"	border-right-color: transparent;\n"
"	border-left-color: transparent;\n"
"	border-bottom-color: #37efba;\n"
"	border-bottom-width: 2px;\n"
"	border-style: solid;\n"
"	color: #37efba;\n"
"	padding-bottom: 1px;\n"
"	background-color: #1e1d23;\n"
"}\n"
"QPushButton:disabled{\n"
"	border-style: solid;\n"
"	border-top-color: transparent;\n"
"	border-right-color: transparent;\n"
"	border-left-color: transparent;\n"
"	border-bottom-color: #808086;\n"
"	border-bottom-width: 2px;\n"
"	border-style: solid;\n"
"	color: #808086;\n"
"	padding-bottom: 1px;\n"
"	background-color: #1e1d23;\n"
"}\n"
"QLineEdit {\n"
"	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"	color: #a9b7c6;\n"
"	background:#1e1d23;\n"
""
                        "	selection-background-color:#007b50;\n"
"	selection-color: #FFFFFF;\n"
"}\n"
"QLabel {\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"QLCDNumber {\n"
"	color: #37e6b4;\n"
"}\n"
"QProgressBar {\n"
"	text-align: center;\n"
"	color: rgb(240, 240, 240);\n"
"	border-width: 1px; \n"
"	border-radius: 10px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	background-color:#1e1d23;\n"
"}\n"
"QProgressBar::chunk {\n"
"	background-color: #04b97f;\n"
"	border-radius: 5px;\n"
"}\n"
"QMenuBar {\n"
"	background-color: #1e1d23;\n"
"}\n"
"QMenuBar::item {\n"
"	color: #a9b7c6;\n"
"  	spacing: 3px;\n"
"  	padding: 1px 4px;\n"
"  	background: #1e1d23;\n"
"}\n"
"\n"
"QMenuBar::item:selected {\n"
"  	background:#1e1d23;\n"
"	color: #FFFFFF;\n"
"}\n"
"QMenu::item:selected {\n"
"	border-style: solid;\n"
"	border-top-color: transparent;\n"
"	border-right-color: transparent;\n"
"	border-left-color: #04b97f;\n"
"	border-bottom-color: transparent;\n"
"	border-left-width: 2px;\n"
"	color: #FFFFFF;\n"
"	padding-left:15px;\n"
""
                        "	padding-top:4px;\n"
"	padding-bottom:4px;\n"
"	padding-right:7px;\n"
"	background-color: #1e1d23;\n"
"}\n"
"QMenu::item {\n"
"	border-style: solid;\n"
"	border-top-color: transparent;\n"
"	border-right-color: transparent;\n"
"	border-left-color: transparent;\n"
"	border-bottom-color: transparent;\n"
"	border-bottom-width: 1px;\n"
"	border-style: solid;\n"
"	color: #a9b7c6;\n"
"	padding-left:17px;\n"
"	padding-top:4px;\n"
"	padding-bottom:4px;\n"
"	padding-right:7px;\n"
"	background-color: #1e1d23;\n"
"}\n"
"QMenu{\n"
"	background-color:#1e1d23;\n"
"}\n"
"QTabWidget {\n"
"	color:rgb(0,0,0);\n"
"	background-color:#1e1d23;\n"
"}\n"
"QTabWidget::pane {\n"
"		border-color: rgb(77,77,77);\n"
"		background-color:#1e1d23;\n"
"		border-style: solid;\n"
"		border-width: 1px;\n"
"    	border-radius: 6px;\n"
"}\n"
"QTabBar::tab {\n"
"	border-style: solid;\n"
"	border-top-color: transparent;\n"
"	border-right-color: transparent;\n"
"	border-left-color: transparent;\n"
"	border-bottom-color: transparent;\n"
"	border-bottom"
                        "-width: 1px;\n"
"	border-style: solid;\n"
"	color: #808086;\n"
"	padding: 3px;\n"
"	margin-left:3px;\n"
"	background-color: #1e1d23;\n"
"}\n"
"QTabBar::tab:selected, QTabBar::tab:last:selected, QTabBar::tab:hover {\n"
"  	border-style: solid;\n"
"	border-top-color: transparent;\n"
"	border-right-color: transparent;\n"
"	border-left-color: transparent;\n"
"	border-bottom-color: #04b97f;\n"
"	border-bottom-width: 2px;\n"
"	border-style: solid;\n"
"	color: #FFFFFF;\n"
"	padding-left: 3px;\n"
"	padding-bottom: 2px;\n"
"	margin-left:3px;\n"
"	background-color: #1e1d23;\n"
"}\n"
"\n"
"QCheckBox {\n"
"	color: #a9b7c6;\n"
"	padding: 2px;\n"
"}\n"
"QCheckBox:disabled {\n"
"	color: #808086;\n"
"	padding: 2px;\n"
"}\n"
"\n"
"QCheckBox:hover {\n"
"	border-radius:4px;\n"
"	border-style:solid;\n"
"	padding-left: 1px;\n"
"	padding-right: 1px;\n"
"	padding-bottom: 1px;\n"
"	padding-top: 1px;\n"
"	border-width:1px;\n"
"	border-color: rgb(87, 97, 106);\n"
"	background-color:#1e1d23;\n"
"}\n"
"QCheckBox::indicator:checked {\n"
""
                        "\n"
"	height: 10px;\n"
"	width: 10px;\n"
"	border-style:solid;\n"
"	border-width: 1px;\n"
"	border-color: #04b97f;\n"
"	color: #a9b7c6;\n"
"	background-color: #04b97f;\n"
"}\n"
"QCheckBox::indicator:unchecked {\n"
"\n"
"	height: 10px;\n"
"	width: 10px;\n"
"	border-style:solid;\n"
"	border-width: 1px;\n"
"	border-color: #04b97f;\n"
"	color: #a9b7c6;\n"
"	background-color: transparent;\n"
"}\n"
"QRadioButton {\n"
"	color: #a9b7c6;\n"
"	background-color: #1e1d23;\n"
"	padding: 1px;\n"
"}\n"
"QRadioButton::indicator:checked {\n"
"	height: 10px;\n"
"	width: 10px;\n"
"	border-style:solid;\n"
"	border-radius:5px;\n"
"	border-width: 1px;\n"
"	border-color: #04b97f;\n"
"	color: #a9b7c6;\n"
"	background-color: #04b97f;\n"
"}\n"
"QRadioButton::indicator:!checked {\n"
"	height: 10px;\n"
"	width: 10px;\n"
"	border-style:solid;\n"
"	border-radius:5px;\n"
"	border-width: 1px;\n"
"	border-color: #04b97f;\n"
"	color: #a9b7c6;\n"
"	background-color: transparent;\n"
"}\n"
"QStatusBar {\n"
"	color:#027f7f;\n"
"}\n"
"QSpinBox {\n"
""
                        "	color: #a9b7c6;	\n"
"	background-color: #1e1d23;\n"
"}\n"
"QDoubleSpinBox {\n"
"	color: #a9b7c6;	\n"
"	background-color: #1e1d23;\n"
"}\n"
"QTimeEdit {\n"
"	color: #a9b7c6;	\n"
"	background-color: #1e1d23;\n"
"}\n"
"QDateTimeEdit {\n"
"	color: #a9b7c6;	\n"
"	background-color: #1e1d23;\n"
"}\n"
"QDateEdit {\n"
"	color: #a9b7c6;	\n"
"	background-color: #1e1d23;\n"
"}\n"
"QComboBox {\n"
"	color: #a9b7c6;	\n"
"	background: #1e1d23;\n"
"}\n"
"QComboBox:editable {\n"
"	background: #1e1d23;\n"
"	color: #a9b7c6;\n"
"	selection-background-color: #1e1d23;\n"
"}\n"
"QComboBox QAbstractItemView {\n"
"	color: #a9b7c6;	\n"
"	background: #1e1d23;\n"
"	selection-color: #FFFFFF;\n"
"	selection-background-color: #1e1d23;\n"
"}\n"
"QComboBox:!editable:on, QComboBox::drop-down:editable:on {\n"
"	color: #a9b7c6;	\n"
"	background: #1e1d23;\n"
"}\n"
"QFontComboBox {\n"
"	color: #a9b7c6;	\n"
"	background-color: #1e1d23;\n"
"}\n"
"QToolBox {\n"
"	color: #a9b7c6;\n"
"	background-color: #1e1d23;\n"
"}\n"
"QToolBox::tab {\n"
"	color: #a"
                        "9b7c6;\n"
"	background-color: #1e1d23;\n"
"}\n"
"QToolBox::tab:selected {\n"
"	color: #FFFFFF;\n"
"	background-color: #1e1d23;\n"
"}\n"
"QScrollArea {\n"
"	color: #FFFFFF;\n"
"	background-color: #1e1d23;\n"
"}\n"
"QSlider::groove:horizontal {\n"
"	height: 5px;\n"
"	background: #04b97f;\n"
"}\n"
"QSlider::groove:vertical {\n"
"	width: 5px;\n"
"	background: #04b97f;\n"
"}\n"
"QSlider::handle:horizontal {\n"
"	background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"	border: 1px solid #5c5c5c;\n"
"	width: 14px;\n"
"	margin: -5px 0;\n"
"	border-radius: 7px;\n"
"}\n"
"QSlider::handle:vertical {\n"
"	background: qlineargradient(x1:1, y1:1, x2:0, y2:0, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"	border: 1px solid #5c5c5c;\n"
"	height: 14px;\n"
"	margin: 0 -5px;\n"
"	border-radius: 7px;\n"
"}\n"
"QSlider::add-page:horizontal {\n"
"    background: white;\n"
"}\n"
"QSlider::add-page:vertical {\n"
"    background: white;\n"
"}\n"
"QSlider::sub-page:horizontal {\n"
"    background: #04b97f;\n"
"}"
                        "\n"
"QSlider::sub-page:vertical {\n"
"    background: #04b97f;\n"
"}"));
        label = new QLabel(Dialogemployee);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 90, 461, 441));
        label->setMinimumSize(QSize(381, 441));
        label_2 = new QLabel(Dialogemployee);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(91, 31, 1031, 141));
        label_2->setMinimumSize(QSize(1031, 141));
        label_2->setStyleSheet(QString::fromUtf8("font: 25pt \"Modern No. 20\";"));
        layoutWidget = new QWidget(Dialogemployee);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(600, 180, 595, 441));
        layoutWidget->setMinimumSize(QSize(594, 441));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName("label_12");
        label_12->setMinimumSize(QSize(231, 51));
        label_12->setStyleSheet(QString::fromUtf8("font: 25pt \"Modern No. 20\";"));

        horizontalLayout_6->addWidget(label_12);

        linename = new QLineEdit(layoutWidget);
        linename->setObjectName("linename");
        linename->setMinimumSize(QSize(351, 41));
        QFont font;
        font.setPointSize(14);
        linename->setFont(font);
        linename->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)"));

        horizontalLayout_6->addWidget(linename);


        gridLayout->addLayout(horizontalLayout_6, 0, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName("label_13");
        label_13->setMinimumSize(QSize(231, 51));
        label_13->setStyleSheet(QString::fromUtf8("font: 25pt \"Modern No. 20\";"));

        horizontalLayout_5->addWidget(label_13);

        lineage = new QLineEdit(layoutWidget);
        lineage->setObjectName("lineage");
        lineage->setMinimumSize(QSize(351, 41));
        lineage->setFont(font);
        lineage->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)"));

        horizontalLayout_5->addWidget(lineage);


        gridLayout->addLayout(horizontalLayout_5, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_49 = new QLabel(layoutWidget);
        label_49->setObjectName("label_49");
        label_49->setMinimumSize(QSize(231, 51));
        label_49->setStyleSheet(QString::fromUtf8("font: 25pt \"Modern No. 20\";"));

        horizontalLayout_4->addWidget(label_49);

        linegender = new QLineEdit(layoutWidget);
        linegender->setObjectName("linegender");
        linegender->setMinimumSize(QSize(351, 41));
        linegender->setFont(font);
        linegender->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)"));

        horizontalLayout_4->addWidget(linegender);


        gridLayout->addLayout(horizontalLayout_4, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_52 = new QLabel(layoutWidget);
        label_52->setObjectName("label_52");
        label_52->setMinimumSize(QSize(231, 51));
        label_52->setStyleSheet(QString::fromUtf8("font: 25pt \"Modern No. 20\";"));

        horizontalLayout_3->addWidget(label_52);

        linecnic = new QLineEdit(layoutWidget);
        linecnic->setObjectName("linecnic");
        linecnic->setMinimumSize(QSize(351, 41));
        linecnic->setFont(font);
        linecnic->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)"));

        horizontalLayout_3->addWidget(linecnic);


        gridLayout->addLayout(horizontalLayout_3, 3, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_25 = new QLabel(layoutWidget);
        label_25->setObjectName("label_25");
        label_25->setMinimumSize(QSize(231, 51));
        label_25->setStyleSheet(QString::fromUtf8("font: 25pt \"Modern No. 20\";"));

        horizontalLayout_2->addWidget(label_25);

        line_phone_number = new QLineEdit(layoutWidget);
        line_phone_number->setObjectName("line_phone_number");
        line_phone_number->setMinimumSize(QSize(351, 41));
        line_phone_number->setFont(font);
        line_phone_number->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)"));

        horizontalLayout_2->addWidget(line_phone_number);


        gridLayout->addLayout(horizontalLayout_2, 4, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_54 = new QLabel(layoutWidget);
        label_54->setObjectName("label_54");
        label_54->setMinimumSize(QSize(231, 51));
        label_54->setStyleSheet(QString::fromUtf8("font: 25pt \"Modern No. 20\";"));

        horizontalLayout->addWidget(label_54);

        line_category = new QLineEdit(layoutWidget);
        line_category->setObjectName("line_category");
        line_category->setMinimumSize(QSize(351, 41));
        line_category->setFont(font);
        line_category->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)"));

        horizontalLayout->addWidget(line_category);


        gridLayout->addLayout(horizontalLayout, 5, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(292, 71));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        pushButton->setFont(font1);

        horizontalLayout_7->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(292, 71));
        pushButton_2->setFont(font1);

        horizontalLayout_7->addWidget(pushButton_2);


        gridLayout_2->addLayout(horizontalLayout_7, 1, 0, 1, 1);


        retranslateUi(Dialogemployee);

        QMetaObject::connectSlotsByName(Dialogemployee);
    } // setupUi

    void retranslateUi(QDialog *Dialogemployee)
    {
        Dialogemployee->setWindowTitle(QCoreApplication::translate("Dialogemployee", "Dialog", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("Dialogemployee", "Register Employee", nullptr));
        label_12->setText(QCoreApplication::translate("Dialogemployee", "Name ", nullptr));
        label_13->setText(QCoreApplication::translate("Dialogemployee", "Age", nullptr));
        label_49->setText(QCoreApplication::translate("Dialogemployee", "Gender", nullptr));
        linegender->setText(QString());
        label_52->setText(QCoreApplication::translate("Dialogemployee", "CNIC", nullptr));
        linecnic->setText(QString());
        label_25->setText(QCoreApplication::translate("Dialogemployee", "Phone Number", nullptr));
        line_phone_number->setText(QString());
        label_54->setText(QCoreApplication::translate("Dialogemployee", "Category", nullptr));
        line_category->setText(QString());
        pushButton->setText(QCoreApplication::translate("Dialogemployee", "Cancel", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialogemployee", "Submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialogemployee: public Ui_Dialogemployee {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGEMPLOYEE_H
