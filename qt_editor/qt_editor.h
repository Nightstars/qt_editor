#pragma once

#include <QtWidgets/QWidget>
#include "ui_qt_editor.h"
#include "CodeEditor.h"

class qt_editor : public QWidget
{
    Q_OBJECT

public:
    qt_editor(QWidget *parent = Q_NULLPTR);

private:
    Ui::qt_editorClass ui;
    CodeEditor* codeEditor;
};
