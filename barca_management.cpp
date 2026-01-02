#include <iostream>
#include <cmath>
#include <conio.h>
#include <fstream>
using namespace std;

// file defination

#define LOGIN_FILE "Login Information.txt"
#define PLAYER_FILE "Players Information.txt"




// variable declaration

string name[100];
string nationality[100];
int age[100];
float height[100];
string main_position[100];
string alternate_position[100];
int pace[100];
int shooting[100];
int passing[100];
int dribbling[100];
int defending[100];
int physical[100];
int weak_foot[100];
int skills[100];

int total_players = 0;

string date[100];
string day[100];
string opponent[100];
string venue[100];
string timing[100];
string result[100];

int total_matches = 0;

// functions declaration for the admin role

void save_login_information(string role, string email, string password); // function for file handling of login
void save_player_information();  // function for saving data of players  to file


void header();
void admin_menu();
void add_players();
void view_players();
void update_players();
void delete_players();
void transfers_this_season();
void top_transfers();
void transfers_rumors();
void match_schedule();
void view_match_result();
void add_match_result();
void laliga_standing();
void ucl_matches_schedule();
void icons();
void trophies_won();
void management();

// functions declaration for the coach role

void players_stats();
void injured_players();
void coach_menu();

// file handilng function declaration before main function for ease


void save_login_information(string role, string email, string password)
{
ofstream file(LOGIN_FILE, ios::app);

if (!file)
{
cout << "Login file error!\n";
return;
}

file << " Role: " << role << endl;
file << " Email: " << email << endl;
file << " Password: " << password << endl;
file << "----------------------" << endl;

file.close();
}

void save_player_information() {
ofstream file(PLAYER_FILE, ios::out); // open file in write mode (overwrite)
    
if (!file) {
cout << "Error opening players file!\n";
return;
}

for (int i = 0; i < total_players; i++) {
file << name[i] << " , " << nationality[i] << " , " << age[i] 
<< " , " << height[i] << " , " << main_position[i] << " , " << alternate_position[i] 
<< " , " << pace[i] << " , " << shooting[i] << " , " << passing[i] << " , " << dribbling[i] 
<< " , " << defending[i] << " , " << physical[i] << " , " << weak_foot[i] << " , " << skills[i] << endl;
}

file.close();
}






// main function

int main(){

system("color 03");

string email;
string password;
string role;

cout << "\n -------Press Any Key to Enter------- \n";
getch();

cout << " Enter your role (admin or coach) : ";
cin >> role;

cout << " Enter the email : ";
cin >> email;

cout << " Enter the password : ";
cin >> password;

if (email == "admin@fcbarcelona.com" && password == "1234" && (role == "Admin" || role == "admin" || role == "ADMIN")){

save_login_information(role, email, password);

header();
admin_menu();

}
else if(email == "coach@fcbarcelona.com" && password == "1234" && (role == "Coach" || role == "coach" || role == "COACH")){

save_login_information(role, email, password);

header();
coach_menu();

}
else {
cout << " Invalid Login! Try Again." << endl;
}

return 0;

}



void header(){
cout << " \n\n\n\n\n ";
cout << "||===============================================================================================================|| \n ";
cout << "||===============================================================================================================|| \n ";
cout << "||                                                                                                               || \n ";
cout << "||  ||*******************************************************************************************************||  || \n ";
cout << "||  ||                                                                                                       ||  || \n ";
cout << "||  ||       ::::::::::            ::            ::::::::           :::::::::            ::                  ||  || \n ";
cout << "||  ||      ::      :::          ::  ::          ::     ::        ::                   ::  ::                ||  || \n ";
cout << "||  ||      ::        ::        ::    ::         ::      ::      ::                   ::    ::               ||  || \n ";
cout << "||  ||      ::        ::       ::      ::        ::       ::    ::                   ::      ::              ||  || \n ";
cout << "||  ||      ::::::::::::      ::::::::::::       :::::::::::   ::                   ::::::::::::             ||  || \n ";
cout << "||  ||      ::        ::     ::          ::      :: ::          ::                 ::          ::            ||  || \n ";
cout << "||  ||      ::        ::    ::            ::     ::   ::         ::               ::            ::           ||  || \n ";
cout << "||  ||      ::      :::    ::              ::    ::     ::        ::             ::              ::          ||  || \n ";
cout << "||  ||      ::::::::::    ::                ::   ::       ::        :::::::::   ::                ::         ||  || \n ";
cout << "||  ||                                                                                                       ||  || \n ";
cout << "||  ||       ( VISCA       BARCA       VISCA       CATALUNA        MÉS       QUE       UN       CLUB  )      ||  || \n ";
cout << "||  ||                                                                                                       ||  || \n ";
cout << "||  ||                                                                                                       ||  || \n ";
cout << "||  *********************************************************************************************************||  || \n ";
cout << "||                                                                                                               || \n ";
cout << "||===============================================================================================================|| \n ";
cout << "||===============================================================================================================|| \n ";
cout << " \n\n\n\n\n ";

}


