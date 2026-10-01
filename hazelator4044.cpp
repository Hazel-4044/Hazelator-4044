#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {

    double Vf, Vi, dX, a, t;
    string missingVariable;
    string kinematicsEquation;

    cout << R"(Which kinematics equation do you want:
    1. [Vf = Vi + at]
    2. [dX = Vi(t) + 1/2 a(t)^2]
    3. [(Vf)^2 = (Vi)^2 + 2a(dX)]
    4. [dX = 1/2(Vi + Vf)t]
    5. [UwU]
    = )";

    cin >> kinematicsEquation;
    
    // Vf = Vi + at

    if (kinematicsEquation == "1") {

        cout << "What variable do you need to find? " << endl;
        cin >> missingVariable;

        if (missingVariable == "Vf") {

            cout << "Enter value for Vi, a , and t: " << endl;
            cin >> Vi >> a >> t;

            cout << "Vf = " << Vi + (a * t) << endl;
        }

        else if (missingVariable == "Vi") {

            cout << "Enter value for Vf, a, and t: " << endl;
            cin >> Vf >> a >> t;

            cout << "Vi = " << Vf - (a * t) << endl;
        }

        else if (missingVariable == "a") {

            cout << "Enter value for Vf, Vi, and t: " << endl;
            cin >> Vf >> Vi >> t;

            cout << "a = " << (Vf - Vi) / t << endl;
        }

        else if (missingVariable == "t") {

            cout << "Enter value for Vf, Vi, a: " << endl;
            cin >> Vf >> Vi >> a;

            cout << "t = " << (Vf - Vi) / a << endl;
        }

        else {
            cout << "Invalid variable." << endl;
        }
    }

    // dX = Vi(t) + 1/2 a(t)^2

    else if (kinematicsEquation == "2") {

        cout << "What variable do you need to find? ";
        cin >> missingVariable;

        if (missingVariable == "dX") {

            cout << "Enter value for Vi, a, and t: " << endl;
            cin >> Vi >> a >> t;

            dX = (Vi * t) + (0.5 * a * t * t);

            cout << "dX = " << dX << endl;
        }

        else if (missingVariable == "Vi") {

            cout << "Enter value for dX, a, and t: " << endl;
            cin >> dX >> a >> t;

            Vi = (dX - (0.5 * a * t * t)) / t;

            cout << "Vi = " << Vi << endl;
        }

        else if (missingVariable == "a") {

            cout << "Enter value for dX, Vi, and t: " << endl;
            cin >> dX >> Vi >> t;

            a = 2 * (dX - (Vi * t)) / (t * t);

            cout << "a = " << a << endl;
        }

        else if (missingVariable == "t") {

            cout << "Enter value for dX, Vi, and a: " << endl;
            cin >> dX >> Vi >> a;

            // Quadratic formula:
            // 1/2 at^2 + Vit - dX = 0

            double discriminant = (Vi * Vi) + (2 * a * dX);

            if (discriminant < 0) {
                cout << "There is no real solution for t." << endl;
            }
            else {
                double t1 = (-Vi + sqrt(discriminant)) / a;
                double t2 = (-Vi - sqrt(discriminant)) / a;

                cout << "t = " << t1 << endl;

                if (t2 != t1) {
                    cout << "or t = " << t2 << endl;
                }
            }
        }

        else {
            cout << "Invalid variable." << endl;
        }
    }

    // Vf^2 = Vi^2 + 2a(dX)

    else if (kinematicsEquation == "3") {

        cout << "What variable do you need to find? ";
        cin >> missingVariable;

        if (missingVariable == "Vf") {

            cout << "Enter value for Vi, a, and dX: " << endl;
            cin >> Vi >> a >> dX;

            double result = (Vi * Vi) + (2 * a * dX);

            if (result < 0) {
                cout << "There is no real solution for Vf." << endl;
            }
            else {
                Vf = sqrt(result);

                cout << "Vf = " << Vf << endl;
                cout << "or Vf = " << -Vf << endl;
            }
        }

        else if (missingVariable == "Vi") {

            cout << "Enter value for Vf, a, and dX: " << endl;
            cin >> Vf >> a >> dX;

            double result = (Vf * Vf) - (2 * a * dX);

            if (result < 0) {
                cout << "There is no real solution for Vi." << endl;
            }
            else {
                Vi = sqrt(result);

                cout << "Vi = " << Vi << endl;
                cout << "or Vi = " << -Vi << endl;
            }
        }

        else if (missingVariable == "a") {

            cout << "Enter value for Vf, Vi, and dX: " << endl;
            cin >> Vf >> Vi >> dX;

            a = ((Vf * Vf) - (Vi * Vi)) / (2 * dX);

            cout << "a = " << a << endl;
        }

        else if (missingVariable == "dX") {

            cout << "Enter value for Vf, Vi, and a: " << endl;
            cin >> Vf >> Vi >> a;

            dX = ((Vf * Vf) - (Vi * Vi)) / (2 * a);

            cout << "dX = " << dX << endl;
        }

        else {
            cout << "Invalid variable." << endl;
        }
    }

    // dX = 1/2(Vi + Vf)t

    else if (kinematicsEquation == "4") {

        cout << "What variable do you need to find? ";
        cin >> missingVariable;

        if (missingVariable == "dX") {

            cout << "Enter value for Vi: ";
            cin >> Vi;

            cout << "Enter value for Vf: ";
            cin >> Vf;

            cout << "Enter value for t: ";
            cin >> t;

            dX = 0.5 * (Vi + Vf) * t;

            cout << "dX = " << dX << endl;
        }

        else if (missingVariable == "Vi") {

            cout << "Enter value for dX, Vf, and t: " << endl;
            cin >> dX >> Vf >> t;

            Vi = (2 * dX / t) - Vf;

            cout << "Vi = " << Vi << endl;
        }

        else if (missingVariable == "Vf") {

            cout << "Enter value for dX, Vi, and t: " << endl;
            cin >> dX >> Vi >> t;

            Vf = (2 * dX / t) - Vi;

            cout << "Vf = " << Vf << endl;
        }

        else if (missingVariable == "t") {

            cout << "Enter value for dX, Vi, and Vf: " << endl;
            cin >> dX >> Vi >> Vf;

            t = (2 * dX) / (Vi + Vf);

            cout << "t = " << t << endl;
        }

        else {
            cout << "Invalid variable." << endl;
        }
    }
        else {
        cout << "Invalid equation." << endl;
    }

    return 0;
}
