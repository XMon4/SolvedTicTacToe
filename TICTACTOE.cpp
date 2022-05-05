#include <iostream>
#include <windows.h>
#include <ctime> 
#include <cstdlib> 

	int x,tile[9]={0,0,0,0,0,0,0,0,0};
    bool endturn,gameover=false;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
void firstmove(){
	srand((unsigned) time(0));
	int c=rand()%3;
	switch (c){
	case 0:
		tile[0]=1;
		break;
		case 1:
			tile[2]=1;
			break;
			case 2:
				tile[6]=1;
				break;
				case 3:
					tile[8]=1;
					break;
					default:
						tile[0]=1;
						break;
	}
}
void secondmove(){
	if(tile[1]==2 || tile[3]==2 || tile[5]==2 || tile[7]==2){
		tile[4]=1;
	}
	else if(tile[4]==2){
		if(tile[0]==1){
			tile[8]=1;
		}
		else if(tile[8]==1){
			tile[0]=1;
		}
		else if(tile[2]==1){
			tile[6]=1;
		}
		else if(tile[6]==1){
			tile[2]=1;
		}}
	else if(tile[0]==1){
		if(tile[2]==2){
			tile[6]=1;
		}
		else if(tile[6]==2 || tile[8]==2){
			tile[2]=1;
		}
	}
	else if(tile[2]==1){
		if(tile[8]==2){
			tile[0]=1;
		}
		else if(tile[0]==2 || tile[6]==2){
			tile[8]=1;
		}
	}
	else if(tile[6]==1){
		if(tile[0]==2){
			tile[8]=1;
		}
		else if(tile[2]==2 || tile[8]==2){
			tile[0]=1;
		}
	}
	else if(tile[8]==1){
		if(tile[6]==2){
			tile[2]=1;
		}
		else if(tile[0]==2 || tile[2]==2){
			tile[6]=1;
		}
	}
}
void cturn(){
	bool move=false;
	//computer checks for chance to win
if(tile[0]==0){
	if(tile[1]==tile[2] && tile[1]==1){
		tile[0]=1;
		move=true;
	}
	else if(tile[3]==tile[6] && tile[3]==1){
		tile[0]=1;
		move=true;
	}
	else if(tile[4]==tile[8] && tile[4]==1){
		tile[0]=1;
		move=true;
	}}
 if(tile[1]==0 && move==false){
 	if(tile[0]==tile[2] && tile[0]==1){
 	tile[1]=1;
	 move=true;	
	 }
	 else if(tile[4]==tile[7] && tile[4]==1){
	 	 	tile[1]=1;
	 move=true;
	 }}
if(tile[2]==0 && move==false){
	if(tile[0]==tile[1] && tile[0]==1){
	tile[2]=1;
	 move=true;
	}
	else if(tile[4]==tile[6] && tile[4]==1){
		tile[2]=1;
	 move=true;
	}
	else if(tile[5]==tile[8] && tile[5]==1){
		tile[2]=1;
	 move=true;
	}
}
if(tile[3]==0 && move==false){
	if(tile[0]==tile[6] && tile[0]==1){
		tile[3]=1;
	 move=true;
	}
	else if(tile[4]==tile[5] && tile[4]==1){
		tile[3]=1;
	 move=true;
	}}
if(tile[4]==0 && move==false){
	if(tile[0]==tile[8] && tile[0]==1){
		tile[4]=1;
	 move=true;
	}
	else if(tile[1]==tile[7] && tile[1]==1){
		tile[4]=1;
	 move=true;
	}
	else if(tile[2]==tile[6] && tile[2]==1){
		tile[4]=1;
	 move=true;
	}
	else if(tile[3]==tile[5] && tile[3]==1){
tile[4]=1;
	 move=true;
	}
}
if(tile[5]==0 && move==false){
	if(tile[2]==tile[8] && tile[2]==1){
		tile[5]=1;
	 move=true;
	}
	else if(tile[3]==tile[4] && tile[3]==1){
		tile[5]=1;
	 move=true;
	}}
if(tile[6]==0 && move==false){
	if(tile[0]==tile[3] && tile[0]==1){
		tile[6]=1;
	 move=true;
	}
	else if(tile[4]==tile[2] && tile[4]==1){
		tile[6]=1;
	 move=true;
	}
	else if(tile[7]==tile[8] && tile[7]==1){
		tile[6]=1;
	 move=true;
	}
}
if(tile[7]==0 && move==false){
	if(tile[1]==tile[4] && tile[1]==1){
		tile[7]=1;
	 move=true;
	}
	else if(tile[6]==tile[8] && tile[6]==1){
		tile[7]=1;
	 move=true;
	}
}
if(tile[8]==0 && move==false){
	if(tile[0]==tile[4] && tile[0]==1){
		tile[8]=1;
	 move=true;
	}
	else if(tile[2]==tile[5] && tile[2]==1){
		tile[8]=1;
	 move=true;
	}
	else if(tile[6]==tile[7] && tile[6]==1){
		tile[8]=1;
	 move=true;
	}
}
//check if player can win
if(tile[0]==0 && move==false){
	if(tile[1]==tile[2] && tile[1]==2){
		tile[0]=1;
		move=true;
	}
	else if(tile[3]==tile[6] && tile[3]==2){
		tile[0]=1;
		move=true;
	}
	else if(tile[4]==tile[8] && tile[4]==2){
		tile[0]=1;
		move=true;
	}}
 if(tile[1]==0 && move==false){
 	if(tile[0]==tile[2] && tile[0]==2){
 	tile[1]=1;
	 move=true;	
	 }
	 else if(tile[4]==tile[7] && tile[4]==2){
	 	 	tile[1]=1;
	 move=true;
	 }}
if(tile[2]==0 && move==false){
	if(tile[0]==tile[1] && tile[0]==2){
	tile[2]=1;
	 move=true;
	}
	else if(tile[4]==tile[6] && tile[4]==2){
		tile[2]=1;
	 move=true;
	}
	else if(tile[5]==tile[8] && tile[5]==2){
		tile[2]=1;
	 move=true;
	}
}
if(tile[3]==0 && move==false){
	if(tile[0]==tile[6] && tile[0]==2){
		tile[3]=1;
	 move=true;
	}
	else if(tile[4]==tile[5] && tile[4]==2){
		tile[3]=1;
	 move=true;
	}}
if(tile[4]==0 && move==false){
	if(tile[0]==tile[8] && tile[0]==2){
		tile[4]=1;
	 move=true;
	}
	else if(tile[1]==tile[7] && tile[1]==2){
		tile[4]=1;
	 move=true;
	}
	else if(tile[2]==tile[6] && tile[2]==2){
		tile[4]=1;
	 move=true;
	}
	else if(tile[3]==tile[5] && tile[3]==2){
tile[4]=1;
	 move=true;
	}
}
if(tile[5]==0 && move==false){
	if(tile[2]==tile[8] && tile[2]==2){
		tile[5]=1;
	 move=true;
	}
	else if(tile[3]==tile[4] && tile[3]==2){
		tile[5]=1;
	 move=true;
	}}
if(tile[6]==0 && move==false){
	if(tile[0]==tile[3] && tile[0]==2){
		tile[6]=1;
	 move=true;
	}
	else if(tile[4]==tile[2] && tile[4]==2){
		tile[6]=1;
	 move=true;
	}
	else if(tile[7]==tile[8] && tile[7]==2){
		tile[6]=1;
	 move=true;
	}
}
if(tile[7]==0 && move==false){
	if(tile[1]==tile[4] && tile[1]==2){
		tile[7]=1;
	 move=true;
	}
	else if(tile[6]==tile[8] && tile[6]==2){
		tile[7]=1;
	 move=true;
	}
}
if(tile[8]==0 && move==false){
	if(tile[0]==tile[4] && tile[0]==2){
		tile[8]=1;
	 move=true;
	}
	else if(tile[2]==tile[5] && tile[2]==2){
		tile[8]=1;
	 move=true;
	}
	else if(tile[6]==tile[7] && tile[6]==2){
		tile[8]=1;
	 move=true;
	}
}
//if no win or defense was found choose random
if(move==false){
	do{
	srand((unsigned) time(0));
	int r=rand()%8;
	if(tile[r]==0){
		tile[r]=1;
		move=true;
	}}
	while(move==false);	
}
	 		}
		
