#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include<time.h>
using namespace std;

class Game2{
    string p1;
    string p2;
    string p3;
    string p4;
    int mp1;
    int mp2;
    int mp3;
    int mp4;
public:
    void setup(){
    	cout<<"Enter name of first player =";
    	cin>>p1;
    	cout<<"Enter name of second player =";
    	cin>>p2;
    	cout<<"Enter name of third player =";
    	cin>>p3;
    	cout<<"Enter name of fourth player =";
    	cin>>p4;
    	mp1=mp2=mp3=mp4=0;
    	play();
    }

    void play(){
    	srand(time(0));
    	int r1=rand()%4 + 1;
    	int r2,r3,r4;
    	do{
    		r2=rand()%4 + 1;
    		r3=rand()%4 + 1;
    		r4=rand()%4 + 1;
    	}while((r1==r2)||(r1==r3)||(r1==r4)||
    			(r2==r1)||(r2==r3)||(r2==r4)||
    			(r3==r1)||(r3==r2)||(r3==r4)||
    			(r4==r1)||(r4==r2)||(r4==r3)
    			);

    	// cout<<r1<<endl<<r2<<endl<<r3<<endl<<r4;



    	cout<<endl<<"\t\t";
    	if(r1==1){
    		cout<<p1<<" you are the KING";
    		
    	}
    	else if(r2==1){
    		cout<<p2<<" you are the KING";
    		
    	}
    	else if(r3==1){
    		cout<<p3<<" you are the KING";
    		
    	}
    	else if(r4==1){
    		cout<<p4<<" you are the KING";
    	
    	}

    	cout<<endl<<"\t\t";
    	if(r1==4){
    		cout<<p1<<" you are the SOLDIER";
    		    	cout<<endl<<"\t"<<" Guess who is the THIEF? \n\t 1.p1\t 2.p2\t 3.p3\t 4.p4";
    	}
    	else if(r2==4){
    		cout<<p2<<" you are the SOLDIER";
    		    	cout<<endl<<"\t"<<" Guess who is the THIEF? \n\t 1.p1\t 2.p2\t 3.p3\t 4.p4";
    	}
    	else if(r3==4){
    		cout<<p3<<" you are the SOLDIER";
    			    cout<<endl<<"\t"<<" Guess who is the THIEF? \n\t 1.p1\t 2.p2\t 3.p3\t 4.p4";
    	}
    	else if(r4==4){
    		cout<<p4<<" you are the SOLDIER";
			  		cout<<endl<<"\t"<<" Guess who is the THIEF? \n\t 1.p1\t 2.p2\t 3.p3\t 4.p4";
    	}


    	string a;
    	cout<<"\t answer =";
    	cin>>a;

    	cout<<endl<<"\t";
    	if(r1==2){
    		if(a=="p1"){
    			cout<<"Correct Answer you got your desrving 1000 gold from KING :-) ...";
    		}
    		else{
    			cout<<"Oh! NO Now you GOT a GOOD KIck from the King :-(";
    		}
    	}
    	else if(r2==2){
    		if(a=="p2"){
    			cout<<"Correct Answer you got your desrving 1000 gold from KING :-) ...";
    		}
    		else{
    			cout<<"Oh! NO Now you GOT a GOOD KIck from the King :-(";
    		}
    	}
    	else if(r3==2){
    		if(a=="p3"){
    			cout<<"Correct Answer you got your desrving 1000 gold from KING :-) ...";
    		}
    		else{
    			cout<<"Oh! NO Now you GOT a GOOD KIck from the King :-(";
    		}
    	}
    	else if(r4==2){
    		if(a=="p4"){
    			cout<<"Correct Answer you got your desrving 1000 gold from KING :-) ...";
    		}
    		else{
    			cout<<"Oh! NO Now you GOT a GOOD KIck from the King :-(";
    		}
    	}
    	cout<<endl;
    }


};


