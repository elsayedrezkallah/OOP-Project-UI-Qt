/********************************************************************************
** Form generated from reading UI file 'dialogadmitted.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGADMITTED_H
#define UI_DIALOGADMITTED_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialogadmitted
{
public:
    QLabel *label;
    QFrame *frame_2;
    QLabel *label_2;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_11;
    QLineEdit *line_name;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_4;
    QLineEdit *line_age;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_12;
    QLineEdit *line_phone;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_13;
    QLineEdit *line_cnic;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_18;
    QLineEdit *line_nods;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_17;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_14;
    QLineEdit *line_floor;
    QHBoxLayout *horizontalLayout;
    QLabel *label_16;
    QLineEdit *line_room;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;

    void setupUi(QDialog *Dialogadmitted)
    {
        if (Dialogadmitted->objectName().isEmpty())
            Dialogadmitted->setObjectName("Dialogadmitted");
        Dialogadmitted->resize(1466, 829);
        Dialogadmitted->setStyleSheet(QString::fromUtf8("\n"
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
        label = new QLabel(Dialogadmitted);
        label->setObjectName("label");
        label->setGeometry(QRect(51, 11, 1091, 191));
        label->setMinimumSize(QSize(1091, 191));
        label->setMaximumSize(QSize(1091, 191));
        label->setStyleSheet(QString::fromUtf8("font: 30pt \"Modern No. 20\";"));
        frame_2 = new QFrame(Dialogadmitted);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(558, 208, 101, 558));
        frame_2->setMinimumSize(QSize(101, 541));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        label_2 = new QLabel(Dialogadmitted);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(51, 208, 501, 558));
        label_2->setMinimumSize(QSize(501, 558));
        layoutWidget = new QWidget(Dialogadmitted);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(666, 209, 634, 557));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName("label_11");
        label_11->setMinimumSize(QSize(111, 51));
        label_11->setStyleSheet(QString::fromUtf8("font: 25pt \"Modern No. 20\";"));

        horizontalLayout_9->addWidget(label_11);

        line_name = new QLineEdit(layoutWidget);
        line_name->setObjectName("line_name");
        line_name->setMinimumSize(QSize(377, 41));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        line_name->setFont(font);
        line_name->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)"));

        horizontalLayout_9->addWidget(line_name);


        gridLayout->addLayout(horizontalLayout_9, 0, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(111, 51));
        label_4->setStyleSheet(QString::fromUtf8("font: 25pt \"Modern No. 20\";"));

        horizontalLayout_8->addWidget(label_4);

        line_age = new QLineEdit(layoutWidget);
        line_age->setObjectName("line_age");
        line_age->setMinimumSize(QSize(377, 41));
        line_age->setFont(font);
        line_age->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)"));

        horizontalLayout_8->addWidget(line_age);


        gridLayout->addLayout(horizontalLayout_8, 1, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName("label_12");
        label_12->setMinimumSize(QSize(111, 51));
        label_12->setStyleSheet(QString::fromUtf8("font: 25pt \"Modern No. 20\";"));

        horizontalLayout_7->addWidget(label_12);

        line_phone = new QLineEdit(layoutWidget);
        line_phone->setObjectName("line_phone");
        line_phone->setMinimumSize(QSize(375, 41));
        line_phone->setFont(font);
        line_phone->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)"));

        horizontalLayout_7->addWidget(line_phone);


        gridLayout->addLayout(horizontalLayout_7, 2, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName("label_13");
        label_13->setMinimumSize(QSize(111, 51));
        label_13->setStyleSheet(QString::fromUtf8("font: 25pt \"Modern No. 20\";"));

        horizontalLayout_6->addWidget(label_13);

        line_cnic = new QLineEdit(layoutWidget);
        line_cnic->setObjectName("line_cnic");
        line_cnic->setMinimumSize(QSize(375, 41));
        line_cnic->setFont(font);
        line_cnic->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)"));

        horizontalLayout_6->addWidget(line_cnic);


        gridLayout->addLayout(horizontalLayout_6, 3, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_18 = new QLabel(layoutWidget);
        label_18->setObjectName("label_18");
        label_18->setMinimumSize(QSize(111, 51));
        label_18->setStyleSheet(QString::fromUtf8("font: 25pt \"Modern No. 20\";"));

        horizontalLayout_4->addWidget(label_18);

        line_nods = new QLineEdit(layoutWidget);
        line_nods->setObjectName("line_nods");
        line_nods->setMinimumSize(QSize(377, 41));
        line_nods->setFont(font);
        line_nods->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)"));

        horizontalLayout_4->addWidget(line_nods);


        gridLayout->addLayout(horizontalLayout_4, 4, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_17 = new QLabel(layoutWidget);
        label_17->setObjectName("label_17");
        label_17->setMinimumSize(QSize(111, 51));
        label_17->setStyleSheet(QString::fromUtf8("font: 25pt \"Modern No. 20\";"));

        horizontalLayout_3->addWidget(label_17);

        comboBox = new QComboBox(layoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setMinimumSize(QSize(381, 41));
        comboBox->setFont(font);
        comboBox->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)"));

        horizontalLayout_3->addWidget(comboBox);


        gridLayout->addLayout(horizontalLayout_3, 5, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName("label_14");
        label_14->setMinimumSize(QSize(111, 51));
        label_14->setStyleSheet(QString::fromUtf8("font: 25pt \"Modern No. 20\";"));

        horizontalLayout_2->addWidget(label_14);

        line_floor = new QLineEdit(layoutWidget);
        line_floor->setObjectName("line_floor");
        line_floor->setMinimumSize(QSize(375, 41));
        line_floor->setFont(font);
        line_floor->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)"));

        horizontalLayout_2->addWidget(line_floor);


        gridLayout->addLayout(horizontalLayout_2, 6, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_16 = new QLabel(layoutWidget);
        label_16->setObjectName("label_16");
        label_16->setMinimumSize(QSize(111, 51));
        label_16->setStyleSheet(QString::fromUtf8("font: 25pt \"Modern No. 20\";"));

        horizontalLayout->addWidget(label_16);

        line_room = new QLineEdit(layoutWidget);
        line_room->setObjectName("line_room");
        line_room->setMinimumSize(QSize(375, 41));
        line_room->setFont(font);
        line_room->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)"));

        horizontalLayout->addWidget(line_room);


        gridLayout->addLayout(horizontalLayout, 7, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setMinimumSize(QSize(301, 71));
        pushButton_5->setFont(font);

        horizontalLayout_5->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setMinimumSize(QSize(311, 71));
        pushButton_6->setFont(font);

        horizontalLayout_5->addWidget(pushButton_6);


        gridLayout_2->addLayout(horizontalLayout_5, 1, 0, 1, 1);


        retranslateUi(Dialogadmitted);

        QMetaObject::connectSlotsByName(Dialogadmitted);
    } // setupUi

    void retranslateUi(QDialog *Dialogadmitted)
    {
        Dialogadmitted->setWindowTitle(QCoreApplication::translate("Dialogadmitted", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialogadmitted", "Reserve Room", nullptr));
        label_2->setText(QString());
        label_11->setText(QCoreApplication::translate("Dialogadmitted", "Name                  ", nullptr));
        label_4->setText(QCoreApplication::translate("Dialogadmitted", "Age                     ", nullptr));
        label_12->setText(QCoreApplication::translate("Dialogadmitted", "Phone Number    ", nullptr));
        label_13->setText(QCoreApplication::translate("Dialogadmitted", "CNIC                  ", nullptr));
        label_18->setText(QCoreApplication::translate("Dialogadmitted", "Number of Days  ", nullptr));
        label_17->setText(QCoreApplication::translate("Dialogadmitted", "Type of Room      ", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Dialogadmitted", "Single Room ", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Dialogadmitted", "Shared Room ", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Dialogadmitted", "Imtensive Care Unit (ICU)", nullptr));

        label_14->setText(QCoreApplication::translate("Dialogadmitted", "Floor                  ", nullptr));
        label_16->setText(QCoreApplication::translate("Dialogadmitted", "Room                  ", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Dialogadmitted", "Cancel ", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Dialogadmitted", "SUBMIT ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialogadmitted: public Ui_Dialogadmitted {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGADMITTED_H
