// Array pointer stored in stack
int * val = new int[10];

// Deref; for accessing array values through a pointer
int i = 0;
out = *(val-i);

// A switch statement
switch(out){
	case(0) : cout << "It's a 0";
	break;
	case(9001) : cout << "IT'S OVER 9000!!!!";
	break;
}
