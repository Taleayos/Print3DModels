#ifndef VIEW_GIF_H
#define VIEW_GIF_H

#include <QMovie>
#include <QWidget>

namespace Ui {
class GIF;
}

class GIF : public QWidget {
  Q_OBJECT

 public:
  explicit GIF(QWidget *parent = 0);
  ~GIF();

 private:
  Ui::GIF *ui;

  QMovie m_movie;
};

#endif  // VIEW_GIF_H
