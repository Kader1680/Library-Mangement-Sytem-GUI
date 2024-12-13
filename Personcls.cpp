#include <iostream>
#include <string>

class Personcls{
    private:
        std::string name;
        std::string jobs;
    public:
        Personcls(std::string name, std::string jobs){
            this->name = name;
            this->jobs = jobs;
        };

        void setName(std::string name){
            std::cin>>this->name;
        }
        void setJobs(std::string jobs){
            std::cin>>this->jobs;
        }
        
        std::string getName(){
            return name;
        }

        std::string getJobs(){
            return jobs;
        }

        void message(){
            std::cout << "this is "<<this->name <<this->jobs << std::endl;
        }
        
        
    
};

class Employer : public Personcls{
    private:
        double salary;
    public:
        Employer(std::string name, std::string jobs, double salary) : Personcls(name, jobs) { 
            this->salary = salary;
        }

        void setSalary(double salary){
            std::cin>>this->salary;
        }
        
        double getSalary(){
            return salary;
        }

        void displayInfo() {
        std::cout << "Name: " << getName() << std::endl;
        std::cout << "Job: " << getJobs() << std::endl;
        std::cout << "Salary: " << getSalary() << std::endl;
        }

};


int main()
{
    
    Employer employer("Alice", "Manager", 75000.0);
    employer.displayInfo();
    

}