// menu to show options for the admin role

void admin_menu(){

int option;
while(true){
cout << " Select One of the Following Options to Proceed Further : " << endl;
cout << " 1. Add Players " << endl;
cout << " 2. View Players " << endl;
cout << " 3. Update Players " << endl;
cout << " 4. Delete Players " << endl;
cout << " 5. Transfers This Season " << endl;
cout << " 6. Transfer Rumors in FC Barcelona " << endl;
cout << " 7. Top Transfers of All Time " << endl;
cout << " 8. Matches Schedule " << endl;
cout << " 9. Add Match Result " << endl;
cout << " 10. View Match Result " << endl;
cout << " 11. Laliga Standing " << endl;
cout << " 12. UCL Matches Schedule " << endl;
cout << " 13. Icons of the Club " << endl;
cout << " 14. Trophies Won in History " << endl;
cout << " 15. Management Team " << endl;
cout << " 16. Return to Main Menu/ Exit " << endl;
cout << endl;
cout << " Your Option : ";
cin >> option;


// conditions and calling of functions according to the option

if (option == 1){
add_players();
cout << endl;
}

else if(option == 2){
view_players();
cout << endl;
}

else if(option == 3){
update_players();
cout << endl;
}

else if(option == 4){
delete_players();
cout << endl;
}

else if(option == 5){
transfers_this_season();
cout << endl;
}

else if(option == 6){
transfers_rumors();
cout << endl;
}

else if(option == 7){
top_transfers();
cout << endl;
}

else if(option == 8){
match_schedule();
cout << endl;
}

else if(option == 9){
add_match_result();
cout << endl;
}

else if(option == 10){
view_match_result();
cout << endl;
}

else if(option == 11){
laliga_standing();
cout << endl;
}

else if(option == 12){
ucl_matches_schedule();
cout << endl;
}

else if(option == 13){
icons();
cout << endl;
}

else if(option == 14){
trophies_won();
cout << endl;
}

else if(option == 15){
management();
cout << endl;
}

else if(option == 16){
break;
cout << " Thanks for Using the System! " << endl;
cout << endl;
}

else {
cout << " INVALID INPUT " << endl;
cout << endl;
getch();
}
}
}



void add_players(){
int n;
cout << " Enter the Number of Players You want to Add : ";
cin >> n;

for (int i =  total_players; i < total_players + n; i = i + 1){
cin.ignore();
cout << "\n--- PLAYER NUMBER " << i + 1 << "---\n" << endl;

cout << " Enter Name : ";
getline(cin, name[i]);

cout << " Enter Nationality : ";
getline(cin, nationality[i]);

cout << " Enter Age : ";
cin >> age[i];

cout << " Enter Height (in inches) : ";
cin >> height[i];

cout << " Enter Main Position : ";
cin  >> main_position[i];

cout << " Enter Alternate Position : ";
cin.ignore();
getline (cin, alternate_position[i]);

cout << " Enter Pace (out of 99) : ";
cin >> pace[i];

cout  << " Enter Shooting (out of 99) : ";
cin >> shooting[i];

cout << " Enter Passing (out of 99) : ";
cin >> passing[i];

cout <<" Enter Dribbling (out of 99) : ";
cin >> dribbling[i];

cout << " Enter Defending (out of 99) : ";
cin >> defending[i];

cout << " Enter Physical (out of 99) : ";
cin >> physical[i];

cout << " Enter Weak Foot (out of 5) : ";
cin >> weak_foot[i];

cout <<" Enter Skills (out of 5) : ";
cin >> skills[i];

cout << "-------PLAYER SAVED-------" << endl; 
getch();
}
total_players += n;
save_player_information();
}



