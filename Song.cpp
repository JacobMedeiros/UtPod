//Song.cpp
//By:Reed Hopkins
//Date: 10/31/18

#include "Song.h"
#include <vector>

using namespace std;

    Song::Song(string title, string artist, int size){
        this->title = title;
        this->artist = artist;
        this->size = size;
    }

    void Song::setTitle(string newTitle){
        title = newTitle;
    }

    void Song::setArtist(string newArtist){
        artist = newArtist;
    }

    void Song::setSize(int newSize){
        size = newSize;
    }

    string Song::getTitle() const{
        return title;
    }

    string Song::getArtist() const{
        return artist;
    }

    int Song::setSize() const{
        return size;
    }

    bool Song::operator >(Song const &rhs){
        vector<char> alphabet(26) = {a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z};
        int letter1Index = 0;
        int letter2Index = 0;
        int counter = 0;
        if(artist != rhs.artist) {
            for (int i = 0; i < artist.length(); i++) {
                //char by char
            }
        }
        else if(artist.length() < rhs.artist.length()){
            return true;
        }
        else if(artist.length() > rhs.artist.length()){
            return false;
        }
        if(title != rhs.title){
            for(int i = 0; i < artist.length(); i++){
                //char by char
            }
        }
        else if(title.length() < rhs.title.length()){
            return true;
        }
        else if(title.length() > rhs.title.length()){
            return false;
        }
        if(size > rhs.size){
            return true;
        }
        else{
            return false;
        }
    }

    bool Song::operator <(Song const &rhs){
        vector<char> alphabet(26) = {a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z};
        int letter1Index = 0;
        int letter2Index = 0;
        int counter = 0;
        if(artist != rhs.artist) {
            for (int i = 0; i < artist.length(); i++) {
                //char by char
            }
        }
        else if(artist.length() < rhs.artist.length()){
            return true;
        }
        else if(artist.length() > rhs.artist.length()){
            return false;
        }
        if(title != rhs.title){
            for(int i = 0; i < artist.length(); i++){
                //char by char
            }
        }
        else if(title.length() < rhs.title.length()){
            return true;
        }
        else if(title.length() > rhs.title.length()){
            return false;
        }
        if(size > rhs.size){
            return true;
        }
        else{
            return false;
        }
    }

    bool Song::operator ==(Song const &rhs){
        return(title == rhs.title &&
        artist == rhs.artist &&
        size == rhs.size);
    }
