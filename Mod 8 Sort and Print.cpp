//How to insert a course into tree
void BinarySearchTree::Insert(Course temp){
    Node* currentNode = root;

    if(root == nullptr){
        root = new Node(temp);
    }
    else{
        while (currentNode != nullptr){
            if(temp.courseId < currentNode->course.courseId){
                if(currentNode->left == nullptr){
                    currentNode->left = new Node(temp);
                    currentNode = nullptr;
                }
                else{
                    currentNode = currentNode->left;
                }
            }
            else{
                if (currentNode->right == nullptr){
                    currentNode->right = new Node(temp);
                    currentNode = nullptr;
                }

                else{
                    currentNode = currentNode->right;
                }

            }
            
        }
    }
    size++;
}


//How to print course Id and Course name and prererquisities
void printCourse(Course temp){
    cout << temp.courseId << ", " << temp.courseName << endl;
    cout << "Prerequisites: ";

//Checking if there are prerequisites
    if(temp.preList.empty()) {
        cout << "None" << endl;
    }

    else {
        for(int i = 0; i < temp.preList.size(); i++) {
            cout << temp.preList.at(i);
            if (temp.preList.size() > 1 && i < temp.preList.size() - 1) {
                cout << ", ";
            }
        }
    }
    cout << endl; //End print line
}