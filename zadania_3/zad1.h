class Punkt
{
	int x;
	int y;
	
public:
	Punkt(int, int);
	Punkt(Punkt const&);
	Punkt();
	
	~Punkt();
	auto show() -> void;
	auto getX() -> int;
	auto getY() -> int;
	auto setXY(int, int) -> void;
	auto setXY(Punkt) -> void;
	auto getXY(int, int) -> Punkt;
};

//zad2
class Prostokat
{
	Punkt lewy_gorny_w;
	Punkt prawy_dolny_w;
	
public:
	Prostokat(int, int, int, int);
	Prostokat(Punkt const&, Punkt const&);
	
	auto show() -> void;
	auto pole_powierzchni() -> int;
	auto punkt_w_prostokacie() -> bool;
	
};
	
