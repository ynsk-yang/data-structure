#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;

// ���� ������ �����ϴ� Music Ŭ����
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

// ���� ��Ʈ���� ���񽺸� �����ϴ� MusicStreamingService Ŭ����
class MusicStreamingService {
private:
    vector<Music> musicList; // ���� ����Ʈ
public:
    // ���� ������ �߰��ϴ� �Լ�
    void addMusic(string title, string artist, string album, int releaseYear) {
        Music music(title, artist, album, releaseYear);
        musicList.push_back(music);
    }
    // ����� ��Ƽ��Ʈ������ ������ ã�� �Լ�
    Music findMusic(string title, string artist) {
        for (int i = 0; i < musicList.size(); i++) {
            if (musicList[i].getTitle() == title && musicList[i].getArtist() == artist) {
                return musicList[i];
            }
        }
        // �ش��ϴ� ������ ������ �� Music ��ü�� ����
        return Music("", "", "", 0);
    }
};
