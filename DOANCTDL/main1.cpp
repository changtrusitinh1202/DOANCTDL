#include<iostream>
#include<fstream> 
#include<unistd.h>
#include<cstring>
#include<string.h>
#include<windows.h> 
#include<conio.h>
#include<time.h> 
#include<vector>
#include"console.h"
#include<mmsystem.h>
#define MAUCHU 12 
#define MAUNEN 100 
using namespace std;
string Enter; 
string traLoi;
typedef char str[50];
struct nguoiThamGia
{
	string hoTen;
	string queQuan;
};
struct DapAn5050
{
	string DAdung1;
	string DAdung2;
};

struct CauHoi
{
	string cauHoii;
	string A;
	string B;
	string C;
	string D;
	string DADung;	
};

void amThanhChaoMung();
void amThanh30s();
void amThanhChoThoiGianTraLoi();
void amThanhDA5050(); 
void amThanhGoiDT();
void amThanhRaVe();
void amThanhTraLoiDung();
void amThanhTraLoiSai(); 
void xuatCauHoi(vector<CauHoi> ds_CH);
void docDS5050(ifstream &filein,vector<DapAn5050> &dsda);
void doc5050(ifstream &filein,DapAn5050 &da);
void docDSCauHoi(ifstream &filein, vector<CauHoi> &ds_CH);
void doc1CauHoi(ifstream &filein, CauHoi &ch);
void loadingggg();
void thoatgame();
void nguoiChoi(nguoiThamGia &nguoi);
void In_man_hinh();
void In_chu_Ai_la_trieu_phu();
void In_duong_so_1();
void In_duong_so_2();
void In_duong_so_3();
void In_duong_so_4();
void In_duong_so_5();
void In_duong_so_6();
void In_duong_so_7();
void In_man_hinh();
void huong_Dan();
void Muc_diem(int i);
void in_Muc_Diem(int diem);
void huong_Dan();
void themCauHoiVaoFile(CauHoi &ch,DapAn5050 &da);

 
void amThanhChaoMung()
{
	char audiofile_char[] = {"D:\\DOANCTDL\\fileamthanh\\chao.wav"};
	string audiofile_str;
	fstream fp;
	fp.open(audiofile_char,ios::in);
	audiofile_str = audiofile_char;
	PlaySound(audiofile_str.c_str(),NULL,SND_SYNC);
	fp.close();
}

void amThanhDA5050()
{
	char audiofile_char[] = {"D:\\DOANCTDL\\fileamthanh\\5050.wav"};
	string audiofile_str;
	fstream fp;
	fp.open(audiofile_char,ios::in);
	audiofile_str = audiofile_char;
	PlaySound(audiofile_str.c_str(),NULL,SND_SYNC);
	fp.close();
}

void amThanhGoiDT()
{
	char audiofile_char[] = {"D:\\DOANCTDL\\fileamthanh\\goidienthoai1.wav"};
	string audiofile_str;
	fstream fp;
	fp.open(audiofile_char,ios::in);
	audiofile_str = audiofile_char;
	PlaySound(audiofile_str.c_str(),NULL,SND_SYNC);
	fp.close();
}

void amThanhChoThoiGianTraLoi()
{
	char audiofile_char[] = {"D:\\DOANCTDL\\fileamthanh\\chothoigian.wav"};
	string audiofile_str;
	fstream fp;
	fp.open(audiofile_char,ios::in);
	audiofile_str = audiofile_char;
	PlaySound(audiofile_str.c_str(),NULL,SND_SYNC);
	fp.close();
}

void amThanh30s()
{
	char audiofile_char[] = {"D:\\DOANCTDL\\fileamthanh\\30s.wav"};
	string audiofile_str;
	fstream fp;
	fp.open(audiofile_char,ios::in);
	audiofile_str = audiofile_char;
	PlaySound(audiofile_str.c_str(),NULL,SND_SYNC);
	fp.close();
}

void amThanhRaVe()
{
	char audiofile_char[] = {"D:\\DOANCTDL\\fileamthanh\\gohome.wav"};
	string audiofile_str;
	fstream fp;
	fp.open(audiofile_char,ios::in);
	audiofile_str = audiofile_char;
	PlaySound(audiofile_str.c_str(),NULL,SND_SYNC);
	fp.close();
}

