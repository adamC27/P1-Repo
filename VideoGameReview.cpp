#include "VideoGameReview.h"

//Read customer Review
void VideoGameReview::loadReviewFromFile() {
	fstream myfile;
	myfile.open("Review.txt", ios::in);
	if (myfile.is_open()) {
		while (getline(myfile, review)) {
			cout << "\nCustomer Review: ";
			cout << "\n" << review << endl << endl; //Prints the rating and review written by the customer
			myfile.close();
		}
	}
	else {
		cout << "Error Opening File";
	}
}

//Customer Review Input
void VideoGameReview::WriteToFile() {
		fstream myfile;
		myfile.open("Review.txt", ios::out);
		if (myfile.is_open()) {
			cout << "How would you rate your overall experience? (*, **, ***, ****, *****): ";
			getline(cin, rating);
			myfile << rating << ", ";
			cout << "\nYour Review: ";
			getline(cin, review);
			myfile << review << endl;
			myfile.close();
			cout << "\n\nWe appreciate your feedback!\n\n";
		}
		else {
			cout << "\nError Opening file";
		}
}