void view_players(){
if(total_players == 0){

cout << " No Players Added Yet! " << endl;
return;
}

else{
for(int i = 0; i < total_players; i = i + 1){
cout << "\n----------INFORMATION OF PLAYER NUMBER " << i + 1 << " " <<"----------\n" << endl;
cout << " Name : " << name[i] << endl;
cout << " Nationality : " << nationality[i] << endl;
cout << " Age : " << age[i] << " " << "years " << endl;
cout << " Height : " << height[i] << " inches " << endl;
cout << " Main Position : " << main_position[i] << endl;
cout << " Alternate Position : " << alternate_position[i] << endl;
cout << " Pace : " << pace[i] << endl;
cout << " Shooting : " << shooting[i] << endl;
cout << " Dribbling : " << dribbling[i] << endl;
cout << " Passing : " << passing[i] << endl;
cout << " Defending : " << defending[i] << endl;
cout << " Physical : " << physical[i] << endl;
cout << " Weak Foot : " << weak_foot[i] << endl;
cout << " Skills : " << skills[i] << " " << "stars" << endl;
getch();
}
}
cout << endl;
cout << endl;
}



void update_players(){
if (total_players == 0) {
cout << " No Players to Update!\n";
return;
}

int index;
cout << " Enter Player Number to Update: ";
cin >> index;
index--;
 
if (index < 0 || index >= total_players) {
cout << "Invalid player number!\n";
getch();
return;
}

cin.ignore();
cout << "Enter New Name : ";
getline(cin, name[index]);

cout << " Enter New Nationality : ";
getline(cin, nationality[index]);

cout << " Enter New Age : ";
cin >> age[index];

cout << " Enter New Height (in inches) : ";
cin >> height[index];

cout << " Enter New Main Position : ";
cin >> main_position[index];

cout << " Enter New Alternate Position : ";
cin.ignore();
getline(cin, alternate_position[index]);

cout << " Enter New Pace : ";
cin >> pace[index];

cout << " Enter New Shooting : ";
cin >> shooting[index];

cout << " Enter New Passing : ";
cin >> passing[index];

cout << " Enter New Dribbling : ";
cin >> dribbling[index];

cout << " Enter New Defending : ";
cin >> defending[index];

cout << " Enter New Physical : ";
cin >> physical[index];

cout << " Enter New Weak Foot : ";
cin >> weak_foot[index];

cout << " Enter New Skills : ";
cin >> skills[index];

cout << "-------PLAYER UPDATED SUCCESSFULLY!-------";
cout << endl;
cout << endl;
save_player_information();
getch();
}



void delete_players(){
if (total_players == 0) {
cout << "THERE ARE NOT ANY PLAYERS TO DELETE!";
return;
}

int index;
cout << "Enter Player number to delete: ";
cin >> index;
index--;

if (index < 0 || index >= total_players) {
cout << " INVALID PLAYER NUMBER!\n";
return;
}

for (int i = index; i < total_players - 1; i++) {
name[i] = name[i + 1];
nationality[i] = nationality[i + 1];       
age[i] = age[i + 1];
height[i] = height[i + 1];
main_position[i] = main_position[i + 1];
alternate_position[i] = alternate_position[i + 1];
pace[i] = pace[i + 1];   
shooting[i] = shooting[i + 1];
passing[i] = passing[i + 1];
dribbling[i] = dribbling[i + 1];
defending[i]= defending[i + 1];
physical[i]= physical[i + 1];
weak_foot[i]= weak_foot[i + 1];
skills[i]= skills[i + 1];


cout << "PLAYERS DELETED SUCCESSFULLY!\n";
getch();
}
total_players--;
save_player_information();

cout << endl;
cout << endl;
}