void amThanhTraLoiDung() 
{
	char audiofile_char[] = {"D:\\DOANCTDL\\fileamthanh\\traloidung.wav"};
	string audiofile_str;
	fstream fp;
	fp.open(audiofile_char,ios::in);
	audiofile_str = audiofile_char;
	PlaySound(audiofile_str.c_str(),NULL,SND_SYNC);
	fp.close();
}

void amThanhTraLoiSai() 
{
	char audiofile_char[] = {"D:\\DOANCTDL\\fileamthanh\\traloisai.wav"};
	string audiofile_str;
	fstream fp;
	fp.open(audiofile_char,ios::in);
	audiofile_str = audiofile_char;
	PlaySound(audiofile_str.c_str(),NULL,SND_SYNC);
	fp.close();
}
//////////////////////////////////////////////////
void nguoiChoi(nguoiThamGia &nguoi)
{
	amThanhChaoMung();
	gotoXY(16,14);
	cout<<"Moi ban gioi thieu ve ban than cua minh"<<endl;
	gotoXY(16,15);
	cout<<"-Ho va ten: ";
	getline(cin,nguoi.hoTen);
	gotoXY(16,16);
	cout<<"-Que quan: ";
	getline(cin,nguoi.queQuan);
	ofstream filein;
	filein.open("D:\\DOANCTDL\\filetext\\nguoichoi.txt",ios_base::app);
	filein.write(nguoi.hoTen.data(),nguoi.hoTen.size());
	filein<<"\t"; 
	filein.write(nguoi.queQuan.data(),nguoi.queQuan.size());
	filein<<"\t"; 
	filein.close();
	system("cls");
}

void loadingggg()
{
	system("Color 6");
	cout<<"\n\n\n\n\n";
	cout<<"\t\t\t\t\t\t  Loading..."<<endl;
	char x = 219;
	char a = 177; 
	cout<<"\t\t\t\t";
	for(int i=0;i<50;i++)
		cout<<a;
	cout<<"\r";
	cout<<"\t\t\t\t";
	for(int i=0;i<50;i++)
	{
		cout<<x;
		if(i<10)
		Sleep(20); 
		if(i>=10&&i<20)
		Sleep(30);
		if(i>=10)
		Sleep(4);	
	} 
	sleep(3);//unistd.h
	system("cls");
}

void thoatgame()
{
	system("Color 6");
	cout<<"\n\n\n\n\n";
	cout<<"\t\t\t\t\t\t  Dang thoat..."<<endl;
	char x = 219;
	char a = 177; 
	cout<<"\t\t\t\t";
	for(int i=0;i<50;i++)
		cout<<a;
	cout<<"\r";
	cout<<"\t\t\t\t";
	for(int i=0;i<50;i++)
	{
		cout<<x;
		if(i<10)
		Sleep(50); 
		if(i>=10&&i<20)
		Sleep(130);
		if(i>=10)
		Sleep(20);	
	} 
	sleep(3);//unistd.h
	system("cls");
}

void doc1CauHoi(ifstream &filein, CauHoi &ch)
{
	getline(filein,ch.cauHoii);
	getline(filein,ch.A);
	getline(filein,ch.B);
	getline(filein,ch.C);
	getline(filein,ch.D);
	getline(filein,ch.DADung);
}

void docDSCauHoi(ifstream &filein, vector<CauHoi> &ds_CH)
{
	
	while(filein.eof()==false)
	{
		CauHoi ch;
		doc1CauHoi(filein,ch);
		ds_CH.push_back(ch);
	}
}

void doc5050(ifstream &filein,DapAn5050 &da)
{
	getline(filein,da.DAdung1);
	getline(filein,da.DAdung2);
}

void docDS5050(ifstream &filein,vector<DapAn5050> &dsda)
{
	while(filein.eof()==false)
	{
		DapAn5050 da;
		doc5050(filein,da);
		dsda.push_back(da);
	}
}