// Game 4
char square[10] = {'0','1','2','3','4','5','6','7','8','9'};
class Game4{
    public:

/*****
    FUNCTION TO RETURN GAME STATUS
    1 FOR GAME IS OVER WITH RESULT
    -1 FOR GAME IS IN PROGRESS
    O GAME IS OVER AND NO RESULT
******/

int checkwin()
{
    if (square[1] == square[2] && square[2] == square[3])

        return 1;
    else if (square[4] == square[5] && square[5] == square[6])

        return 1;
    else if (square[7] == square[8] && square[8] == square[9])

        return 1;
    else if (square[1] == square[4] && square[4] == square[7])

        return 1;
    else if (square[2] == square[5] && square[5] == square[8])

        return 1;
    else if (square[3] == square[6] && square[6] == square[9])

        return 1;
    else if (square[1] == square[5] && square[5] == square[9])

        return 1;
    else if (square[3] == square[5] && square[5] == square[7])

        return 1;
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' 
                    && square[4] != '4' && square[5] != '5' && square[6] != '6' 
                  && square[7] != '7' && square[8] != '8' && square[9] != '9')

        return 0;
    else
        return -1;
}
/*********
     FUNCTION TO DRAW BOARD OF TIC TAC TOE WITH PLAYERS MARK
********/


void board()
{
    system("cls");
    cout << "\n\n\tTic Tac Toe\n\n";

    cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

    cout << "_____ _____ _____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

    cout << "_____ _____ _____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

    cout << "     |     |     " << endl << endl;
}
void call(){int player = 1,i,choice;

    char mark;
    do
    {
        board();
        player=(player%2)?1:2;

        cout << "Player " << player << ", enter a number:  ";
        cin >> choice;

        mark=(player == 1) ? 'X' : 'O';

        if (choice == 1 && square[1] == '1')

            square[1] = mark;
        else if (choice == 2 && square[2] == '2')

            square[2] = mark;
        else if (choice == 3 && square[3] == '3')

            square[3] = mark;
        else if (choice == 4 && square[4] == '4')

            square[4] = mark;
        else if (choice == 5 && square[5] == '5')

            square[5] = mark;
        else if (choice == 6 && square[6] == '6')

            square[6] = mark;
        else if (choice == 7 && square[7] == '7')

            square[7] = mark;
        else if (choice == 8 && square[8] == '8')

            square[8] = mark;
        else if (choice == 9 && square[9] == '9')

            square[9] = mark;
        else
        {
            cout<<"Invalid move ";

            player--;
            cin.ignore();
            cin.get();
        }
        i=checkwin();

        player++;
    }while(i==-1);
    board();
    if(i==1)

        cout<<"==>\aPlayer "<<--player<<" win ";
    else
        cout<<"==>\aGame draw";

    cin.ignore();
    cin.get();}
};

//Game4
int Guess;
int Total;