void transfers_this_season(){
cout << " Here are Top Transfers This Season for FC Barcelona : " << endl;
cout << endl;
cout << " \n------TOP ARRIVALS------\n " << endl;
cout << " Name : Lionel Andres Messi " << endl;
cout << " Age : 39 years " << endl;
cout << " Position : RW, ST, CAM " << endl;
cout << " Bought From : Inter Miami " << endl;
cout << " Transfer type : Permanent Tranfer " << endl;  
cout << " Transfer Fees : 100 Million " << endl;
cout << endl;
getch();

cout << " Name : Erling Haaland " << endl;
cout << " Age : 25 years " << endl;
cout << " Position :  ST, CF " << endl;
cout << " Bought From : Manchester City " << endl;
cout << " Transfer type : Permanent Tranfer " << endl;  
cout << " Transfer Fees : 110 Million " << endl;
cout << endl;
getch();

cout << " Name : Vitinha " << endl;
cout << " Age : 26 years " << endl;
cout << " Position :  CM, CAM, CDM, RW " << endl;
cout << " Bought From : Psg " << endl;
cout << " Transfer type : Permanent Tranfer " << endl;  
cout << " Transfer Fees : 90 Million " << endl;
cout << endl;
getch();

cout << " Name : Achraf Hakimi " << endl;
cout << " Age : 30 years " << endl;
cout << " Position :  RB, CB, LB " << endl;
cout << " Bought From : Psg " << endl;
cout << " Transfer type : Loan Tranfer " << endl;  
cout << " Transfer Fees : 10 Million " << endl;
cout << endl;
getch();

cout << " \n------TOP DEPARTURES------ \n" << endl;
cout << " Name : Robert Lewandowski " << endl;
cout << " Age : 38 years " << endl;
cout << " Position : CF, ST, RW " << endl;
cout << " Sold To : Al Hilal " << endl;
cout << " Transfer type : Permanent Tranfer " << endl;  
cout << " Transfer Fees : 50 Million " << endl;
cout << endl;
getch();

cout << " Name : Ronald Araujo " << endl;
cout << " Age : 27 years " << endl;
cout << " Position :  RB, CB, " << endl;
cout << " Sold to : FC Bayern Munich " << endl;
cout << " Transfer type : Permanent Tranfer " << endl;  
cout << " Transfer Fees : 95 Million " << endl;
cout << endl;
getch();

cout << " Name : Ferran Torres " << endl;
cout << " Age : 29 years " << endl;
cout << " Position :  ST, RW, LW, CF " << endl;
cout << " Sold to : Inter Milan " << endl;
cout << " Transfer type : Permanent Tranfer " << endl;  
cout << " Transfer Fees : 77 Million " << endl;
cout << endl;
getch();

cout << " Name : Gavi " << endl;
cout << " Age : 23 years " << endl;
cout << " Position :  CAM, CM, CDM " << endl;
cout << " Sold to : Liverpool FC " << endl;
cout << " Transfer type : Permanent Tranfer " << endl;  
cout << " Transfer Fees : 150 Million " << endl;
cout << endl;
cout << endl;
getch();

}


void top_transfers(){
cout << " Here are All Time Top Transfers for FC Barcelona : " << endl;
cout << endl;
cout << " \n------TOP ARRIVALS------\n " << endl;
cout << " Name : Ousmane Dembélé " << endl;
cout << " Age at the Time of Transfer : 20 years " << endl;
cout << " Year : 2017 " << endl;
cout << " Position : RW, LW, CF" << endl;
cout << " Bought From : Borussia Dortmund " << endl;
cout << " Transfer Fees : 148 Million € " << endl;
cout << endl;
getch();

cout << " Name : Philippe Coutinho " << endl;
cout << " Age : 25 years " << endl;
cout << " Year : 2018 " << endl;
cout << " Position : CAM, CM, LW " << endl;
cout << " Bought From : Liverpool FC " << endl;
cout << " Transfer Fees : 135 Million € " << endl;
cout << endl;
getch();

cout << " Name : Antoine Griezmann " << endl;
cout << " Age : 28 years " << endl;
cout << " Year : 2019 " << endl;
cout << " Position : ST, CAM, CF, SS " << endl;
cout << " Bought From : Atletico Madrid " << endl;
cout << " Transfer Fees : 120 Million € " << endl;
cout << endl;
getch();

cout << " Name : Neymar Jr. " << endl;
cout << " Age : 21 years " << endl;
cout << " Year : 2013 " << endl;
cout << " Position : LW, SS, CAM " << endl;
cout << " Bought From : Santos FC" << endl;
cout << " Transfer Fees : 88 Million € " << endl;
cout << endl;
getch();

cout << " Name : Frenkie de Jong " << endl;
cout << " Age : 22 years " << endl;
cout << " Year : 2019 " << endl;
cout << " Position : CM, CDM, CAM " << endl;
cout << " Bought From : Ajax " << endl;
cout << " Transfer Fees : 86 Million € " << endl;
cout << endl;
getch();

cout << " Name : Luis Suárez " << endl;
cout << " Age : 27 years " << endl;
cout << " Year : 2014 " << endl;
cout << " Position : ST " << endl;
cout << " Bought From : Liverpool FC " << endl;
cout << " Transfer Fees : 81.7 Million € " << endl;
cout << endl;
getch();

cout << " \n------TOP DEPARTURES------ \n" << endl;
cout << " Name : Neymar Jr " << endl;
cout << " Age : 27 years " << endl;
cout << " Year : 2017 " << endl;
cout << " Position : LW, CAM, RW " << endl;
cout << " Sold To : Psg " << endl;  
cout << " Transfer Fees : 222 Million " << endl;
cout << endl;
getch();

cout << " Name : Arthur Melo " << endl;
cout << " Age : 25 years " << endl;
cout << " Year : 2020 " << endl;
cout << " Position : LW, CAM, RW " << endl;
cout << " Sold To : Juventus " << endl;  
cout << " Transfer Fees : 80 Million " << endl;
cout << endl;
getch();

cout << " Name : Ronald Araujo " << endl;
cout << " Age : 27 years " << endl;
cout << " Year : 2025 " << endl;
cout << " Position : CB, RB, LB " << endl;
cout << " Sold To : FC Bayer Munich " << endl;  
cout << " Transfer Fees : 75 Million " << endl;
cout << endl;
getch();

cout << " Name : Gavi " << endl;
cout << " Age : 24 years " << endl;
cout << " Year : 2023 " << endl;
cout << " Position : CDM, CAM, RW " << endl;
cout << " Sold To : Inter Milan " << endl;  
cout << " Transfer Fees : 110 Million " << endl;
cout << endl;
cout << endl;
getch();
}

