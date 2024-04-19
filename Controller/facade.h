#ifndef CONTROLLER_FACADE_H
#define CONTROLLER_FACADE_H

#include <../Controller/controller.h>
#include <../Model/model.h>
#include <../View/viewer.h>


/**
 *@brief Класс фасад, "скрывающий" от пользователя все логические процессы
 *взаимодействия с программой
 */
class Facade {
 public:
  /**
   * @brief Базовый конструктор класса Fasade
   */
  Facade() {
    model_ = new Model;
    controller_ = new Controller(model_);
    viewer_ = new Viewer(controller_);
  }

  /**
   * @brief Метод для вывода модели на экран
   */
  void Show() { viewer_->show(); }

 private:
  Model *model_;
  Controller *controller_;
  Viewer *viewer_;
};


#endif  // CONTROLLER_FACADE_H
