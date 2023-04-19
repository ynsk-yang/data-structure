#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;

// 음악 정보를 저장하는 Music 클래스
class Music {
private:
    string title;
    string artist;
    string album;
    int releaseYear;
public:
    Music(string title, string artist, string album, int releaseYear) {
        this->title = title;
        this->artist = artist;
        this->album = album;
        this->releaseYear = releaseYear;
    }
    string getTitle() {
        return title;
    }
    string getArtist() {
        return artist;
    }
    string getAlbum() {
        return album;
    }
    int getReleaseYear() {
        return releaseYear;
    }
};

// 음악 스트리밍 서비스를 제공하는 MusicStreamingService 클래스
class MusicStreamingService {
private:
    vector<Music> musicList; // 음악 리스트
public:
    // 음악 정보를 추가하는 함수
    void addMusic(string title, string artist, string album, int releaseYear) {
        Music music(title, artist, album, releaseYear);
        musicList.push_back(music);
    }
    // 제목과 아티스트명으로 음악을 찾는 함수
    Music findMusic(string title, string artist) {
        for (int i = 0; i < musicList.size(); i++) {
            if (musicList[i].getTitle() == title && musicList[i].getArtist() == artist) {
                return musicList[i];
            }
        }
        // 해당하는 음악이 없으면 빈 Music 객체를 리턴
        return Music("", "", "", 0);
    }
};
