class Punkt
{
	int x;
	int y;
	
public:
	Punkt(int, int);
	Punkt(Punkt const&);
	~Punkt();
	auto show() -> void;
	auto getX() -> int;
	auto getY() -> int;
	auto setXY(int, int) -> void;
	auto setXY(Punkt) -> void;
	auto getXY(int, int) -> Punkt;
};
	
