#include<iostream>
#include<vector>
#include<string>
using namespace std;
class task{
    public:
    string description;
    bool completed;
    task(string desc) : description(desc),completed(false){}
};
class ToDoList {
    private:
    vector<task> tasks;
    public:
    void addTask(const string& description){
        tasks.push_back(task(description));
        cout<<"task added :"<< description<<endl;
    }
    void viewtasks()const{
        if(tasks.empty()){
            cout<<"No tasks available."<<endl;
        }else{
            cout<<"To-Do List:"<<endl;
            for (size_t i = 0; i < tasks.size(); ++i)
            {
                cout<<i+1<<". "<<(tasks[i].completed ? "[completed]" :
"[pending]") << tasks[i].description<<endl;            }
            
        }
    }
    void marktaskcompleted(size_t index){
        if (index > 0 && index <=tasks.size()) {
            tasks[index -1 ].completed=true;
            cout<<"task marked as completed: "<< tasks[index-1].description<<endl;
        }else{
            cout<<"Invalid task number."<<endl;
        }
    }
    void removetask( unsigned int index){
        if(index >0 && index<=tasks.size()){
            cout<<"Task removed:"<< tasks[index-1].description<<endl;
            tasks.erase(tasks.begin() + index-1);
        }else{
            cout<<"Invalid task number."<<endl;
        }
    }
};

int main() {
    ToDoList todolist;
    int choice;
    do
    {
        cout<<"\nTo-Do- list Menu:\n";
        cout<<"1. Add Task\n";
        cout<<"2. View Task\n";
        cout<<"3. Marks Task as done\n";
        cout<<"4. Remove Task\n";
        cout<<"5. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        cin.ignore();

        switch (choice){
            case 1:{
                string description;
                cout<<"Enter Task description: ";
                getline(cin,description);
                todolist.addTask(description);
                break;                                  
            }
        
        case 2:{
            todolist.viewtasks();
            break;
        }
        case 3:{
            int tasknumber;
            cout<<"Enter task number to mark as completed: ";
            cin>>tasknumber;
            todolist.marktaskcompleted(tasknumber);
            break;
        }
        case 4:{
            int tasknumber;
            cout<<"Enter task number to remove: ";
            cin>>tasknumber;
            todolist.removetask(tasknumber);
            break;
        }
        case 5:{
            cout<<"Exiting the program..."<<endl;
            break;
        }
        default:
            cout<<"Invalid choice.please try again:)"<<endl;
            break;
        }
    } while (choice!=5);
    return 0;

    }    
