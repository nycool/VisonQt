#ifndef FRAMELESSBASE_H
#define FRAMELESSBASE_H
#include "QQuickView"

class FrameLessBase:public QQuickView
{
    Q_OBJECT

public:
    explicit FrameLessBase(QWindow* parent=nullptr) noexcept;

    ~FrameLessBase() {};

public:
    Q_PROPERTY(bool IsMax READ IsMax WRITE setIsMax NOTIFY IsMaxChanged)


    bool IsMax() const;

public slots:

    void setIsMax(bool isMax);

signals:
    void  IsMaxChanged(bool isMax);



private:

    //窗体最大化
    bool _isMax;
};

#endif // FRAMELESSBASE_H
