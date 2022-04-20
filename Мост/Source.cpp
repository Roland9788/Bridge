#include<iostream>
using namespace std;


class Color
{
	string color;
public:

	Color()
	{
		color = "None";
	}

	void SetColor(string color)
	{
		this->color = color;
	}
	
	string GetColor()
	{
		return color;
	}

};

class Figure
{
	int Volume;
public:

	Figure()
	{
		Volume = 0;
	}

	void createFigure(string figure,string color, int volume)
	{
		cout << "\nСоздана был создан " << figure << "\nЦвет: " << color << "\nОбъем: " << volume;
	}

	void SetVolume(int Volume)
	{
		this->Volume = Volume;
	}

	int GetVolume()
	{
		return Volume;
	}

};



class Red :public Color
{
	Color color;
public:

	Red()
	{
		color.SetColor("Красный");
	}

	string GetColor()
	{
		return color.GetColor();
	}
};

class Green :public Color
{
	Color color;
public:

	Green()
	{
		color.SetColor("Зеленый");
	}

	string GetColor()
	{
		return color.GetColor();
	}
};

class Yellow :public Color
{
	Color color;
public:

	Yellow()
	{
		color.SetColor("Желтый");
	}

	string GetColor()
	{
		return color.GetColor();
	}
};

class Black :public Color
{
	Color color;
public:

	Black()
	{
		color.SetColor("Чёрный");
	}

	string GetColor()
	{
		return color.GetColor();
	}
};

class Purple :public Color
{
	Color color;
public:

	Purple()
	{
		color.SetColor("Фиолетовый");
	}

	string GetColor()
	{
		return color.GetColor();
	}
};




class Cube: public Figure, Color
{
	Figure cube;
	Color color;

public:

	Cube()
	{
		cube.SetVolume(0);
		color.SetColor("None");
		createFigure("Куб", color.GetColor(),cube.GetVolume());
	}

	Cube(int i, string color)
	{
		cube.SetVolume(i);
		this->color.SetColor(color);
		createFigure("Куб", this->color.GetColor(),cube.GetVolume());
	}

};

class Sphere : public Figure, Color
{
	Figure sphere;
	Color color;

public:

	Sphere()
	{
		sphere.SetVolume(0);
		color.SetColor("None");
		createFigure("Сфера", color.GetColor(),sphere.GetVolume());
	}

	Sphere(int i, string color)
	{
		sphere.SetVolume(i);
		this->color.SetColor(color);
		createFigure("Сфера", this->color.GetColor(), sphere.GetVolume());
	}

};

class Tetrahedron : public Figure, Color
{
	Figure tetrahedron;
	Color color;

public:

	Tetrahedron()
	{
		tetrahedron.SetVolume(0);
		color.SetColor("None");
		createFigure("Тетраэдр", color.GetColor(), tetrahedron.GetVolume());
	}

	Tetrahedron(int i, string color)
	{
		tetrahedron.SetVolume(i);
		this->color.SetColor(color);
		createFigure("Тетраэдр", this->color.GetColor(), tetrahedron.GetVolume());
	}

};

class Didodecahedron : public Figure, Color
{
	Figure didodecahedron;
	Color color;

public:

	Didodecahedron()
	{
		didodecahedron.SetVolume(0);
		color.SetColor("None");
		createFigure("Дидодекаэдр", color.GetColor(), didodecahedron.GetVolume());
	}

	Didodecahedron(int i, string color)
	{
		didodecahedron.SetVolume(i);
		this->color.SetColor(color);
		createFigure("Дидодекаэдр", this->color.GetColor(), didodecahedron.GetVolume());
	}

};

class Tetragon_trioctahedron : public Figure, Color
{
	Figure tetragon_trioctahedron;
	Color color;

public:

	Tetragon_trioctahedron()
	{
		tetragon_trioctahedron.SetVolume(0);
		color.SetColor("None");
		createFigure("Тетрагон-триоктаэдр", color.GetColor(), tetragon_trioctahedron.GetVolume());
	}

	Tetragon_trioctahedron(int i, string color)
	{
		tetragon_trioctahedron.SetVolume(i);
		this->color.SetColor(color);
		createFigure("Тетрагон-триоктаэдр", this->color.GetColor(), tetragon_trioctahedron.GetVolume());
	}

};

