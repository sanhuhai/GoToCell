#pragma once

#include <QtWidgets/QDialog>
#include "ui_GoToCell.h"

class GoToCell : public QDialog
{
    Q_OBJECT

public:
    GoToCell(QWidget *parent = Q_NULLPTR);

private:
    Ui::GoToCellClass ui;
};
