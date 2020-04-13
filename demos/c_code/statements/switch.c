int a=2;

int main(){
	switch(a){
		case 1:
			a++;
			break;
		case 2:
			a=a+2;
			break;
		default:
			a=a+10;
	}
	return a;
}