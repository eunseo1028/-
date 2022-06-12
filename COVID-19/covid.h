/* [평가항목 8] : 다중 소스 파일 사용 */
#define SIZE 300

/* [평가항목 5] : 구조체 사용
			  코로나에 대한 정보를 구조체로 표현함. */
struct COVID {
	char outline[SIZE]; //개요
	char incubation_period[SIZE]; //잠복기
	char symptom[SIZE]; //증상
	char prevention[SIZE]; //예방법
};