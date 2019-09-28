#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    const int number_of_days = 10;
    const int number_of_hours = 24;
    double data[number_of_days][number_of_hours][2];
    int day,hour;
    double temprature , humidity;
    
    for(int k = 0; k < number_of_days * number_of_hours ; k++){
        cin >> day >> hour >> temprature >> humidity;
        data[day -1][hour - 1][0] = temprature;
        data[day -1][hour - 1][1] = humidity;
    }
    // find the avarage the daily 
    for(int i = 0; i < number_of_days ; i++){
        double dailyTemperatureTotal = 0,
               dailyHumidityTotal = 0;
        for(int j = 0; j < number_of_hours ; j++){
               dailyTemperatureTotal += data[i][j][0];
               dailyHumidityTotal += data[i][j][1];
        }       
        // Display result
        cout << "Day " << i << "'s average temperature is "
        << dailyTemperatureTotal / NUMBER_OF_HOURS << endl;
        cout << "Day " << i << "'s average humidity is "
        << dailyHumidityTotal / NUMBER_OF_HOURS << endl;
    } 
    
    return 0;
}
