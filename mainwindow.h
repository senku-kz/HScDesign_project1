#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButtonHellow_clicked();

    void on_pushButtonSum_clicked();

    void on_pushButtonSubtraction_clicked();

    void on_pushButtonMultiplication_clicked();

    void on_pushButtonDivision_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