void play(){
	//player turn	
do{	cout<<"\n\nChoose number of tile: ";
	cin>>x;
	
	switch (x){
	case 1:
		//first check if tile is empty
		if(tile[0]==0)
		{tile[0]=2;
		endturn=true;}
		else{
			cout<<"Error!";
			endturn=false;
		}
		break;
		case 2:
			if(tile[1]==0){
			tile[1]=2;
			endturn=true;}
			else{			cout<<"Error!";
			endturn=false;
			}
			break;
			case 3:
				if(tile[2]==0){
				tile[2]=2;
				endturn=true;}
				else{
					cout<<"Error!";
					endturn=false;
				}
				break;
				case 4:
					if(tile[3]==0){
					tile[3]=2;
					endturn=true;}
					else{
					cout<<"Error!";
					endturn=false;}
					break;
					case 5:
						if(tile[4]==0){
					tile[4]=2;
					endturn=true;}
					else{
							cout<<"Error!";
							endturn=false;
					}
					break;
					case 6:
						if(tile[5]==0){
						tile[5]=2;
						endturn=true;}
						else{endturn=false;
							cout<<"Error!";
 } 					break;
						case 7:
							if(tile[6]==0){
							tile[6]=2;
							endturn=true;}
							else{endturn=false;
										cout<<"Error!";}
							break;
							case 8:
								if(tile[7]==0){
								tile[7]=2;
								endturn=true;}
								else{endturn=false;	
								cout<<"Error!";
								}
								break;
							case 9:
								if(tile[8]==0){
									tile[8]=2;
									endturn=true;}
									else{endturn=false;
									cout<<"Error!";}
									break;
									default:			
										cout<<"Error!";
										endturn=false;
										break;
	}}
	while(endturn==false);
}
void p2(){
if(tile[4]==2){
firstmove();}
else{
tile[4]=1;}
	}
	
