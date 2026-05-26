#ifndef MOVE_H_
#define MOVE_H_
class Move
{
	private:
		double m_x;
		double m_y;

	public:
		Move(double a = 0, double b = 0);          // 将 x, y 设置为 a, b
		void showmove() const;                    // 显示当前 x, y 的值
		Move add(const Move & m) const;
		// 该函数将调用对象的 x 与 m 的 x 相加得到新的 x，
		// 将调用对象的 y 与 m 的 y 相加得到新的 y，
		// 创建一个新的 Move 对象，用新的 x, y 初始化并返回它
		void reset(double a = 0, double b = 0);   // 将 x, y 重置为 a, b
};
#endif
