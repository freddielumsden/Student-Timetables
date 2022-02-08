#include <iostream>
#include <list>

class Student
{
public:
    std::list<std::string> subjects;
    Student(std::list<std::string> _subjects)
    {
        subjects = _subjects;
    }
    std::list<std::string> getSubjects()
    {
        return subjects;
    }
    void setSubjects(std::list<std::string> _subjects)
    {
        subjects = _subjects;
    }
    void addSubject(std::string subject)
    {
        subjects.push_back(subject);
    }
    void removeSubject
};
int main()
{
    Student student1({"Maths", "English"});
    student1.addSubject("Science");
    std::list<std::string> subjects = student1.getSubjects();
    for (auto subject : subjects) std::cout << subject << std::endl;
    return 0;
}