void transfers_rumors(){
cout << " Raphinha to Leave Barcelona : " << endl;
cout << " There is a chance Raphinha might leave Barcelona if they don't win Champions league next season. He wants to win everything and Manchester city have showed intrest in him. But the club believes that he is happy and will stay for long. He might also renew his contract soon if they win Champions league. The club believes that they have everything to win the competition. " << endl;
cout << endl;
cout << endl;
getch();

cout << " Julian Alvarez to Barcelona : " << endl;
cout << " Julian Alvarez has again shown interest that he wants to join FC Barcelona. According to him Barca is the Greatest Club of all time and he has always admire Messi as the greatest player of all time. The spiderman is tired of carrying Simeone and wants to start a new journey to his life. Julian itself wants to win everything and he thinks that FC Barcelona is the best club for that. " << endl;
cout << endl;
cout << endl;
getch();

cout << " Eric Garcia New Contract : " << endl;
cout << " Eric Garcia is expected to renew his contract. He is very happy at Barcelona although he is a rotational player. However with Hansi Flick, the spanish man is enjoying his life and will play for his life " << endl;
cout << endl;
cout << endl;
getch();

cout << " Messi Joining : " << endl;
cout << " Yes, that's the most famous and important news in the world. The GOAT has joined his house. Messi has decided to join FC Barcelona. He player left the club due to financial conditions. But the club has finally signed the goat and will try to win everything for the club. Messi is ready to lead the team to glory and the sixth UCL trophy. " << endl; 
cout << endl;
cout << endl;
getch();

cout << endl;
}

void match_schedule(){
cout << "\n-------UPCOMING MATCHES-------\n " << endl;

string date[] = { "13 November" , "17 November" , "25 November" , "30 November" , "7 December" };
string day[] = {"Sunday" , "Saturday" , "Sunday" , "Thursday" , "Sunday" }; 
string opponent[] = { "Real Madrid" , "Atletico Madrid" , "Espanol" , "Getafe" , "Real Betis"};
string venue[] = {"Santiago Bernabao" , "Metropolitano Stadium" , "Camp Nou" , "Lionel Stadio el spi" , "Camp Nou"};
string timing[] = {"Evening" , "Morning" , "Evening" , "Evening" , "Evening"};

for(int i = 0; i < 5; i = i + 1){
cout << "\n----- MATCH NUMBER " << i + 1 << "-----\n" << endl;
cout << " Date : " << date[i] << endl;
cout << " Day : " << day[i] << endl;
cout << " Opponent : " << opponent[i] << endl;
cout << " Venue : " << venue[i] << endl;
cout << " Timing (morning or evening) : " << timing[i] << endl;
cout << endl;
cout << endl;
getch();
}

cout << endl;
cout << endl;
getch();
}

