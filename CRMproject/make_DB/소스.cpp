#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <vector>
using namespace std;

string student_number() {
    string result;
    int num1 = rand() % (2026 - 2000) + 2000; //00~25학번
    int num2 = rand() % 1000;
    int num3 = rand() % 1000;
    result = to_string(num1);
    if (num2 < 100) result += '0'; //0추가
    if (num2 < 10) result += '0';
    result += to_string(num2);
    if (num3 < 100) result += '0';
    if (num3 < 10) result += '0';
    result += to_string(num3);

    return result;
}
string pw() {
    string result = "";
    for (int i = 0; i < 16; i++) result += ('a' + (std::rand() % 26)); //랜덤 소문자

    return result;
}
string name() {
    vector<string> name1 = {"김","김","김","김","김","김","김","김","김","김",
        "김","김","김","김","김","김","김","김","김","김",
        "김","이","이","이","이","이","이","이","이","이",
        "이","이","이","이","이","박","박","박","박","박",
        "박","박","박","최","최","최","최","정","정","정",
        "정","강","강","조","조","윤","윤","장","임","한",
        "오","서","신","권","황","안","송","전","홍"
    };
    vector<string> name2 = { "서준", "민준", "도윤", "시우", "예준", "하준", "지호", "주원", "지후", "도현",
        "준우", "준서", "건우", "현우", "우진", "선우", "지훈", "유준", "은우", "연우",
        "서진", "이준", "민재", "시윤", "현준", "정우", "윤우", "지우", "승우", "수호",
        "유찬", "지환", "승현", "준혁", "이안", "시후", "진우", "승민", "민성", "수현",
        "지원", "준영", "시현", "재윤", "태윤", "한결", "지한", "은호", "지안", "우주",
        "시온", "서우", "시원", "윤호", "은찬", "민우", "동현", "재원", "민규", "민찬",
        "재민", "우빈", "하진", "이현", "율", "하율", "로운", "준호", "지율", "윤재",
        "도하", "준", "성민", "승준", "태민", "재현", "민호", "현서", "지민", "성현",
        "하민", "예성", "지성", "하람", "태현", "규민", "민혁", "태양", "성준", "윤성",
        "이든", "다온", "정민", "태오", "도훈", "은성", "예찬", "주안", "준수", "지오",
        "서윤", "서연", "지우", "하윤", "서현", "하은", "민서", "지유", "윤서", "채원",
        "수아", "지아", "지민", "지윤", "다은", "은서", "서아", "지안", "하린", "예은",
        "소율", "예린", "수빈", "소윤", "유나", "예원", "지원", "시은", "채은", "윤아",
        "유진", "시아", "예나", "아린", "예서", "가은", "아윤", "연우", "하율", "유주",
        "주아", "예진", "서영", "민지", "다인", "수민", "서우", "연서", "수연", "아인",
        "나은", "서은", "채윤", "시연", "서율", "서하", "나윤", "하연", "다연", "지율",
        "채아", "현서", "유빈", "다현", "서진", "소은", "예지", "수현", "사랑", "이서",
        "나연", "지은", "세아", "은채", "시현", "예빈", "다윤", "주하", "민주", "지수",
        "윤지", "소연", "지현", "다온", "소민", "채린", "승아", "하영", "혜원", "유하",
        "세은", "민아", "나현", "서희", "소이", "도연", "리아", "아영", "규리", "아현"
    };
    string result = name1[rand() % (name1.size() - 1)]; //성 선택
    result += name2[rand() % (name2.size() - 1)]; //이름 선택

    return result;
}
string birth() {
    int year = rand() % (2007 - 1980) + 1980; //1980~2006년생
    int month = rand() % 12 + 1;
    int day;
    switch (month) { //31일 처리
    case 1: case 3: case 5: case 7: case 8: case 10: case 11: day = rand() % 30 + 1;
    case 4: case 6: case 9: case 12: day = rand() % 29 + 1;
    }
    if (month == 2) { //윤년처리
        if (year % 400 == 0) day = rand() % 28 + 1;
        else if (year % 100 == 0) day = rand() % 27 + 1;
        else if (year % 4 == 0) day = rand() % 28 + 1;
        else day = rand() % 27 + 1;
    }
    string result = to_string(year);
    if (month < 10) result += '0'; //한자리 수는 앞에 0추가
    result += to_string(month);
    if (day < 10) result += '0'; //한자리 수는 앞에 0추가
    result += to_string(day);

    return result;
}
string tel() {
    string result = "010";
    int num1 = rand() % 10000;
    int num2 = rand() % 10000;

    if (num1 < 1000) result += '0'; //0추가
    if (num1 < 100) result += '0';
    if (num1 < 10) result += '0';
    result.append(to_string(num1));

    if (num2 < 1000) result += '0';
    if (num2 < 100) result += '0';
    if (num2 < 10) result += '0';
    result.append(to_string(num2));

    return result;
}
string mail() {
    string result = "";
    for (int i = 0; i < 9; i++) result += ('a' + (std::rand() % 26)); //랜덤 소문자
    result += "@knu.ac.kr"; //학교메일

    return result;
}
string department() {
    vector<string> list = { "국어국문학과", "영어영문학과" ,"불어불문학과" ,"독어독문학과" ,"중어중문학과" ,"일어일문학과" ,"노어노문학과" ,"사학과" ,"철학과" ,"고고인류학과","한문학과",
        "정치외교학과","사회학과" ,"지리학과" ,"문헌정보학과" ,"심리학과" ,"사회복지학부","미디어커뮤니케이션학과",
        "수학과" ,"물리학과" ,"화학과" ,"생물학과" ,"생명공학부","지구시스템과학부","통계학과",
        "경제통상학부","경영학부",
        "건축학부","기계공학부","신소재공학부","에너지공학부","화학공학과" ,"응용화학과" ,"고분자공학과" ,"토목공학과" ,"섬유시스템공학과","환경공학과",
        "식품자원경제학과","응용생명과학부","식물의학과","식품공학부","산림과학ㆍ조경학부","농업토목ㆍ생물산업공학부","원예과학과","바이오섬유소재학과","농산업학과",
        "음악학과", "국악학과", "미술학과", "디자인학과",
        "교육학과","국어교육과","영어교육과","유럽어교육학부","역사교육과","지리교육과","윤리교육과","일반사회교육과","수학교육과","물리교육과","화학교육과","생물교육과","지구과학교육과","가정교육과","체육교육과",
        "아동학부", "의류학과" "식품영양학과",
        "간호학과", "수의예과", "의예과", "치의예과", "약학과",
        "전자공학부", "컴퓨터학부", "전기공학과",
        "행정학부", "융합학부", "스마트모빌리티공학과", "우주공학부", "혁신신약학과"
    };
    string result = list[rand()%(list.size()-1)]; //학과 선택

    return result;
}
int grader() {
    int n = rand() % 4 + 1; //1~4

    return n;
}
string GPA() {
    string score;
    int num1 = rand() % 5; //정수부분
    int num2;
    if(num1==4) num2 = rand() % 31; //4.3 만점
    else num2 = rand() % 100; //소수부분
    
    score = to_string(num1);
    score += '.';
    if (num2 < 10) score += '0'; //한자리 수는 앞에 0추가
    score += to_string(num2);

    return score;
}

