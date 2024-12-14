#include <iostream>
#include <string>

class Personcls{
    private:
        std::string firtName;
        std::string lastName;
        std::string email;
        std::string password;
    public:
        Personcls():firtName(""), lastName(""),email(""),password("") {}

        void setFirtName(){
            std::cout<<"Put First Name";
            std::cin>>this->firtName;
        }
        void setlastName(){
            std::cout<<"Put Last Name";
            std::cin>>this->lastName;
        }

        void setGmail(){
            std::cout<<"Put Email";
            std::cin>>this->email;
        }

        void setPassword(){
            std::cout<<"Put Password";
            std::cin>>this->password;
        }
        
        std::string getFirtName(){
            return firtName;
        }

        std::string getLastName(){
            return lastName;
        }


         std::string getLEmail(){
            return email;
        }


         std::string getPassword(){
            return password;
        }

        void messageWelcome(){
             std::cout << "Welcome, " << firtName << " " << lastName << "!" << std::endl;
            std::cout << "Your registered email is: " << email << std::endl;
        }
        
        
    
};

// class Employer : public Personcls{
//     private:
//         double salary;
//     public:
//         Employer(std::string name, std::string jobs, double salary) : Personcls(name, jobs) { 
//             this->salary = salary;
//         }

//         void setSalary(double salary){
//             std::cin>>this->salary;
//         }
        
//         double getSalary(){
//             return salary;
//         }

//         void displayInfo() {
//         std::cout << "Name: " << getName() << std::endl;
//         std::cout << "Job: " << getJobs() << std::endl;
//         std::cout << "Salary: " << getSalary() << std::endl;
//         }

// };