void add_match_result(){
int m;
cout << " Enter the Number of Matches You want to Add : ";
cin >> m;

for (int i =  0; i < m; i = i + 1){
cin.ignore();
cout << "\n---- PLAYER NUMBER " << i + 1 << "----\n" << endl;

cout << " Enter Date : ";
cin.ignore();
cin >> date[i];

cout << " Enter Day : ";
cin >> day[i];

cout << " Enter Opponent : ";
cin >> opponent[i];

cout << " Enter Venue : ";
cin >> venue[i];

cout <<" Enter the Result of the Match : ";
cin >> result[i];

cout << "-------PLAYER SAVED-------" << endl; 
cout << endl;
cout << endl;
getch();
}
total_matches = total_matches + m;
}


void view_match_result(){
if(total_matches == 0){

cout << " No Matches Added Yet! " << endl;
cout << endl;
cout << endl;
getch();
return;
}

else{
for(int i = 0; i < total_matches; i = i + 1){
cout << "\n----------INFORMATION OF MATCH NUMBER " << i + 1 << " " <<"----------\n" << endl;
cout << " Date : " << date[i] << endl;
cout << " Day : " << day[i] << endl;
cout << " Opponent : " << opponent[i] << endl;
cout << " Venue : " << venue[i] << endl;
cout << " Result : " << result[i] << endl;
cout << endl;
cout << endl;
getch();
}
}
}

void laliga_standing(){
cout << " Number    Team          Matches Played    Points " << endl;
cout << endl;
cout << " 1\t\t FC Barcelona      29              67 " << endl;
cout << " 2\t\t Real Madrid       29              65 " << endl;
cout << " 3\t\t Atletico Madrid   29              62 " << endl;
cout << " 4\t\t Villareal         29              60 " << endl;
cout << " 5\t\t Real Betis        28              60 " << endl;
cout << " 6\t\t Athletic Club     29              55 " << endl;
cout << " 7\t\t Espanol           29              53 " << endl;
cout << " 8\t\t Getafe            29              51 " << endl;
cout << endl;
cout << endl;
getch();
}

void ucl_matches_schedule(){
string ucl_matches[8] = { "Barcelona vs Bayern (HOME)", "Arsenal vs Barcelona (AWAY)", "Barcelona vs Benfica (HOME)", "Dynamo Kyiv vs Barcelona (AWAY) ", "Barcelona vs Porto (HOME)", "Juventus vs Barcelona (AWAY)", "Manchester City vs Barcelona (AWAY)", "Barcelona vs AC Milan (HOME)" };
for(int i = 0; i < 8; i= i + 1){
cout << " Match Number " << i+1 << " : " << ucl_matches[i] << endl;
}
cout << endl;
cout << endl;
getch();
}

