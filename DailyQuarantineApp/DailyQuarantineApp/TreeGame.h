#pragma once

#include <QWidget>
#include "ui_TreeGame.h"
#include <QMessageBox>
#include <QWidget>
#include <QPushButton>
#include <QEvent>
#include <QMouseEvent>
#include <QDebug>
#include <qstackedwidget.h>

class TreeGame : public QWidget
{
	Q_OBJECT

public:
	TreeGame(QWidget *parent = Q_NULLPTR);
	~TreeGame();

private:
	Ui::TreeGame ui;

protected:
	bool eventFilter(QObject* watched, QEvent* event);

private:
	void setupUI();
	//QStackedWidget* stackedWidget;
};