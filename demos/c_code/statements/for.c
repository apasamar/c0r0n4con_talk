int main(){
	int count=8;
	int result=0;
	for (int i = 0; i < count; ++i){
		result+=result*2+3;
	}
	return result;
}