void icons(){
cout << " Here are Some Icons of FC Barcelona of All Time " << endl;
cout << endl;

cout << " Name: Lionel Messi (RW, CAM, CF)  Nationality: Argentina " << endl;
cout << " Name: Xavi Hernández (CM)         Nationality: Spain " << endl;
cout << " Name: Andrés Iniesta (CM)         Nationality: Spain " << endl;
cout << " Name: Carles Puyol (CB)           Nationality: Spain " << endl;
cout << " Name: Johan Cruyff (FW, AM)       Nationality: Netherlands " << endl;
cout << " Name: Ronaldinho (LW, CAM)        Nationality: Brazil " << endl;
cout << " Name: Neymar Jr. (LW, CF)         Nationality: Brazil " << endl;
cout << " Name: Samuel Etoo (CF)            Nationality: Cameroon " << endl;
cout << " Name: Luis Suárez (CF)            Nationality: Uruguay " << endl;
cout << " Name: Gerard Piqué (CB)           Nationality: Spain " << endl;
cout << " Name: Sergio Busquets (CDM, CM)   Nationality: Spain " << endl;
cout << " Name: Victor Valdés (GK)          Nationality: Spain" << endl;
cout << " Name: Rivaldo (LW, CF)            Nationality: Brazil " << endl;
cout << " Name: Diego Maradona (FW)         Nationality: Argentina " << endl;
cout << " Name: Pep Guardiola (CM)          Nationality: Spain " << endl;
cout << " Name: Deco (CAM, CM)              Nationality: Portugal " << endl;
cout << " Name: Hristo Stoichkov (LW, CF)   Nationality: Bulgaria " << endl;
cout << " Name: Romário (CF)                Nationality: Brazil " << endl;
cout << " Name: Dani Alves (RB)             Nationality: Brazil " << endl;
cout << " Name: Jordi Alba (LB)             Nationality: Spain " << endl;
cout << " Name: Thierry Henry (CF, LW)      Nationality: France " << endl;
cout << " Name: Luis Enrique (RW, CF)       Nationality: Spain " << endl;
cout << " Name: Michael Laudrup (CAM, CF)   Nationality: Denmark " << endl;
cout << " Name: Patrick Kluivert (CF)       Nationality: Netherlands " << endl;
cout << " Name: Henrik Larsson (CF)         Nationality: Sweden " << endl;
cout << " Name: Pedro Rodríguez (RW, CF)    Nationality: Spain " << endl;
cout << " Name: Albert Ferrer (RB)          Nationality: Spain " << endl;
cout << " Name: Miguel Ángel Nadal (CB, LB) Nationality: Spain " << endl;
cout << " Name: Sergi Barjuán (LB)          Nationality: Spain " << endl;
cout << " Name: Iván de la Peña (CM)        Nationality: Spain " << endl;
cout << " Name: Eric Abidal (LB, CB)        Nationality: France " << endl;
cout << " Name: José Manuel Pinto (GK)      Nationality: Spain " << endl;
cout << " Name: Juan Carlos (GK)            Nationality: Spain " << endl;
cout << " Name: Nolito (LW, RW)             Nationality: Spain " << endl;
cout << " Name: Ibrahim Afellay (RW, LW)    Nationality: Netherlands " << endl;
cout << " Name: Jordi Cruyff (FW, CAM)      Nationality: Netherlands " << endl;
cout << " Name: Oleguer Presas (CB)         Nationality: Spain " << endl;
cout << " Name: Alex Song (CDM, CM)         Nationality: Cameroon " << endl;
cout << " Name: Seydou Keita (CM, CDM)      Nationality: Mali " << endl;
cout << " Name: Thomas Vermaelen (CB)       Nationality: Belgium " << endl;
cout << " Name: Javier Mascherano (CDM, CB) Nationality: Argentina " << endl;
cout << " Name: Arturo Vidal (CM, CDM)      Nationality: Chile " << endl;
cout << " Name: Arda Turan (RW, CAM)        Nationality: Turkey " << endl;
cout << " Name: Marc-André ter Stegen (GK)  Nationality: Germany " << endl;
cout << " Name: Ousmane Dembélé (RW, LW)    Nationality: France " << endl;
cout << endl;
cout << endl;
getch();
}

void trophies_won(){
cout << " Here are the Trophies won By FC Barcelona in Their History : " << endl;
cout << endl;
cout << "\n--------TROPHIES WON--------\n" << endl;
cout << " UEFA Champions League: 5 titles — 1991-92, 2005-06, 2008-09, 2010-11, 2014-15 " << endl;
cout << " FIFA Club World Cup: 3 titles — 2009-10, 2011-12, 2015-16 " << endl;
cout << " European Cup Winners Cup: 4 titles — 1978-79, 1981-82, 1988-8"  << endl;
cout << " Inter-Cities Fairs Cup: 3 titles — 1957-58, 1959-60, 1965-66 " << endl; 
cout << " European Super Cup: 5 titles — 1992-93, 1997-98, 2009-10, 2011-12, 2015-16 " << endl;
cout << " Latin Cup: 2 titles — 1948-49, 1951-52 " << endl;
cout << " Fairs Super Cup: 1 title — 1971-72 " << endl;
cout << " La Liga (Spanish League Championship): 28 titles — first in 1928-29, most recently in 2024-25 " << endl; 
cout << " Copa del Rey (Spanish Cup): 32 titles — first in 1909-10, latest in 2024-25 " << endl; 
cout << " Supercopa de España (Spanish Super Cup): 15 titles — various years including 2024-25 " << endl; 
cout << " Copa de la Liga (Spanish League Cup): 2 titles — 1982-83, 1985-86 " << endl; 
cout << " Spanish Mediterranean League: 1 title — 1937 " << endl; 
cout << " Copa Eva Duarte (Predecessor to Supercopa): 3 titles — 1948-49, 1951-52, 1952-53 " << endl;
cout << " Catalan League Championship: 23 titles — early competitions before national league " << endl;
cout << " Catalan Super Cup: 2 titles " << endl;
cout << " Catalan Cup: 8 titles " << endl;
cout << endl;
cout << endl;
getch();
}

