#include "profilewindow.h"
#include "ui_profilewindow.h"

Profilewindow::Profilewindow(QWidget *parent, student_obj *student, studentpre_obj *studentPref) :
    QDialog(parent),
    ui(new Ui::Profilewindow)
{
    ui->setupUi(this);
    stu = student;
    stuPref=studentPref;
    ui->name->setText(QString::fromStdString(stu->getFirstName() + stu->getLastName()));
    ui->id->setText(QString::number(stu->getStudent_number()));
    ui->gpaSpin->setValue(stu->getGpa());
    ui->pmSpin->setValue(stu->getPmSkill());
    ui->dbSpin->setValue(stu->getDatabase());
    ui->javaSpin->setValue(stu->getJava());
    ui->cSpin->setValue(stu->getCCpp());
    ui->jsSpin->setValue(stu->getJsHtml());
    ui->pythonSpin->setValue(stu->getPython());
    ui->debuggingSpin->setValue(stu->getDebug());
    ui->docSpin->setValue(stu->getDocument());
    ui->mobileSpin->setValue(stu->getMobile());
    ui->networkingSpin->setValue(stu->getNetwork());
    ui->uiSpin->setValue(stu->getUi());
    ui->algSpin->setValue(stu->getAlgor());

}

Profilewindow::~Profilewindow()
{
    delete ui;
}

void Profilewindow::on_pushButton_clicked()
{

}
