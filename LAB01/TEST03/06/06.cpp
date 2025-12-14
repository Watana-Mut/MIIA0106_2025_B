#include <iostream>
#include <string>
using namespace std;

enum class SensorPosition
{
    Left,
    Center,
    Right,
    Unknown
};

class MotorController
{
public:
    void turnLeft()
    {
        cout << "Action: Turn LEFT  (left motor slower, right motor faster)\n";
    }

    void turnRight()
    {
        cout << "Action: Turn RIGHT (left motor faster, right motor slower)\n";
    }

    void goStraight()
    {
        cout << "Action: Go STRAIGHT (both motors same speed)\n";
    }

    void stop()
    {
        cout << "Action: STOP\n";
    }
};

SensorPosition parseSensorInput(const string& s)
{
    if (s.empty()) return SensorPosition::Unknown;
    char c = s[0];
    switch (c)
    {
    case 'l': case 'L': return SensorPosition::Left;
    case 'c': case 'C': return SensorPosition::Center;
    case 'r': case 'R': return SensorPosition::Right;
    default: return SensorPosition::Unknown;
    }
}

int main()
{
    MotorController motor;
    cout << "Line Following Robot - control simulation\n";
    cout << "Enter sensor reading: L (left), C (center), R (right). Q to quit.\n";

    string input;
    while (true)
    {
        cout << "Sensor> ";
        if (!getline(cin, input)) break;

        if (!input.empty() && (input[0] == 'q' || input[0] == 'Q'))
        {
            motor.stop();
            break;
        }

        SensorPosition pos = parseSensorInput(input);

        switch (pos)
        {
        case SensorPosition::Left:
            // When sensor detects the black line on the left, steer left
            motor.turnLeft();
            break;

        case SensorPosition::Right:
            // When sensor detects the black line on the right, steer right
            motor.turnRight();
            break;

        case SensorPosition::Center:
            // When sensor detects the black line centered, go straight
            motor.goStraight();
            break;

        default:
            // Unknown reading: stop or take a safe action
            cout << "Sensor: UNKNOWN reading. Stopping for safety.\n";
            motor.stop();
            break;
        }
    }

    return 0;
}