void management(){
cout << " Here is the Management Team of FC Barcelona Club " << endl;
cout << endl;
cout << "\n--------MANAGEMENT INFORMATION--------\n" << endl;
cout << " Head Coach : Hansi Flick " << endl;
cout << " President: Joan Laporta — Club President " << endl;
cout << " Director Responsible for Sporting Area: Rafael Yuste " << endl;
cout << " Director of Football: Deco (Anderson Luis de Souza) " << endl;
cout << " Football Coordinator: Bojan Krkic " << endl;
cout << " Director of Scouting: Paulo Araújo " << endl;
cout << " Managerial Director: Franc Carbó " << endl;
cout << " Barça Atlètic Head Coach: Juliano Belletti " << endl;
cout << " Youth Football General Manager: José Ramón Alexanko " << endl;
cout << " Youth Football Coordinators: Zigor Alesanco & Sergi Milà " << endl;
cout << endl;
cout << endl;
getch();
}

void coach_menu(){
int choice;

while(true){
cout << " Welcome Coach! Here is your dashboard for FC Barcelona. " << endl << endl;
cout << " 1. View Player Stats " << endl;
cout << " 2. View Injured Players " << endl;
cout << " 3. Transfer Rumors " << endl;
cout << " 4. Laliga Standing" << endl;
cout << " 5. UCL Matches Schedule" << endl;
cout << " 6. Return to Main Menu/ Exit " << endl;
cout << endl;
getch();

cout << " Enter your Option ";
cin >> choice;

if (choice == 1){
players_stats();
cout << endl;
}
else if(choice == 2){
injured_players();
cout << endl;
}
else if(choice == 3){
transfers_rumors();
cout << endl;
}
else if(choice == 4){
laliga_standing();
cout << endl;
}
else if(choice == 5){
ucl_matches_schedule();
cout << endl;
}
else if(choice == 6){
break;
cout << " Thanks for Using the System! " << endl;
cout << endl;
}
else{
cout << " INVALID INPUT " << endl;
getch();
}
}
}



void players_stats(){
cout << " Here are some stats of the Players This Season " << endl;
cout << endl;
cout << " \t-------TOP SCORERS-------\t " << endl;
cout << " 1. Robert Lewandowski   (30 goals) " << endl;
cout << " 2. Raphinha             (28 goals) " << endl;
cout << " 3. Lamine Yamal         (25 goals) " << endl;
cout << " 4. Ferran Torres        (18 goals) " << endl;
cout << " 5. Fermin Lopez         (12 goals) " << endl;
cout << endl;
cout << endl;
getch();
cout << " \t-------TOP ASSIST PROVIDER-------\t " << endl;
cout << " 1. Pedri                (31 assists) " << endl;
cout << " 2. Raphinha             (30 assists) " << endl;
cout << " 3. Lamine Yamal         (19 assists) " << endl;
cout << " 4. Frankie De Jong      (18 assists) " << endl;
cout << " 5. Jules Kounde         (15 assists) " << endl;
cout << endl;
cout << endl;
getch();
cout << " \t-------MOST CLEAN SHEETS-------\t " << endl;
cout << " 1. Juan Garcia          (10 clean sheets) " << endl;
cout << " 2. Pau Cubarsi          (8  clean sheets) " << endl;
cout << " 3. Pedri                (8  clean sheets) " << endl;
cout << " 4. Balde                (6  clean sheets) " << endl;
cout << " 5. Carles Puyol         (5  clean sheets) " << endl;
cout << endl;
cout << endl;
getch();
cout << " \t-------MOST YELLOW CARDS-------\t " << endl;
cout << " 1. Ronald Araujo        (7 yellow cards) " << endl;
cout << " 2. Jules Kounde         (7 yellow cards) " << endl;
cout << " 3. Balde                (5 yellow cards) " << endl;
cout << " 4. Robert Lewandowski   (5 yellow cards) " << endl;
cout << " 5. Fermin Lopez         (4 yellow cards) " << endl;
cout << endl;
cout << endl;
getch();
}
void injured_players(){
cout << " Here are Some Injured Players so Far this Season " << endl;
cout << endl;
cout << " Number\tName       \tReason          \tInjury Time " << endl;
cout << " 1     \tGavi       \tACL Injury      \t7 months " << endl;
cout << " 2     \tMarc Bernal\tHamstring Injury\t3 months " << endl;
cout << " 3     \tCasado     \tACL Injury      \t12 months " << endl;
cout << endl;
cout << " There are No More Injured Players " << endl;
cout << endl;
cout << endl;
getch();
}






