/********************************************************************************
** Form generated from reading UI file 'dialogdoctor.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGDOCTOR_H
#define UI_DIALOGDOCTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogDoctor
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QLabel *doctor_label;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *linename;
    QLabel *label_7;
    QLineEdit *lineage;
    QLabel *label_11;
    QLineEdit *linespacilization;
    QLabel *label_10;
    QLineEdit *linecnic;
    QLabel *label_8;
    QLineEdit *line_phone_number;
    QLabel *label_12;
    QLineEdit *linest;
    QLabel *label_13;
    QLineEdit *lineet;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QFrame *frame_2;
    QFrame *frame;

    void setupUi(QDialog *DialogDoctor)
    {
        if (DialogDoctor->objectName().isEmpty())
            DialogDoctor->setObjectName("DialogDoctor");
        DialogDoctor->resize(1303, 693);
        DialogDoctor->setStyleSheet(QString::fromUtf8("\n"
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
        layoutWidget = new QWidget(DialogDoctor);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(100, 20, 1133, 673));
        gridLayout_4 = new QGridLayout(layoutWidget);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setMinimumSize(QSize(1031, 81));
        label->setStyleSheet(QString::fromUtf8("font: 30pt \"Modern No. 20\";"));

        gridLayout_3->addWidget(label, 0, 0, 1, 2);

        doctor_label = new QLabel(layoutWidget);
        doctor_label->setObjectName("doctor_label");
        doctor_label->setMinimumSize(QSize(441, 489));

        gridLayout_3->addWidget(doctor_label, 1, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(221, 51));
        label_2->setStyleSheet(QString::fromUtf8("font: 25pt \"Modern No. 20\";"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        linename = new QLineEdit(layoutWidget);
        linename->setObjectName("linename");
        linename->setMinimumSize(QSize(351, 41));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        linename->setFont(font);
        linename->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)"));

        gridLayout->addWidget(linename, 0, 1, 1, 1);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");
        label_7->setMinimumSize(QSize(221, 51));
        label_7->setStyleSheet(QString::fromUtf8("font: 25pt \"Modern No. 20\";"));

        gridLayout->addWidget(label_7, 1, 0, 1, 1);

        lineage = new QLineEdit(layoutWidget);
        lineage->setObjectName("lineage");
        lineage->setMinimumSize(QSize(351, 41));
        QFont font1;
        font1.setPointSize(14);
        lineage->setFont(font1);
        lineage->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)"));

        gridLayout->addWidget(lineage, 1, 1, 1, 1);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName("label_11");
        label_11->setMinimumSize(QSize(231, 51));
        label_11->setStyleSheet(QString::fromUtf8("font: 25pt \"Modern No. 20\";"));

        gridLayout->addWidget(label_11, 2, 0, 1, 1);

        linespacilization = new QLineEdit(layoutWidget);
        linespacilization->setObjectName("linespacilization");
        linespacilization->setMinimumSize(QSize(351, 41));
        linespacilization->setFont(font);
        linespacilization->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)"));

        gridLayout->addWidget(linespacilization, 2, 1, 1, 1);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName("label_10");
        label_10->setMinimumSize(QSize(221, 51));
        label_10->setStyleSheet(QString::fromUtf8("font: 25pt \"Modern No. 20\";"));

        gridLayout->addWidget(label_10, 3, 0, 1, 1);

        linecnic = new QLineEdit(layoutWidget);
        linecnic->setObjectName("linecnic");
        linecnic->setMinimumSize(QSize(351, 41));
        linecnic->setFont(font);
        linecnic->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)"));

        gridLayout->addWidget(linecnic, 3, 1, 1, 1);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");
        label_8->setMinimumSize(QSize(231, 51));
        label_8->setStyleSheet(QString::fromUtf8("font: 25pt \"Modern No. 20\";"));

        gridLayout->addWidget(label_8, 4, 0, 1, 1);

        line_phone_number = new QLineEdit(layoutWidget);
        line_phone_number->setObjectName("line_phone_number");
        line_phone_number->setMinimumSize(QSize(351, 41));
        line_phone_number->setFont(font);
        line_phone_number->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)"));

        gridLayout->addWidget(line_phone_number, 4, 1, 1, 1);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName("label_12");
        label_12->setMinimumSize(QSize(231, 51));
        label_12->setStyleSheet(QString::fromUtf8("font: 25pt \"Modern No. 20\";"));

        gridLayout->addWidget(label_12, 5, 0, 1, 1);

        linest = new QLineEdit(layoutWidget);
        linest->setObjectName("linest");
        linest->setMinimumSize(QSize(351, 41));
        linest->setFont(font);
        linest->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)"));

        gridLayout->addWidget(linest, 5, 1, 1, 1);

        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName("label_13");
        label_13->setMinimumSize(QSize(231, 51));
        label_13->setStyleSheet(QString::fromUtf8("font: 25pt \"Modern No. 20\";"));

        gridLayout->addWidget(label_13, 6, 0, 1, 1);

        lineet = new QLineEdit(layoutWidget);
        lineet->setObjectName("lineet");
        lineet->setMinimumSize(QSize(351, 41));
        lineet->setFont(font);
        lineet->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)"));

        gridLayout->addWidget(lineet, 6, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 2);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(291, 61));

        gridLayout_2->addWidget(pushButton, 1, 0, 1, 1);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(291, 61));

        gridLayout_2->addWidget(pushButton_2, 1, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 1, 1, 1, 1);

        frame_2 = new QFrame(layoutWidget);
        frame_2->setObjectName("frame_2");
        frame_2->setMinimumSize(QSize(1051, 80));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);

        gridLayout_3->addWidget(frame_2, 2, 0, 1, 2);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);

        frame = new QFrame(layoutWidget);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(71, 671));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);

        gridLayout_4->addWidget(frame, 0, 1, 1, 1);


        retranslateUi(DialogDoctor);

        QMetaObject::connectSlotsByName(DialogDoctor);
    } // setupUi

    void retranslateUi(QDialog *DialogDoctor)
    {
        DialogDoctor->setWindowTitle(QCoreApplication::translate("DialogDoctor", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DialogDoctor", "Register Doctor ", nullptr));
        doctor_label->setText(QString());
        label_2->setText(QCoreApplication::translate("DialogDoctor", "Name ", nullptr));
        label_7->setText(QCoreApplication::translate("DialogDoctor", "Age", nullptr));
        label_11->setText(QCoreApplication::translate("DialogDoctor", "Specilization ", nullptr));
        linespacilization->setText(QString());
        label_10->setText(QCoreApplication::translate("DialogDoctor", "CNIC", nullptr));
        linecnic->setText(QString());
        label_8->setText(QCoreApplication::translate("DialogDoctor", "Phone Number", nullptr));
        line_phone_number->setText(QString());
        label_12->setText(QCoreApplication::translate("DialogDoctor", "Start Time ", nullptr));
        linest->setText(QString());
        label_13->setText(QCoreApplication::translate("DialogDoctor", "End Time ", nullptr));
        lineet->setText(QString());
        pushButton->setText(QCoreApplication::translate("DialogDoctor", "CANCEL", nullptr));
        pushButton_2->setText(QCoreApplication::translate("DialogDoctor", "SUBMIT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogDoctor: public Ui_DialogDoctor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGDOCTOR_H
