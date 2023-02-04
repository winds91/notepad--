#pragma once

#include <QWidget>
#include "ui_aboutndd.h"

class AboutNdd : public QWidget
{
	Q_OBJECT

public:
	AboutNdd(QWidget *parent = nullptr);
	~AboutNdd();

	void appendText(QString text);

private:
	Ui::AboutNddClass ui;
};
