#pragma once
#include <qwidget.h>
#include <QSize>
class LineNumberArea : public QWidget
{
public:
    LineNumberArea(CodeEditor* editor) : QWidget(editor) {
        codeEditor = editor;
    }

    //���غ��ʵĴ����С
    QSize sizeHint() const override {
        return QSize(codeEditor->lineNumberAreaWidth(), 0);
    }

protected:
    //��д���ƺ���������CodeEditor�ķ���
    void paintEvent(QPaintEvent* event) override {
        codeEditor->lineNumberAreaPaintEvent(event);
    }

private:
    CodeEditor* codeEditor;
};