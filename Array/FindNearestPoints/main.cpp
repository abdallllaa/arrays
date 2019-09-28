#include <iostream>
#include <cmath>
using namespace std;
// comput distance between two point 
double getDistance(double x1, double y1 , double x2 , double y2){
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

int main()
{
    const int number_of_point = 8;
    double points[number_of_point][2];
    cout << " Enter  " << number_of_point << " Points : ";
      for(int i = 0; i < number_of_point; i++)
          cin >> points[i][0] >> points[i][1];
    
    // p1 and p2 are the indices in the points array
    int p1 = 0, p2 = 1;
    double shortdist =  getDistance( points[p1][0], points[p1][1] , points[p2][0], points[p2][1]);

   // loops 
  for(int i = 0; i < number_of_point ; i++){
      for(int j = i + 1 ; i < number_of_point ; i++){
          double distance = getDistance(points[i][0], points[i][1],
            points[j][0], points[j][1]); // Find distance
            if (shortdist > distance)
            {
            p1 = i; // Update p1
            p2 = j; // Update p2
                shortdist = distance; // Update shortestDistance
            }
      }
  } 
          // Display result
        cout << "The closest two points are " <<
        "(" << points[p1][0] << ", " << points[p1][1] << ") and (" <<
        points[p2][0] << ", " << points[p2][1] << ")" << endl;
   
   return 0;
}
