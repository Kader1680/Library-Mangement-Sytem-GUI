#include<iostream>
class clsBook{
    
     

    private:
        int identifer;
        std::string title;
        std::string auther;
        std::string Category;
        
    public:

        clsBook( )
        {

         
           
        }
        // set the data        
        void setTitle(){
            std::cout<<"enter the title of the boook ";
            std::cin>>this->title;
        }

         void setAuther(){
            std::cout<<"enter the Auther of the boook ";
            std::cin>>this->auther;

        }

         void setCategory(){
            std::cout<<"enter the Category of the boook ";
            std::cin>>this->Category;

        }
        
        // get the data
        
        std::string getTitle(){
            return title;

        }
        std::string getAuther(){
            return auther;
            
        }

        std::string getCategory(){
            return Category;
            
        }

        




};
