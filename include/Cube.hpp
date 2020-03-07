
class Cube
{
public:
    void Cube(const int& length);
    
    int getLength() const;
    int getVolume() const;

private:
    int length_;
    int volume_;
};
