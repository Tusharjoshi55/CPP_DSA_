#include<iostream>
#include<vector>
#include<string>


class Youtube{

    //encapsulation make the variable inside a wrapper which we called private and protected. so no one can mess with them
    private:
    std::string channelName, description, ownerName, email;
    int subscriber = 0;



    public:
    //paramertize constructor and we can say it is setter
    Youtube(std::string email, std::string channelName, std::string ownerName, std::string description){
        this->email = email;
        this->channelName = channelName;
        this->ownerName = ownerName;
        this->description = description;
    }
    // print the channel details
    void get_details(){
        std::cout<<"Channel Name : "<<channelName<<"\n"
        <<"Email : "<<email<<"\n"
        <<"Owner Name : "<<ownerName<<"\n"
        <<"Suscriber : "<<subscriber<<"\n"
        <<"Description : "<<description;
    }

    void Subscribe(){ //counter for subscribers
        subscriber++;
    }
    void Unsubstribe(){ //counter for subscribers
        if(subscriber > 0){
            subscriber--;
        }
    }
};


int main(){
    Youtube y("ZoomBoi@gmail.com", "ZoomBoy", "Zoom Kid", "Coming from mars to stablished new civilization.");
    y.get_details();
    std::cout<<"\n\n\n";
    y.Subscribe();y.Subscribe();y.Subscribe();y.Subscribe();y.Subscribe();y.Subscribe();y.Subscribe();y.Subscribe();y.Subscribe(); // 9 times;
    y.get_details();
    std::cout<<"\n\n\n";
    y.Unsubstribe();
    y.get_details();
    return 0;
}