#include<iostream>
class clsBook{
    
     

    private:
        int identifer;
        std::string title;
        std::string auther;
        std::string auther;
        std::string Category;
        
    public:

        clsBook( int identifer, 
            std::string title, 
            std::string auther , 
            std::string Category)
        {

            this->title = title;
            this->auther = auther;
            this->Category = Category;
           
        }
        // set the data        
        void setTitle(){
            cout<<"enter the title of the boook";
            cin>>this->title;
        }

         void setAuther(){
            cout<<"enter the Auther of the boook";
            cin>>this->Auther;

        }

         void setCategory(){
            cout<<"enter the Category of the boook";
            cin>>this->Category;

        }
        
        // get the data
        
        string getTitle(){
            return title;

        }
        string getAuther(){
            return Auther;
            
        }

        string getCategory(){
            return Category;
            
        }

        




};
