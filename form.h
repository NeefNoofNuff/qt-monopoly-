#ifndef FORM_H
#define FORM_H

#include <QWidget>

namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    void push_button0(int id);
    ~Form();




private:
    Ui::Form *ui;
};

#endif // FORM_H
