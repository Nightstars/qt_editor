#include "qt_editor.h"

qt_editor::qt_editor(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
    codeEditor = new CodeEditor(this);
}