// Question Class
class Question {
private:
	string Question_Text;
	string Answer_1;
	string Answer_2;
	string Answer_3;
	string Answer_4;
	int Correct_Answer;
	int Question_Score;

public:
	// Function to set the values of
// the questions
void setValues(
	string q, string a1,
	string a2, string a3,
	string a4, int ca, int pa)
{
	Question_Text = q;
	Answer_1 = a1;
	Answer_2 = a2;
	Answer_3 = a3;
	Answer_4 = a4;
	Correct_Answer = ca;
	Question_Score = pa;
}
	// Function to ask questions
	
void askQuestion()
{
	cout << endl;

	// Print the questions
	cout << Question_Text << endl;
	cout << "1. " << Answer_1 << endl;
	cout << "2. " << Answer_2 << endl;
	cout << "3. " << Answer_3 << endl;
	cout << "4. " << Answer_4 << endl;
	cout << endl;

	// Display the answer
	cout << "What is your answer?(in number)"
		<< endl;
	cin >> Guess;

	// If the answer is correct
	if (Guess == Correct_Answer) {
		cout << endl;
		cout << "Correct !" << endl;

		// Update the correct score
		Total = Total + Question_Score;
		cout << "Score = " << Question_Score
			<< " out of "
			<< Question_Score
			<< "!" << endl;
		cout << endl;
	}

	// Otherise
	else {
		cout << endl;
		cout << "Wrong !" << endl;
		cout << "Score = 0"
			<< " out of "
			<< Question_Score
			<< "!" << endl;
		cout << "Correct answer = "
			<< Correct_Answer
			<< "." << endl;
		cout << endl;
	}
}
void Display(){
    cout << "\n\n\t\t\t\tTHE DAILY QUIZ"
		<< endl;
	cout << "\nPress Enter to start "
		<< "the quiz... " << endl;

	// Input
	cin.get();

	string Name;
	int Age;

	// Input the details
	cout << "What is your name?"
		<< endl;
	cin >> Name;
	cout << endl;

	cout << "How old are you?"
		<< endl;
	cin >> Age;
	cout << endl;

	string Respond;
	cout << "Are you ready to take"
		<< " the quiz " << Name
		<< "? yes/no" << endl;
	cin >> Respond;

	if (Respond == "yes") {
		cout << endl;
		cout << "Good Luck!" << endl;
	}
	else {
		cout << "Okay Good Bye!" << endl;
	}

	// Objects of Question Class
	Question q1;
	Question q2;
	Question q3;
	Question q4;
	Question q5;
	Question q6;
	Question q7;
	Question q8;
	Question q9;
	Question q10;

	// 3 is the position of
	// correct answer
	q1.setValues("Question 1: Which country has the longest coastline in the world?", "Canada",
				"Russia", "Australia",
				"Indonesia", 1, 10);
	q2.setValues("Question 2: Which country is the world's most populated country?", "China",
				"Russia", "India",
				"USA", 1, 10);
	q3.setValues("Question 3: What is the capital of the Philippines?", "Marawi",
				"Dili", "Jakarta",
				"Manillia", 4, 10);
	q4.setValues("Question 4: The Great Barrier Reef is off the coast of which country?", "Australia",
				"South Africa", "New Zealand",
				"Fiji", 1, 10);
	q5.setValues("Question 5: What is the World's Smallest Country?", "Lichtenstein",
				"Monaco", "Vatican City",
				"Luxembourg", 3, 10);
	q6.setValues("Question 6: In which country is the world's highest waterfall?", "USA",
				"Venezuela", "South Africa",
				"Brazil", 2, 10);
	q7.setValues("Question 7: What is the capital of Australia?", "Melbourne",
				"Sydney", "Adelaide",
				"Canberra", 4, 10);
	q8.setValues("Question 8: In which country is Mount Fuji located?", "North Korea",
				"Japan", "China",
				"Peru", 2, 10);
	q9.setValues("Question 9: In which country is the Cape of Good Hope?", "Canada",
				"Russia", "Australia",
				"South Africa", 4, 10);
	q10.setValues("Question 10: Which country has the greatest number of active volcanoes?", "Japan",
				"Philippines", "Italy",
				"Indonesia", 4, 10);

	q1.askQuestion();
	q2.askQuestion();
	q3.askQuestion();
	q4.askQuestion();
	q5.askQuestion();
	q6.askQuestion();
	q7.askQuestion();
	q8.askQuestion();
	q9.askQuestion();
	q10.askQuestion();

	// Display the total score
	cout << "Total Score = " << Total
		<< " out of 100" << endl;

	// Display the results

	// If the player pass the quiz
	if (Total >= 70) {
		cout << "Congrats you passed the"
			<< " quiz!" << endl;
	}

	// Otherwise
	else {
		cout << "Alas! You failed the quiz."
			<< endl;
		cout << "Better luck next time."
			<< endl;
	}
}
};


// driver program to test above function
int main()
{ 
	int choice;
  	Game2 g2;
  	Question g3;
  	Game4 g4;
 	// cout<<"Enter 1 to play soduko"<<endl;
 	system("cls");
 	cout<<"\t\t MAGICAL GAMEBOX\n";
 	do{
 	cout<<"Enter 1 to KING MINISTER SOLDIER and THIEF"<<endl;
 	cout<<"Enter 2 to play Quiz"<<endl;
 	cout<<"Enter 3 to play tic toc toe"<<endl;
 	cout<<"Enter 4 to CLOSE Magical Box"<<endl;

 	cin>>choice;
 	switch(choice){
    	case 1:
    		system("cls");
    		cout<<"\t\t MAGICAL GAMEBOX\n";
    		cout<<"\t KING MINISTER SOLDIER and THIEF\n";    
       		g2.setup();
       		break;
    	case 2:
    		system("cls");
    		cout<<"\t\t MAGICAL GAMEBOX\n";
    		g3.Display();
       		break;

    	case 3:
    		system("cls");
    		cout<<"\t\t MAGICAL GAMEBOX\n";
    		g4.call();
    		break;
    	case 4:
    		cout<<"\n\n \t\t\t GOOD BYE hope you enjoyed a lot :-D";
    		return 0;
    	default:
    		cout<<"Invalid Input\n";   
 	}
 	}while(1);
 	
	return 0;
}