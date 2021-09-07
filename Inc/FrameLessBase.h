#ifndef FRAMELESSBASE_H
#define FRAMELESSBASE_H
#include "QQuickView"

class FrameLessBase :public QQuickView
{
	Q_OBJECT

		using  base = QQuickView;

public:
	explicit FrameLessBase(QWindow* parent = nullptr) noexcept;

	~FrameLessBase() override = default;

public:
	Q_PROPERTY(bool IsMax READ IsMax WRITE setIsMax NOTIFY IsMaxChanged)

		bool IsMax() const;

public slots:

	void setIsMax(bool isMax);

signals:
	void  IsMaxChanged(bool isMax);
	void MousePressed(int x, int y, Qt::MouseButton button);

protected:

	void mousePressEvent(QMouseEvent* pressEvent) override;

//	void resizeEvent(QResizeEvent* resizeEvent) override;

//#if QT_VERSION>=QT_VERSION_CHECK(6,0,0)
//	bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override;
//#else
//	bool nativeEvent(const QByteArray& eventType, void* message, long* result) override;
//#endif

private:

	//窗体最大化
	bool _isMax;
};

#endif // FRAMELESSBASE_H