int main() {
    srand((unsigned)time(0));
    ofstream file("customer_db.csv"); // 파일 생성 및 열기
    vector<string> s_number; //학번저장
    vector<string> t_number; //전화번호 저장
    vector<string> email; //메일저장
    file << "학번, 패스워드, 이름, 생년월일, 전화번호, 메일, 학과, 학년, 성적, 메모\n";
    for (int i = 0; i < 20000; i++) { //20000번 반복
        string tmp_snum;
        while (1) { //학번 중복 방지
            int count = 0;
            tmp_snum = student_number();
            for (int i = 0; i < s_number.size(); i++) if (tmp_snum == s_number[i]) count++;
            if (count == 0) { 
                s_number.push_back(tmp_snum);
                break;
            }
        }
        string tmp_tnum;
        while (1) { //전화번호 중복 방지
            int count = 0;
            tmp_tnum = tel();
            for (int i = 0; i < t_number.size(); i++) if (tmp_tnum == t_number[i]) count++;
            if (count == 0) {
                t_number.push_back(tmp_tnum);
                break;
            }
        }
        string tmp_email;
        while (1) { //메일 중복 방지
            int count = 0;
            tmp_email = mail();
            for (int i = 0; i < email.size(); i++) if (tmp_email == email[i]) count++;
            if (count == 0) {
                email.push_back(tmp_email);
                break;
            }
        }
        file << tmp_snum << ',' << pw() << ',' << name() << ',' << birth() << ',' << tmp_tnum << ','
            << tmp_email << ',' << department() << ',' << grader() << ',' << GPA() << ','<< "-" << '\n';
    }
    
    file.close();
}