void xuatCauHoi(vector<CauHoi> ds_CH)
{
	In_man_hinh();
	In_chu_Ai_la_trieu_phu();
	nguoiThamGia nguoi;
	nguoiChoi(nguoi);
	vector<DapAn5050>dsda;
	ifstream filein;
	filein.open("D:\\DOANCTDL\\filetext\\5050.txt",ios_base::in);
	docDS5050(filein,dsda);
	string nguoiTroGiup;
	int ran; 
	int ran2;
	int score = 0;
	int chon1 = 0;
	int chon2 = 0;
	int chon3 = 0;
	srand(time(NULL));
	int n = ds_CH.size();
	for(int i=0;i<15;i++)
	{
		ran = rand() % ds_CH.size(); 
		ran2 = ran;
		main:
		in_Muc_Diem(i);
		In_man_hinh();
		In_chu_Ai_la_trieu_phu();
		gotoXY(92,4);
		cout<<"(1)50/50"<<endl;
		gotoXY(92,5);
		cout<<"(2)Hoi khan gia"<<endl;
		gotoXY(92,6);
		cout<<"(3)Goi DT"<<endl;
		gotoXY(92,7);
		cout<<"(4)Dung cuoc choi"<<endl;
		SET_COLOR(19);
		gotoXY(10,14);
		cout<<ds_CH[ran].cauHoii<<endl;
		gotoXY(10,15);
		cout<<ds_CH[ran].A<<endl;
		gotoXY(40,15);
		cout<<ds_CH[ran].B<<endl;
		gotoXY(10,16);
		cout<<ds_CH[ran].C<<endl;
		gotoXY(40,16);
		cout<<ds_CH[ran].D<<endl;
		gotoXY(10,17);
		cout<<"Cau tra loi cua ban la: ";
		getline(cin,traLoi);
		
		if(traLoi==ds_CH[ran].DADung) 
		{	
			amThanhTraLoiDung();	
			system("cls");
		}
		else if(traLoi == "1")
		{
			if(chon1 == 0)
			{
				amThanhDA5050();
				system("cls");
				in_Muc_Diem(i);
				In_man_hinh();
				In_chu_Ai_la_trieu_phu();
				gotoXY(92,5);
				cout<<"(2)Hoi khan gia"<<endl;
				gotoXY(92,6);
				cout<<"(3)Goi DT"<<endl;
				gotoXY(92,7);
				cout<<"(4)Dung cuoc choi"<<endl;
				SET_COLOR(3);
				gotoXY(10,14);
				cout<<ds_CH[ran].cauHoii<<endl;
				gotoXY(10,15);
				cout<<dsda[ran2].DAdung1<<endl;
				gotoXY(40,15);
				cout<<dsda[ran2].DAdung2<<endl;
				gotoXY(10,17);
				cout<<"Cau tra loi cua ban la: ";
				getline(cin,traLoi);
				if(traLoi==ds_CH[ran].DADung)
				{
					amThanhTraLoiDung();
					score++;
					chon1++;
					system("cls");
				}
				else
				{
					amThanhTraLoiSai();
					gotoXY(10,18);
					cout<<"BAN DA TRA LOI SAI"<<endl;
					amThanhRaVe();
					gotoXY(10,19);
					cout<<"CAM ON DA DEN VOI CHUONG TRINH"<<endl;
					gotoXY(10,20);
					cout<<"SO TIEN CUA BAN LA: ";
					Muc_diem(i); 
					sleep(3);
					system("cls"); 
					In_man_hinh();
					In_chu_Ai_la_trieu_phu();
					break; 
				}
			}
			else
			{
				gotoXY(10,20);
				cout<<"Lua chon nay da duoc ban su dung";
				sleep(2);
				system("cls");
				goto main;
			}
		}
		else if(traLoi == "2")
		{
			if(chon2 == 0)
			{
				amThanh30s();
				system("cls");
				in_Muc_Diem(i);
				In_man_hinh();
				In_chu_Ai_la_trieu_phu();
				gotoXY(92,4);
				cout<<"(1)50/50"<<endl;
				gotoXY(92,6);
				cout<<"(3)Goi DT"<<endl;
				gotoXY(92,7);
				cout<<"(4)Dung cuoc choi"<<endl;
				SET_COLOR(3);
				gotoXY(10,14);
				cout<<ds_CH[ran].cauHoii<<endl;
				gotoXY(10,15);
				cout<<ds_CH[ran].A<<"\t\t\t"<<ds_CH[ran].B<<endl;
				gotoXY(10,16);
				cout<<ds_CH[ran].C<<"\t\t\t"<<ds_CH[ran].D<<endl;
				gotoXY(10,19);
				cout<<"100% khan gia trong truong quay chon dap an: "<<ds_CH[ran].DADung<<endl;
				gotoXY(10,20);
				cout<<"Cau tra loi cuoi cung cua ban la: ";
				getline(cin,traLoi);
				if(traLoi==ds_CH[ran].DADung)
				{
					amThanhTraLoiDung();
					chon2++;
					system("cls");
				}
				else
				{
					amThanhTraLoiSai();
					gotoXY(10,19);
					cout<<"BAN DA TRA LOI SAI"<<endl;
					amThanhRaVe();
					gotoXY(10,20);
					cout<<"CAM ON DA DEN VOI CHUONG TRINH"<<endl;
					gotoXY(10,21);
					cout<<"SO TIEN CUA BAN LA: ";
					Muc_diem(i); 
					sleep(3);
					system("cls"); 
					In_man_hinh();
					In_chu_Ai_la_trieu_phu();
					break; 
				}
			}
			else
			{
				gotoXY(10,20);
				cout<<"Lua chon nay da duoc ban su dung";
				sleep(2);
				system("cls");
				goto main;
			}
		}
		else if(traLoi == "3")
		{
			if(chon3 == 0)
			{	
				amThanhGoiDT();
				system("cls");
				in_Muc_Diem(i);
				In_man_hinh();
				In_chu_Ai_la_trieu_phu();
				gotoXY(92,4);
				cout<<"(1)50/50"<<endl;
				gotoXY(92,5);
				cout<<"(2)Hoi khan gia"<<endl;
				gotoXY(92,7);
				cout<<"(4)Dung cuoc choi"<<endl;
				SET_COLOR(3);
				gotoXY(10,14);
				cout<<ds_CH[ran].cauHoii<<endl;
				gotoXY(10,15);
				cout<<ds_CH[ran].A<<endl;
				gotoXY(40,15);
				cout<<ds_CH[ran].B<<endl;
				gotoXY(10,16);
				cout<<ds_CH[ran].C<<endl;
				gotoXY(40,16);
				cout<<ds_CH[ran].D<<endl;	
				gotoXY(10,17);			
				cout<<"Ban muon goi dien thoai cho ai?";
				getline(cin,nguoiTroGiup);
				gotoXY(10,18);	
				cout<<"Chung toi xin ket noi dien thoai den "<<nguoiTroGiup<<endl; 	
				amThanhChoThoiGianTraLoi();
				amThanh30s();	
				gotoXY(10,19);
				cout<<nguoiTroGiup<<" dua ra dap an dung la dap an: "<<ds_CH[ran].DADung<<endl; 
				gotoXY(10,20);
				cout<<"Cau tra loi cua ban la: ";
				getline(cin,traLoi);
				if(traLoi==ds_CH[ran].DADung)
				{
					amThanhTraLoiDung();
					score++;
					chon3++;
					system("cls");
				}
				else
				{
					amThanhTraLoiSai();
					gotoXY(10,18);
					cout<<"BAN DA TRA LOI SAI"<<endl;
					amThanhRaVe();
					gotoXY(10,19);
					cout<<"CAM ON DA DEN VOI CHUONG TRINH"<<endl;
					gotoXY(10,20);
					cout<<"SO TIEN CUA BAN LA: ";
					Muc_diem(i); 
					sleep(3);
					system("cls"); 
					In_man_hinh();
					In_chu_Ai_la_trieu_phu();
					break; 
				}				
			}
			else
			{
				gotoXY(10,20);
				cout<<"Lua chon nay da duoc ban su dung";
				sleep(2);
				system("cls");
				goto main;
			}			
		}
		else if(traLoi == "4")
		{
			system("cls");
			in_Muc_Diem(i);
			In_man_hinh();
			In_chu_Ai_la_trieu_phu();
			gotoXY(10,15);
			cout<<"Ban da chon dung cuoc choi"; 
			amThanhRaVe();
			gotoXY(10,16);
			cout<<"SO TIEN CUA BAN LA: ";
			Muc_diem(i); 
			sleep(3);
			system("cls"); 
			In_man_hinh();
			In_chu_Ai_la_trieu_phu();
			break; 
		}
		else
		{
			amThanhTraLoiSai();
			gotoXY(10,18);
			cout<<"BAN DA TRA LOI SAI"<<endl;
			amThanhRaVe();
			gotoXY(10,19);
			cout<<"CAM ON DA DEN VOI CHUONG TRINH"<<endl;
			gotoXY(10,20);
			cout<<"SO TIEN CUA BAN LA: ";
			Muc_diem(i); 
			sleep(3);
			system("cls"); 
			In_man_hinh();
			In_chu_Ai_la_trieu_phu();
			break; 
		}
		ds_CH.erase(ds_CH.begin() + ran);//tranh lap cau hoi 
		dsda.erase(dsda.begin()+ran2);//tranh lap dap an 
		if(i==14)
		{
			in_Muc_Diem(15);//diem cao nhat 
			In_man_hinh();
			In_chu_Ai_la_trieu_phu();
			amThanhRaVe();
			gotoXY(10,19);
			cout<<"CAM ON DA DEN VOI CHUONG TRINH"<<endl;
			gotoXY(10,20);
			cout<<"SO TIEN CUA BAN LA: ";
			Muc_diem(i); 
			sleep(3);
			system("cls"); 
			In_man_hinh();
			In_chu_Ai_la_trieu_phu();
		}
	}
	filein.close();
}

