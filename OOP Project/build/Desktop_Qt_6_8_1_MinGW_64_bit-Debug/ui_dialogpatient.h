/********************************************************************************
** Form generated from reading UI file 'dialogpatient.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGPATIENT_H
#define UI_DIALOGPATIENT_H

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

class Ui_DialogPatient
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout_5;
    QLabel *label;
    QGridLayout *gridLayout_4;
    QLabel *label_medicine;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLineEdit *linename;
    QLabel *label_9;
    QLineEdit *lineage;
    QLabel *label_18;
    QLineEdit *linegender;
    QLabel *label_19;
    QLineEdit *linecnic;
    QLabel *label_20;
    QLineEdit *linephone;
    QLabel *label_21;
    QLineEdit *linemedical;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_3;
    QFrame *frame;
    QPushButton *pushButton_4;

    void setupUi(QDialog *DialogPatient)
    {
        if (DialogPatient->objectName().isEmpty())
            DialogPatient->setObjectName("DialogPatient");
        DialogPatient->resize(1344, 689);
        DialogPatient->setStyleSheet(QString::fromUtf8("\n"
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
        layoutWidget = new QWidget(DialogPatient);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 61, 1292, 537));
        gridLayout_5 = new QGridLayout(layoutWidget);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setMinimumSize(QSize(1281, 111));
        label->setStyleSheet(QString::fromUtf8("font: 30pt \"Modern No. 20\";"));

        gridLayout_5->addWidget(label, 0, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName("gridLayout_4");
        label_medicine = new QLabel(layoutWidget);
        label_medicine->setObjectName("label_medicine");
        label_medicine->setMinimumSize(QSize(571, 401));
        label_medicine->setStyleSheet(QString::fromUtf8("background-color:rgb(153,160,255) ; \n"
"font: 700 30pt \"HoloLens MDL2 Assets\";\n"
"color:rgb(255, 255, 255);\n"
""));

        gridLayout_4->addWidget(label_medicine, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(231, 51));
        label_3->setStyleSheet(QString::fromUtf8("font: 25pt \"Modern No. 20\";"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        linename = new QLineEdit(layoutWidget);
        linename->setObjectName("linename");
        linename->setMinimumSize(QSize(421, 41));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        linename->setFont(font);
        linename->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)"));

        gridLayout->addWidget(linename, 0, 1, 1, 1);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName("label_9");
        label_9->setMinimumSize(QSize(231, 51));
        label_9->setStyleSheet(QString::fromUtf8("font: 25pt \"Modern No. 20\";"));

        gridLayout->addWidget(label_9, 1, 0, 1, 1);

        lineage = new QLineEdit(layoutWidget);
        lineage->setObjectName("lineage");
        lineage->setMinimumSize(QSize(421, 41));
        lineage->setFont(font);
        lineage->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)"));

        gridLayout->addWidget(lineage, 1, 1, 1, 1);

        label_18 = new QLabel(layoutWidget);
        label_18->setObjectName("label_18");
        label_18->setMinimumSize(QSize(231, 51));
        label_18->setStyleSheet(QString::fromUtf8("font: 25pt \"Modern No. 20\";"));

        gridLayout->addWidget(label_18, 2, 0, 1, 1);

        linegender = new QLineEdit(layoutWidget);
        linegender->setObjectName("linegender");
        linegender->setMinimumSize(QSize(421, 41));
        linegender->setFont(font);
        linegender->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)"));

        gridLayout->addWidget(linegender, 2, 1, 1, 1);

        label_19 = new QLabel(layoutWidget);
        label_19->setObjectName("label_19");
        label_19->setMinimumSize(QSize(231, 51));
        label_19->setStyleSheet(QString::fromUtf8("font: 25pt \"Modern No. 20\";"));

        gridLayout->addWidget(label_19, 3, 0, 1, 1);

        linecnic = new QLineEdit(layoutWidget);
        linecnic->setObjectName("linecnic");
        linecnic->setMinimumSize(QSize(421, 41));
        linecnic->setFont(font);
        linecnic->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)"));

        gridLayout->addWidget(linecnic, 3, 1, 1, 1);

        label_20 = new QLabel(layoutWidget);
        label_20->setObjectName("label_20");
        label_20->setMinimumSize(QSize(231, 51));
        label_20->setStyleSheet(QString::fromUtf8("font: 25pt \"Modern No. 20\";"));

        gridLayout->addWidget(label_20, 4, 0, 1, 1);

        linephone = new QLineEdit(layoutWidget);
        linephone->setObjectName("linephone");
        linephone->setMinimumSize(QSize(421, 41));
        linephone->setFont(font);
        linephone->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)"));

        gridLayout->addWidget(linephone, 4, 1, 1, 1);

        label_21 = new QLabel(layoutWidget);
        label_21->setObjectName("label_21");
        label_21->setMinimumSize(QSize(231, 51));
        label_21->setStyleSheet(QString::fromUtf8("font: 25pt \"Modern No. 20\";"));

        gridLayout->addWidget(label_21, 5, 0, 1, 1);

        linemedical = new QLineEdit(layoutWidget);
        linemedical->setObjectName("linemedical");
        linemedical->setMinimumSize(QSize(421, 41));
        linemedical->setFont(font);
        linemedical->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)"));

        gridLayout->addWidget(linemedical, 5, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setMinimumSize(QSize(341, 61));

        gridLayout_2->addWidget(pushButton_3, 0, 0, 1, 1);

        frame = new QFrame(layoutWidget);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(20, 51));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);

        gridLayout_2->addWidget(frame, 0, 1, 1, 1);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setMinimumSize(QSize(331, 61));

        gridLayout_2->addWidget(pushButton_4, 0, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 1, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 1, 0, 1, 1);


        retranslateUi(DialogPatient);

        QMetaObject::connectSlotsByName(DialogPatient);
    } // setupUi

    void retranslateUi(QDialog *DialogPatient)
    {
        DialogPatient->setWindowTitle(QCoreApplication::translate("DialogPatient", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DialogPatient", "Register Patient ", nullptr));
        label_medicine->setText(QString());
        label_3->setText(QCoreApplication::translate("DialogPatient", "Name ", nullptr));
        label_9->setText(QCoreApplication::translate("DialogPatient", "Age", nullptr));
        label_18->setText(QCoreApplication::translate("DialogPatient", "Gender", nullptr));
        linegender->setText(QString());
        label_19->setText(QCoreApplication::translate("DialogPatient", "CNIC", nullptr));
        linecnic->setText(QString());
        label_20->setText(QCoreApplication::translate("DialogPatient", "Phone Number", nullptr));
        linephone->setText(QString());
        label_21->setText(QCoreApplication::translate("DialogPatient", "Medical Problem", nullptr));
        linemedical->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("DialogPatient", "CANCEL", nullptr));
        pushButton_4->setText(QCoreApplication::translate("DialogPatient", "SUBMIT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogPatient: public Ui_DialogPatient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGPATIENT_H