void gotoxy(int x, int y){
	COORD coord;
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
gameboard(){
	system("CLS");
	if(tile[0]==0){
	for(int y=0;y<6;y++){
		gotoxy(1,y);
	cout<<"                  |";}
	gotoxy(1,6);
	cout<<"__________________|";}
	else if(tile[0]==1){
	gotoxy(1,0);
	cout<<"                  |";
	gotoxy(1,1);
	cout<<"     x       x    |";
	gotoxy(1,2);
	cout<<"       x   x      |";
	gotoxy(1,3);
	cout<<"         x        |";
	gotoxy(1,4);
	cout<<"       x   x      |";
	gotoxy(1,5);
	cout<<"     x       x    |";
	gotoxy(1,6);
	cout<<"__________________|";	
	}
	else if(tile[0]==2){
			gotoxy(1,0);
	cout<<"       o  o       |";
	gotoxy(1,1);
	cout<<"    o        o    |";
	gotoxy(1,2);
	cout<<"   o          o   |";
	gotoxy(1,3);
	cout<<"   o          o   |";
	gotoxy(1,4);
	cout<<"    o        o    |";
	gotoxy(1,5);
	cout<<"       o  o       |";
	gotoxy(1,6);
	cout<<"__________________|";
		
	}
if(tile[1]==0){
for(int y=0;y<6;y++){
gotoxy(20,y);
cout<<"|                 |";}
gotoxy(20,6);
cout<<"|_________________|";}
else if(tile[1]==1){
gotoxy(20,0);
cout<<"|                 |";
gotoxy(20,1);
cout<<"|    x       x    |";
gotoxy(20,2);
cout<<"|      x   x      |";
gotoxy(20,3);
cout<<"|        x        |";
gotoxy(20,4);
cout<<"|      x   x      |";
gotoxy(20,5);
cout<<"|    x       x    |";
gotoxy(20,6);	
cout<<"|_________________|";}
else if(tile[1]==2){
	gotoxy(20,0);
cout<<"|      o  o       |";
gotoxy(20,1);
cout<<"|   o        o    |";
gotoxy(20,2);
cout<<"|  o          o   |";
gotoxy(20,3);
cout<<"|  o          o   |";
gotoxy(20,4);
cout<<"|   o        o    |";
gotoxy(20,5);
cout<<"|      o  o       |";
gotoxy(20,6);	
cout<<"|_________________|";
}
if(tile[2]==0){
for(int y=0;y<6;y++){
gotoxy(40,y);
cout<<"|                 ";
}
gotoxy(40,6);
cout<<"|_________________";
}
else if(tile[2]==1){
gotoxy(40,0);
cout<<"|                 ";
gotoxy(40,1);
cout<<"|    x       x    ";
gotoxy(40,2);
cout<<"|      x   x      ";
gotoxy(40,3);
cout<<"|        x        ";
gotoxy(40,4);
cout<<"|      x   x      ";
gotoxy(40,5);
cout<<"|    x       x    ";
gotoxy(40,6);
cout<<"|_________________";	}
else if(tile[2]==2){
	gotoxy(40,0);
cout<<"|      o  o       ";
gotoxy(40,1);
cout<<"|   o        o    ";
gotoxy(40,2);
cout<<"|  o          o   ";
gotoxy(40,3);
cout<<"|  o          o   ";
gotoxy(40,4);
cout<<"|   o        o    ";
gotoxy(40,5);
cout<<"|      o  o       ";
gotoxy(40,6);
cout<<"|_________________";
}
gotoxy(1,7);
cout<<"_________________";
if(tile[3]==0){
	
for(int y=8;y<14;y++){
gotoxy(1,y);
cout<<"                 |";
}
gotoxy(1,14);
cout<<"_________________|";
}
else if(tile[3]==1){
gotoxy(1,8);
cout<<"                  |";
gotoxy(1,9);
cout<<"    x       x     |";
gotoxy(1,10);
cout<<"      x   x       |";
gotoxy(1,11);
cout<<"        x         |";
gotoxy(1,12);
cout<<"      x   x       |";
gotoxy(1,13);
cout<<"    x       x     |";
gotoxy(1,14);
cout<<"_________________|";
	}
else if(tile[3]==2){
gotoxy(1,8);
cout<<"      o  o        |";
gotoxy(1,9);
cout<<"   o        o     |";
gotoxy(1,10);
cout<<"  o          o    |";
gotoxy(1,11);
cout<<"  o          o    |";
gotoxy(1,12);
cout<<"   o        o     |";
gotoxy(1,13);
cout<<"      o  o        |";
gotoxy(1,14);
cout<<"_________________|";
	}
gotoxy(20,7);
cout<<" _________________";	
if(tile[4]==0){
for(int y=8;y<14;y++){
gotoxy(20,y);
cout<<"|                 |";
}
gotoxy(20,14);
cout<<"|_________________|";
}
else if(tile[4]==1){
gotoxy(20,8);
cout<<"|                 |";
gotoxy(20,9);
cout<<"|    x       x    |";
gotoxy(20,10);
cout<<"|      x   x      |";
gotoxy(20,11);
cout<<"|        x        |";
gotoxy(20,12);
cout<<"|      x   x      |";
gotoxy(20,13);
cout<<"|    x       x    |";
gotoxy(20,14);
cout<<"|_________________|";
	}
else if(tile[4]==2){
gotoxy(20,8);
cout<<"|      o  o       |";
gotoxy(20,9);
cout<<"|   o        o    |";
gotoxy(20,10);
cout<<"|  o          o   |";
gotoxy(20,11);
cout<<"|  o          o   |";
gotoxy(20,12);
cout<<"|   o        o    |";
gotoxy(20,13);
cout<<"|      o  o       |";
gotoxy(20,14);
cout<<"|_________________|";
	}
gotoxy(40,7);
cout<<" _________________";
if(tile[5]==0){
for(int y=8;y<14;y++){
gotoxy(40,y);
cout<<"|                 ";
}
gotoxy(40,14);
cout<<"|_________________";
}
else if(tile[5]==1){
gotoxy(40,8);
cout<<"|                 ";
gotoxy(40,9);
cout<<"|    x       x    ";
gotoxy(40,10);
cout<<"|      x   x      ";
gotoxy(40,11);
cout<<"|        x        ";
gotoxy(40,12);
cout<<"|      x   x      ";
gotoxy(40,13);
cout<<"|    x       x    ";
gotoxy(40,14);
cout<<"|_________________";
	}
else if(tile[5]==2){
gotoxy(40,8);
cout<<"|      o  o       ";
gotoxy(40,9);
cout<<"|   o        o    ";
gotoxy(40,10);
cout<<"|  o          o   ";
gotoxy(40,11);
cout<<"|  o          o   ";
gotoxy(40,12);
cout<<"|   o        o    ";
gotoxy(40,13);
cout<<"|      o  o       ";
gotoxy(40,14);
cout<<"|_________________";
	}	
gotoxy(1,15);
cout<<"_________________";
if(tile[6]==0){
	
for(int y=16;y<=22;y++){
gotoxy(1,y);
cout<<"                 |";}
}
else if(tile[6]==1){
gotoxy(1,16);
cout<<"                 |";
gotoxy(1,17);
cout<<"    x       x    |";
gotoxy(1,18);
cout<<"      x   x      |";
gotoxy(1,19);
cout<<"        x        |";
gotoxy(1,20);
cout<<"      x   x      |";
gotoxy(1,21);
cout<<"    x       x    |";
gotoxy(1,22);
cout<<"                 |";
	}
else if(tile[6]==2){
gotoxy(1,16);
cout<<"      o  o       |";
gotoxy(1,17);
cout<<"   o        o    |";
gotoxy(1,18);
cout<<"  o          o   |";
gotoxy(1,19);
cout<<"  o          o   |";
gotoxy(1,20);
cout<<"   o        o    |";
gotoxy(1,21);
cout<<"      o  o       |";
gotoxy(1,22);
cout<<"                 |";
	}
gotoxy(20,15);
cout<<" _________________";
if(tile[7]==0){
	
for(int y=16;y<=22;y++){
gotoxy(20,y);
cout<<"|                 |";}
}
else if(tile[7]==1){
gotoxy(20,16);
cout<<"|                 |";
gotoxy(20,17);
cout<<"|    x       x    |";
gotoxy(20,18);
cout<<"|      x   x      |";
gotoxy(20,19);
cout<<"|        x        |";
gotoxy(20,20);
cout<<"|      x   x      |";
gotoxy(20,21);
cout<<"|    x       x    |";
gotoxy(20,22);
cout<<"|                 |";
	}
else if(tile[7]==2){
gotoxy(20,16);
cout<<"|      o  o       |";
gotoxy(20,17);
cout<<"|   o        o    |";
gotoxy(20,18);
cout<<"|  o          o   |";
gotoxy(20,19);
cout<<"|  o          o   |";
gotoxy(20,20);
cout<<"|   o        o    |";
gotoxy(20,21);
cout<<"|      o  o       |";
gotoxy(20,22);
cout<<"|                 |";
	}
	gotoxy(40,15);
cout<<" _________________";
if(tile[8]==0){	
for(int y=16;y<=22;y++){
gotoxy(40,y);
cout<<"|                 ";}
}
else if(tile[8]==1){
gotoxy(40,16);
cout<<"|                 ";
gotoxy(40,17);
cout<<"|    x       x    ";
gotoxy(40,18);
cout<<"|      x   x      ";
gotoxy(40,19);
cout<<"|        x        ";
gotoxy(40,20);
cout<<"|      x   x      ";
gotoxy(40,21);
cout<<"|    x       x    ";
gotoxy(40,22);
cout<<"|                 ";
	}
else if(tile[8]==2){
gotoxy(40,16);
cout<<"|      o  o       ";
gotoxy(40,17);
cout<<"|   o        o    ";
gotoxy(40,18);
cout<<"|  o          o   ";
gotoxy(40,19);
cout<<"|  o          o   ";
gotoxy(40,20);
cout<<"|   o        o    ";
gotoxy(40,21);
cout<<"|      o  o       ";
gotoxy(40,22);
cout<<"|                 ";
	}
}

void checkvictory(){
	if((tile[0]==tile[1] && tile[1]==tile[2] )|| (tile[0]==tile[3] && tile[3]==tile[6])){
		if(tile[0]==1){
		gameover=true;
		gameboard();
		cout<<"\nComputer wins!\n";	
		}
		else if(tile[0]==2){
			gameover=true;
			gameboard();
			cout<<"\nYou win!\n";
		}
		else{
			gameover=false;
		}
	}
	if((tile[4]==tile[0] && tile[0]==tile[8] )||( tile[4]==tile[1] && tile[1]==tile[7] )|| (tile[4]==tile[2] && tile[2]==tile[6] )|| (tile[4]==tile[3] && tile[3]==tile[5])){
		if(tile[4]==1){
		gameover=true;
		gameboard();
		cout<<"\nComputer wins!\n";	
		}
		else if(tile[4]==2){
			gameover=true;
			gameboard();
			cout<<"\nYou win!\n";
		}
		else{
			gameover=false;
		}		
	}
	if((tile[8]==tile[7] && tile[7]==tile[6] )|| (tile[8]==tile[5] && tile[5]==tile[2])){
				if(tile[8]==1){
		gameover=true;
		gameboard();
		cout<<"\nComputer wins!\n";	
		}
		else if(tile[8]==2){
			gameover=true;
			gameboard();
			cout<<"\nYou win!\n";
		}
		else{
			gameover=false;
		}
	}
}	
/*START OF PROGRAM*/

int main(int argc, char** argv) {
	gameboard();
	cout<<endl;
	cout<<"X-computer O-player\n";
	cout<<"Choosing first player randomly ";
	system("PAUSE");
	srand((unsigned)time(0));
	int t=1+(rand()%2);
	if(t==1){
		firstmove();
		gameboard();
		cout<<"\nX goes first\n\n";
play();
secondmove();
gameboard();
}
else{
	cout<<"\nO goes first\n\n";
	play();
	p2();
gameboard();}
while(gameover==false){
play();
checkvictory();
if(gameover==true){
	break;
}
gameover=true;
for(int g=0;g<=8;g++){
	if(tile[g]==0){
		gameover=false;
	}
}
if(gameover==true){
	gameboard();
	cout<<"\nIt's a draw..";
	break;
}
cturn();
checkvictory();

if(gameover==true){
	break;
}
gameover=true;
for(int g=0;g<=8;g++){
	if(tile[g]==0){
		gameover=false;
	}
}
if(gameover==true){
	gameboard();
	cout<<"\nIt's a draw..";
	break;
}

gameboard();
}



	
	return 0;
} 