void playgame()
{
	nguoiThamGia nguoi;
//	loadingggg();
	vector<CauHoi> ds_ch;
//	nguoiChoi(nguoi); 
	ifstream filein;
	filein.open("D:\\DOANCTDL\\filetext\\cauhoi.txt",ios_base::in);
	docDSCauHoi(filein,ds_ch);
	xuatCauHoi(ds_ch);
	filein.close();
}

str thaotac[3] = {"CHOI GAME","HUONG DAN","THOAT GAME"};
enum trangThai{LEN,XUONG,TRAI,PHAI,ENTER,BACK};
trangThai key(int x)
{
	if(x == 224)
	{
		char c;
		c = getch();
		if(c == 72)
			return LEN;
		if(c == 80)
			return XUONG;
		if(c == 77)
			return PHAI;
		if(c == 75)
			return TRAI;
	}
	else if(x == 13)
		return ENTER; 
}

int menu(str thaotac[], int n) 
{
	int tt = 0;
	int *mau = new int[n];
	char kytu = 16; 
	while(1)
	{
		//clrscr();//reset srceen	
		gotoXY(40,14);
		for(int i=0;i<n;i++)
		{
			TextColor(mau[i]);
			cout<<kytu<<" "<<thaotac[i]<<"\t\t";
			gotoXY(40,15);
			if(i==1)
			{
				cout<<kytu<<" "<<thaotac[i]<<"\t\t";
			}
			gotoXY(40,16);
			if(i==2)
			{
				cout<<kytu<<" "<<thaotac[i]<<"\t\t";
			}
		}
		int x = getch();
		trangThai trangthai = key(x);
		switch(trangthai)
		{
			case LEN://LEN = 0; 
			{
				if(tt == 0)
					tt = n-1;
				else	
					tt--;
				break;
			}	
			case XUONG://XUONG = 1; 
			{
				if(tt == n-1)
					tt = 0;
				else
					tt++;
				break;
			}	
			case ENTER:
			{
				if(tt==0) 
				{
					system("cls");
					playgame(); 
				}
				if(tt==1)
				{
					system("cls");
					huong_Dan();
				}
				if(tt==n-1)
				{
					system("cls"); 
					gotoXY(5,10);
					thoatgame(); 
					exit(0); 
				} 
			}
				
		}
		for(int i=0;i<n;i++)
			mau[i] = MAUCHU;
		mau[tt] = MAUNEN;	
		
	}
	 
}