int main()
{
	string Choice;
	setlocale(LC_ALL, "Rus");
	
	cout << "";

	cout << "\nВыберите фигуру\n";
	cin >> Choice;
	if (Choice == "1")
	{
		int i = 0;
		cout << "\nВведите объем фигуры\n";
		cin >> i;
		Choice = "0";
		cout << "\nВыберите цвет фигуры\n";
		cin >> Choice;
		if (Choice == "1")
		{
			Red color;
			Cube cube(i, color.GetColor());
		}

		if (Choice == "2")
		{
			Green color;
			Cube figure(i, color.GetColor());
		}

		if (Choice == "3")
		{
			Yellow color;
			Cube figure(i, color.GetColor());
		}

		if (Choice == "4")
		{
			Black color;
			Cube figure(i, color.GetColor());
		}

		if (Choice == "5")
		{
			Purple color;
			Cube figure(i, color.GetColor());
		}

		Choice = "0";
	}

	if (Choice == "2")
	{
		int i = 0;
		cout << "\nВведите объем фигуры\n";
		cin >> i;
		Choice = "0";
		cout << "\nВыберите цвет фигуры\n";
		cin >> Choice;
		if (Choice == "1")
		{
			Red color;
			Sphere figure(i, color.GetColor());
		}

		if (Choice == "2")
		{
			Green color;
			Sphere figure(i, color.GetColor());
		}

		if (Choice == "3")
		{
			Yellow color;
			Sphere figure(i, color.GetColor());
		}

		if (Choice == "4")
		{
			Black color;
			Sphere figure(i, color.GetColor());
		}

		if (Choice == "5")
		{
			Purple color;
			Sphere figure(i, color.GetColor());
		}

		Choice = "0";

	}

	if (Choice == "3")
	{
		int i = 0;
		cout << "\nВведите объем фигуры\n";
		cin >> i;
		Choice = "0";
		cout << "\nВыберите цвет фигуры\n";
		cin >> Choice;
		if (Choice == "1")
		{
			Red color;
			Tetrahedron figure(i, color.GetColor());
		}

		if (Choice == "2")
		{
			Green color;
			Tetrahedron figure(i, color.GetColor());
		}

		if (Choice == "3")
		{
			Yellow color;
			Tetrahedron figure(i, color.GetColor());
		}

		if (Choice == "4")
		{
			Black color;
			Tetrahedron figure(i, color.GetColor());
		}

		if (Choice == "5")
		{
			Purple color;
			Tetrahedron figure(i, color.GetColor());
		}

		Choice = "0";
	}

	if (Choice == "4")
	{
		int i = 0;
		cout << "\nВведите объем фигуры\n";
		cin >> i;
		Choice = "0";
		cout << "\nВыберите цвет фигуры\n";
		cin >> Choice;
		if (Choice == "1")
		{
			Red color;
			Didodecahedron figure(i, color.GetColor());
		}

		if (Choice == "2")
		{
			Green color;
			Didodecahedron figure(i, color.GetColor());
		}

		if (Choice == "3")
		{
			Yellow color;
			Didodecahedron figure(i, color.GetColor());
		}

		if (Choice == "4")
		{
			Black color;
			Didodecahedron figure(i, color.GetColor());
		}

		if (Choice == "5")
		{
			Purple color;
			Didodecahedron figure(i, color.GetColor());
		}

		Choice = "0";
	}

	if (Choice == "5")
	{
		int i = 0;
		cout << "\nВведите объем фигуры\n";
		cin >> i;
		Choice = "0";
		cout << "\nВыберите цвет фигуры\n";
		cin >> Choice;
		if (Choice == "1")
		{
			Red color;
			Tetragon_trioctahedron figure(i, color.GetColor());
		}

		if (Choice == "2")
		{
			Green color;
			Tetragon_trioctahedron figure(i, color.GetColor());
		}

		if (Choice == "3")
		{
			Yellow color;
			Tetragon_trioctahedron figure(i, color.GetColor());
		}

		if (Choice == "4")
		{
			Black color;
			Tetragon_trioctahedron figure(i, color.GetColor());
		}

		if (Choice == "5")
		{
			Purple color;
			Tetragon_trioctahedron figure(i, color.GetColor());
		}

		Choice = "0";
	}


	return 0;
}