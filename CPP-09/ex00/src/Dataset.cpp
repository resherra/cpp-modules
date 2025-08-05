#include "../headers/Dataset.hpp"

Dataset::Dataset(){}

Dataset::Dataset(const Dataset& other): filename(other.filename), exc(other.exc) {}

Dataset::Dataset(std::string name, BitcoinExchange& btc_ex): filename(name), exc(btc_ex) {}

Dataset &Dataset::operator=(const Dataset &other)
{
    if (this != &other)
    {
        filename = other.filename;
        exc = other.exc;
    }
    return *this;
}

void Dataset::checkHeader()
{
    std::string header;
    std::getline(data, header);

    header.erase(remove_if(header.begin(), header.end(), isspace), header.end());
    if (header != "date|value")
    {
        std::cerr << "Invalid file header: " << header << "\n";
        std::exit(0);
    }
}

int    Dataset::checkStructure(std::string& line)
{
    if (std::count(line.begin(), line.end(), '|') != 1)
        return 0;
    line.erase(remove_if(line.begin(), line.end(), isspace), line.end());
    if (line.front() == '|' || line.back() == '|')
        return 0;
    return 1;
}

static int is_number(char c)
{
    return (c >= '0' && c <= '9');
}

static int is_num(std::string str)
{
    int i = 0;
    int str_length = str.length();
    int flag = 0;

    if (str[i] == '-' || str[i] == '+')
        i++;
    while (str[i] && i < str_length - 1)
    {
        if (is_number(str[i]) || str[i] == '.')
        {
            if (str[i] == '.')
                flag++;
        }
        else
            return 0;
        i++;
    }
    if (flag > 1)
        return 0;
    return 1;
}

static int is_date_valid(std::string str)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        if (is_number(str[i]) || str[i] == '-')
        {
        } else
            return 0;
    }
    return 1;
}

int    Dataset::checkDate(std::string date)
{
    if (std::count(date.begin(), date.end(), '-') != 2)
        return 0;

    int first = date.find('-');
    int sec = date.find('-', first + 1);

    std::string year, month, day;
    year = date.substr(0, first);
    month = date.substr(first + 1, sec - first - 1);
    day = date.substr(sec + 1);

    unsigned int _year, _month, _day;
    _year = std::atoi(date.substr(0, first).c_str());
    _month = std::atoi(date.substr(first + 1, sec - first - 1).c_str());
    _day = std::atoi(date.substr(sec + 1).c_str());

    if ((day.length() > 2 || day.length() < 1) || (_day < 1 || _day > 31))
        return 0;
    if ((month.length() > 2 || month.length() < 1) || (_month < 1 || _month > 12))
        return 0;
    if ((year.length() == 0) || _year == 0)
        return 0;

    return 1;
}

int    Dataset::checkValue(float value)
{
    if (value < 0)
        return -1;
    return value >= 0 && value <= 1000;
}

void Dataset::loadData()
{
    std::string line;

    while (std::getline(data, line))
    {
        std::string prnt_line(line);
        if (!checkStructure(line))
            std::cout << "Error: bad input => " + prnt_line << std::endl;
        else
        {
            int pos = line.find('|');
            std::string val(line.substr(pos + 1));
            std::string dat(line.substr(0, pos));
            if (is_num(val) && is_date_valid(dat))
            {
                std::pair<std::string, float> pa(dat, std::atof(val.c_str()));

                int check_value = checkValue(pa.second);
                if (!check_value || check_value < 0)
                {
                    if (check_value < 0)
                        std::cerr << "Error: not a positive number." << std::endl;
                    else
                        std::cerr << "Error: too large a number." << std::endl;
                }
                else if (!checkDate(pa.first))
                    std::cerr << "Error: invalid date." << std::endl;
                else
                {
                    float rate = exc.get(pa.first);
                    std::cout << pa.first << " => " << pa.second << " = " << pa.second * rate << std::endl;
                }
            }
            else
            {
                std::cout << "Error: bad input => " + prnt_line << std::endl;
            }
        }
    }
}

void Dataset::readData()
{
    data.open(filename);

    if (!data.is_open())
    {
        std::cerr << "Can't open the file: " << filename << "\n";
        std::exit(0);
    }    
    checkHeader();
    loadData();
}

Dataset::~Dataset(){}