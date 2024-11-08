int main() {
    DoublyLinkedList list;
    int choice, data, pos;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Insert  data at the beginning\n";
        cout << "2. Insert  data at the end\n";
        cout << "3. Insert data at a specific position\n";
        cout << "4. Delete from the beginning\n";
        cout << "5. Delete from the end\n";
        cout << "6. Delete from a specific position\n";
        cout << "7. Display the list\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                cout << "Enter data to insert at the beginning: ";
                cin >> data;
                list.insertAtBeginning(data);
                break;

            case 2:
                cout << "Enter data to insert at the end: ";
                cin >> data;
                list.insertAtEnd(data);
                break;

            case 3:
                cout << "Enter data to insert: ";
                cin >> data;
                cout << "Enter position to insert: ";
                cin >> pos;
                list.insertAtPosition(data, pos);
                break;

            case 4:
                list.deleteFromBeginning();
                cout << "Deleted from the beginning.\n";
                break;

            case 5:

                list.deleteFromEnd();
                cout << "Deleted from the end.\n";
                break;
            case 6:

                cout << "Enter position to delete: ";
                cin >> pos;
                list.deleteFromPosition(pos);
                break;
            case 7:

                cout << "Current List: ";
                list.display();
                break;
            case 8:

                cout << "Exiting...\n";
                return 0;
            default:

                cout << "Invalid choice. please Try again.\n";
        }
 }
return 0;
}