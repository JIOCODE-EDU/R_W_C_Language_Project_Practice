#include <iostream>
using namespace std;

class Hotel
{
private:
  int hotel_id;
  string hotel_name;
  string hotel_type;
  string hotel_rating;
  string hotel_location;
  int hotel_establish_year;
  int hotel_staff_quentity;
  int hotel_room_quentity;

  static string country;

public:
  void setData(
      int id,
      string name,
      string type,
      string rating,
      string location,
      int year,
      int staff,
      int room )
  {
    hotel_id = id;
    hotel_name = name;
    hotel_type = type;
    hotel_rating = rating;
    hotel_location = location;
    hotel_establish_year = year;
    hotel_staff_quentity = staff;
    hotel_room_quentity = room;
  }

  void displayData(){
    cout << "\n Hotel Id : " << hotel_id;
    cout << "\n Hotel Name : " << hotel_name;
    cout << "\n Hotel Type : " << hotel_type;
    cout << "\n Hotel Rating : " << hotel_rating;
    cout << "\n Hotel Location : " << hotel_location;
    cout << "\n Hotel Extablish Year : " << hotel_establish_year;
    cout << "\n Hotel Staff Quentity : " << hotel_staff_quentity;
    cout << "\n Hotel Room Quentity : " << hotel_room_quentity;
    cout << "\n Country : " << country;

    cout << "\n=======================================\n";
  }

  static void setCountry(string c){
    country  = c;
  }
};

string Hotel::country = "India";

int main(){

  int n;
  cout << "Enter number of Hotels";
  cin >> n;

  Hotel h[n];

  int id , year , staff , room;
  string name , type , rating , location;
  
  for(int i = 0; i < n ; i++){
    cout << "\n Enter details for Hotel" << i + 1 << endl;
    cout << "Hotel Id : ";
    cin >> id;
    cout << "Hotel Name : ";
    cin >> name;
    cout << "Hotel Type : ";
    cin >> type;
    cout << "Hotel Rating : ";
    cin >> rating;
    cout << "Hotel Location : ";
    cin >> location;
    cout << "Hotel Establish Year : ";
    cin >> year;
    cout << "Hotel Staff Quentity : ";
    cin >> staff;
    cout << "Hotel Room Quentity : ";
    cin >> room;

    h[i].setData(id , name , type , rating , location , year , staff , room);
  }

  cout << "======= Details Of Hotels ========";

  for(int i = 0; i < n; i++){
    h[i].displayData();
  }

  return 0;
}