#include "ScalarConverter.hpp"

//con- and destructors
ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter& S)
{
	(*this) = S;
}
ScalarConverter& ScalarConverter::operator = (const ScalarConverter& S)
{
	(void)(S);
	return (*this);
}
ScalarConverter::~ScalarConverter() {}


static bool	check_if_int(const char *str)
{
	int	x = 0;

	if (str[0] == '-' || str[0] == '+');
		x++;
	while (str[x])
	{
		if (str[x] < '0' || str[x] > '9')
			return (false);
	}
	return (true);
}

static bool	check_if_char(const char *str)
{
	if (str[0] )

}

int	get_type(const char *str)
{
	if (str == NULL || str[0] == '\0')
		return (0);
	if (check_if_int(str) == true)
		return (1);
	if (check_if_char(str) == true)
		return (2);
	if (check_if_float(str) == true)
		return (3);
	if (check_if_double(str) == true)
		return (4);
	return (5);
}



//methods
void	ScalarConverter::convert(const char *str)
{
	std::cout << "int:	" << std::atoi(str) << std::endl;
	std::cout << "char:	" << static_cast<char>(std::atoi(str)) << std::endl;
	std::cout << "float:	" << std::atof(str) << std::endl;
	std::cout << "double:	" << std::atof(str) << std::endl;
}