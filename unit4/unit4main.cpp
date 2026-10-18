#include <iostream>
#include <map>
#include <queue>
#include <string>
using namespace std;

struct Node
{
    string title;
    Node* left;
    Node* right;

    Node(string t)
    {
        title = t;
        left = NULL;
        right = NULL;
    }
};

Node* createLayout()
{
    Node* root = new Node("Front Page");

    root->left = new Node("National News");
    root->right = new Node("Sports News");

    root->left->left = new Node("Politics");
    root->left->right = new Node("Business");

    root->right->left = new Node("Cricket");
    root->right->right = new Node("Football");

    root->left->left->left = new Node("Local News");
    root->right->right->right = new Node("Weather");

    return root;
}

void displayTree(Node* root, int space = 0)
{
    if (root == NULL)
        return;

    space += 5;

    displayTree(root->right, space);

    cout << endl;
    for (int i = 5; i < space; i++)
        cout << " ";

    cout << root->title << endl;

    displayTree(root->left, space);
}

void displayTopView(Node* root)
{
    if (root == NULL)
        return;

    map<int, string> top;
    queue<pair<Node*, int> > q;

    q.push(make_pair(root, 0));

    while (!q.empty())
    {
        pair<Node*, int> p = q.front();
        q.pop();

        Node* current = p.first;
        int hd = p.second;

        if (top.find(hd) == top.end())
            top[hd] = current->title;

        if (current->left != NULL)
            q.push(make_pair(current->left, hd - 1));

        if (current->right != NULL)
            q.push(make_pair(current->right, hd + 1));
    }

    cout << "\nTop View of Newspaper Layout:\n";

    for (map<int, string>::iterator it = top.begin();
         it != top.end(); ++it)
    {
        cout << "HD " << it->first
             << " : " << it->second << endl;
    }
}

int main()
{
    Node* root = createLayout();
    int choice;

    do
    {
        cout << "\n===== NEWSPAPER PAGE LAYOUT =====\n";
        cout << "1. Display Newspaper Layout\n";
        cout << "2. Display Top View\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";

        if (!(cin >> choice))
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input! Enter 1, 2 or 3.\n";
            continue;
        }

        switch (choice)
        {
            case 1:
                displayTree(root);
                break;

            case 2:
                displayTopView(root);
                break;

            case 3:
                cout << "Program exited successfully.\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 3);

    return 0;
}