void Muc_diem(int i)
{
    switch(i)
        {
        case 0:
            cout<<"$0";
            break;
        case 1:
            cout<<"$100";
            break;
        case 2:
            cout<<"$200";
            break;
        case 3:
            cout<<"$300";
            break;
        case 4:
            cout<<"$500";
            break;
        case 5:
            cout<<"$1.000";
            break;
        case 6:
            cout<<"$2.000";
            break;
        case 7:
            cout<<"$4.000";
            break;
        case 8:
            cout<<"$8.000";
            break;
        case 9:
            cout<<"$16.000";
            break;
        case 10:
            cout<<"$32.000";
            break;
        case 11:
            cout<<"$64.000";
            break;
        case 12:
            cout<<"$125.000";
            break;
        case 13:
            cout<<"$250.000";
            break;
        case 14:
            cout<<"$500.000";
            break;
        case 15:
            cout<<"$1000.000";
            break;
        };
}
void in_Muc_Diem(int diem)
{
 	for(int i=0;i<=15;i++)
    { 
        if(diem==i){
            SET_COLOR(12);
        }
 		gotoXY(SIZE_D - 7,(SIZE_R+3) + 2 - i);
        Muc_diem(i);
        SET_COLOR(3);
    }
}
void In_duong_so_1()
{
    gotoXY(5,3);
    char x = 178;
    for(int i = 1;i<=SIZE_D+5;i++)
    {
      	cout<<x;
    }
}
void In_duong_so_2()
{
    gotoXY(5, SIZE_R + 6);
    char x = 178;
    for(int i = 1;i<=SIZE_D+5;i++)
    {
         cout<<x;
    }
}
void In_duong_so_3()
{
    char x = 178;
    for(int i = 1;i<=SIZE_R+3;i++)
    {
        gotoXY(5,i+3);
        cout<<x;
    }
}
void In_duong_so_4()
{
    char x = 178;
    for(int i = 1;i<=SIZE_R+3;i++)
    {
        gotoXY( SIZE_D + 9 ,i+3);
        cout<<x;
    }
}
void In_duong_so_5()
{
    char x = 178;
    for(int i = 1;i<=SIZE_R+3;i++)
    {
        gotoXY( SIZE_D - 10 ,i+3);
        cout<<x;
    }
}
void In_duong_so_6()
{
    char x = 205;
    gotoXY( SIZE_D - 9 ,9);
    for(int i = 1;i<=18;i++)
    {
        cout<<x;
    }
}
void In_duong_so_7()
{
    char x = 205;
    gotoXY( 6 ,12);
    for(int i = 1;i<=SIZE_D-16;i++)
    {
        cout<<x;
    }
}
void In_chu_Ai_la_trieu_phu()
{
    fstream fin("D:\\DOANCTDL\\filetext\\Ailatrieuphu.txt");
    SET_COLOR(58);
	for(int i = 0;i<8;i++)
    {
        gotoXY(15,4+i);
        string data;
        getline(fin, data);
        cout << data;
    }
    fin.close();
}
void In_man_hinh()
{
	SET_COLOR(59);
    In_duong_so_1();
    In_duong_so_2();
    In_duong_so_3();
    In_duong_so_4();
    In_duong_so_5();
    In_duong_so_6();
    In_duong_so_7(); 
}
void huong_Dan()
{
	fstream fin("D:\\DOANCTDL\\filetext\\huongdanchoigame.txt");
    SET_COLOR(3);
    gotoXY(10,15);
	for(int i = 0;i<8;i++)
    {
        string data;
        getline(fin, data);
        cout << data;
    }
    sleep(2);
    system("cls");
    fin.close();
    In_man_hinh();
	In_chu_Ai_la_trieu_phu();
} 
void themCauHoiVaoFile(CauHoi &ch,DapAn5050 &da)
{
	ofstream file;
	file.open("D:\\DOANCTDL\\filetext\\cauhoi.txt",ios_base::app);//mo file them cau hoi
	file<<endl; 
	getline(cin,ch.cauHoii);
	file<<ch.cauHoii<<endl;	
	getline(cin,ch.A);
	file<<ch.A<<endl;
	getline(cin,ch.B);
	file<<ch.B<<endl;
	getline(cin,ch.C);
	file<<ch.C<<endl;
	getline(cin,ch.D);
	file<<ch.D<<endl;
	getline(cin,ch.DADung);
	file<<ch.DADung;
	file.close();
	
	ofstream file1; 
	file1.open("D:\\DOANCTDL\\filetext\\5050.txt",ios_base::app);//mo file them 2 dap an
	file1<<endl; 
	getline(cin,da.DAdung1);
	file1<<da.DAdung1<<endl;	
	getline(cin,da.DAdung2);
	file1<<da.DAdung2;
	file1.close();
} 

int main()
{
//	CauHoi ch;
//	DapAn5050 da;
//	themCauHoiVaoFile(ch,da);
 	loadingggg(); 
	In_man_hinh();
	In_chu_Ai_la_trieu_phu();
	menu(thaotac,3);
	return 0;

}
