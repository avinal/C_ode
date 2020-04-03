#include <iostream>

class mechanics
{
protected:
    float acceleration;
    float displacement;
    float velocity;
    float time;

public:
    mechanics(float a, float v, float d, float t) : acceleration(a),
                                                    velocity(v),
                                                    displacement(d),
                                                    time(t)
    {
    }

    void velocity()
    {
        velocity = displacement / time;
    }

    void acceleration()
    {
        acceleration = velocity / time;
    }
};

class linear : public mechanics
{
    std::string unitv = "m/s";
    std::string unita = "m/sqr.s";
};

class rotational : public mechanics
{
    std::string unit = "rad/s";
    std::string unita = "rad/sqr.s";
    
};

int main()
{
    
}