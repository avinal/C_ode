#include <iostream>
#include <fstream>
#include <vector>
#include <iostream>
#include <iterator>

std::vector<unsigned char> double_to_uchar(std::vector<double> input)
{
    /* Find largest and smallest number in array */
    double min_ele = 0;
    double max_ele = 0;
    for (int i = 0; i < 4128; i++)
    {
        if (min_ele > input[i])
            min_ele = input[i];
        if (max_ele < input[i])
            max_ele = input[i];
    }
    std::vector<unsigned char> output;
    output.reserve(4128);
    /* Scale Image to uchar based on the largest and smallest number in array */
    for (long long i = 0; i < 4128; i++)
    {
        output.push_back(static_cast<unsigned char>((input[i] - min_ele) * 255.0 / (max_ele - min_ele)));
    }
    return output;
}
void readImage(std::ifstream &file)
{
    int position = 14400;
    file.seekg(position);
    std::vector<double> parsed; //(std::istream_iterator<double>(file), {});
    parsed.resize(4128);
    file.read(reinterpret_cast<char *>(&parsed[0]), 4128 * sizeof(parsed[0]));
    file.close();
    auto changed = double_to_uchar(parsed);
    std::ofstream image("data.txt");
    for (int i = parsed.size() - 1; i >= 0; i--)
    {
        image << parsed[i] << " ";
    }
}

int main()
{
    std::ifstream file("fits2.fits", std::ios::binary);
    readImage(file);
    return 0;
}