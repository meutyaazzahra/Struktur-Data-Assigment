/// Meutya Azzahra Efendi
/// 2311102166

#include <iostream>
#include <iomanip>
using namespace std;

struct Node
{
    char data_2311102166;
    Node *left_2311102166, *right_2311102166, *parent_2311102166; // pointer
};

Node *root_2311102166;

class Tree
{
public:
    Tree()
    {
        root_2311102166 = nullptr;
    }

    bool isEmpty()
    {
        return root_2311102166 == nullptr;
    }

    Node *makeNode(char data)
    {
        Node *newNode_2311102166 = new Node;
        newNode_2311102166->data_2311102166 = data;
        newNode_2311102166->left_2311102166 = nullptr;
        newNode_2311102166->right_2311102166 = nullptr;
        newNode_2311102166->parent_2311102166 = nullptr;

        return newNode_2311102166;
    }

    void makeBranch(char data)
    {
        if (isEmpty())
        {
            root_2311102166 = makeNode(data);
            cout << "\nNode " << data << " berhasil dibuat menjadi root_2311102166." << endl;
        }
        else
        {
            cout << "\nPohon sudah dibuat" << endl;
        }
    }

    Node *insertLeft(char data, Node *node)
    {
        if (isEmpty())
        {
            cout << "\nBuat tree terlebih dahulu!" << endl;
            return nullptr;
        }
        else
        {
            if (node == nullptr)
            {
                cout << "Node tersebut tidak valid atau tidak ada" << endl;
                return nullptr;
            }

            if (node->left_2311102166 != nullptr)
            {
                cout << "\nNode " << node->data_2311102166 << " sudah ada child kiri!"
                     << endl;

                return nullptr;
            }
            else
            {
                Node *newNode_2311102166 = makeNode(data);
                newNode_2311102166->parent_2311102166 = node;
                node->left_2311102166 = newNode_2311102166;
                cout << "\nNode " << data << " berhasil ditambahkan ke child kiri " << node->data_2311102166 << endl;
                return newNode_2311102166;
            }
        }
    }

    Node *insertRight(char data, Node *node)
    {
        if (isEmpty())
        {
            cout << "\nBuat tree terlebih dahulu!" << endl;
            return nullptr;
        }
        else
        {
            if (node == nullptr)
            {
                cout << "Node tersebut tidak valid atau tidak ada" << endl;
                return nullptr;
            }

            if (node->right_2311102166 != nullptr)
            {
                cout << "\nNode " << node->data_2311102166 << " sudah ada child kanan!"

                     << endl;

                return nullptr;
            }
            else
            {
                Node *newNode_2311102166 = makeNode(data);
                newNode_2311102166->parent_2311102166 = node;
                node->right_2311102166 = newNode_2311102166;
                cout << "\nNode " << data << " berhasil ditambahkan ke child kanan " << node->data_2311102166 << endl;
                return newNode_2311102166;
            }
        }
    }

    void update(char data, Node *node)
    {
        if (isEmpty())
        {
            cout << "\nBuat tree terlebih dahulu!" << endl;
        }
        else
        {
            if (!node)
                cout << "\nNode yang ingin diganti tidak ada!!" << endl;
            else
            {
                char temp = node->data_2311102166;
                node->data_2311102166 = data;
                cout << "\nNode " << temp << " berhasil diubah menjadi " << data << endl;
            }
        }
    }

    void retrieve(Node *node)
    {
        if (isEmpty())
        {
            cout << "\nBuat tree terlebih dahulu!" << endl;
        }
        else
        {
            if (!node)
                cout << "\nNode yang ditunjuk tidak ada!" << endl;
            else
            {
                cout << "\nData node : " << node->data_2311102166 << endl;
            }
        }
    }

    void find(Node *node)
    {
        if (isEmpty())
        {
            cout << "\nBuat tree terlebih dahulu!" << endl;
        }
        else
        {
            if (!node)
                cout << "\nNode yang ditunjuk tidak ada!" << endl;
            else
            {
                cout << "\nData Node : " << node->data_2311102166 << endl;
                cout << "Rootroot_2311102166 : " << root_2311102166->data_2311102166 << endl;

                if (!node->parent_2311102166)
                {
                    cout << "Parent : (tidak punya parent)" << endl;
                }
                else
                {
                    cout << "Parent : " << node->parent_2311102166->data_2311102166 << endl;
                }

                if (node->parent_2311102166 != nullptr && node->parent_2311102166->left_2311102166 != node && node->parent_2311102166->right_2311102166 == node)
                {
                    cout << "Sibling : " << node->parent_2311102166->left_2311102166->data_2311102166 << endl;
                }
                else if (node->parent_2311102166 != nullptr && node->parent_2311102166->right_2311102166 != node && node->parent_2311102166->left_2311102166 == node)
                {
                    cout << "Sibling : " << node->parent_2311102166->right_2311102166->data_2311102166 << endl;
                }
                else
                {
                    cout << "Sibling : (tidak punya sibling)" << endl;
                }

                if (!node->left_2311102166)
                {
                    cout << "Child Kiri : (tidak punya Child kiri)" << endl;
                }
                else
                {
                    cout << "Child Kiri : " << node->left_2311102166->data_2311102166 << endl;
                }

                if (!node->right_2311102166)
                {
                    cout << "Child Kanan : (tidak punya Child kanan)" << endl;
                }
                else
                {
                    cout << "Child Kanan : " << node->right_2311102166->data_2311102166 << endl;
                }
            }
        }
    }

    // Penelusuran (Traversal)
    // preOrder
    void preOrder(Node *node)
    {
        if (isEmpty())
            cout << "\nBuat tree terlebih dahulu!" << endl;
        else
        {
            if (node != nullptr)
            {
                cout << " " << node->data_2311102166 << ", ";
                preOrder(node->left_2311102166);
                preOrder(node->right_2311102166);
            }
        }
    }

    // inOrder
    void inOrder(Node *node)
    {
        if (isEmpty())
            cout << "\nBuat tree terlebih dahulu!" << endl;
        else
        {
            if (node != nullptr)
            {
                inOrder(node->left_2311102166);
                cout << " " << node->data_2311102166 << ", ";
                inOrder(node->right_2311102166);
            }
        }
    }

    // postOrder
    void postOrder(Node *node)
    {
        if (isEmpty())
            cout << "\nBuat tree terlebih dahulu!" << endl;
        else
        {
            if (node != nullptr)
            {
                postOrder(node->left_2311102166);
                postOrder(node->right_2311102166);
                cout << " " << node->data_2311102166 << ", ";
            }
        }
    }

    // Hapus Node Tree
    void deleteTree(Node *node)
    {
        if (isEmpty())
            cout << "\nBuat tree terlebih dahulu!" << endl;
        else
        {
            if (node != nullptr)
            {
                if (node != root_2311102166)
                {
                    if (node->parent_2311102166->left_2311102166 == node)
                        node->parent_2311102166->left_2311102166 = nullptr;
                    else if (node->parent_2311102166->right_2311102166 == node)
                        node->parent_2311102166->right_2311102166 = nullptr;
                }

                deleteTree(node->left_2311102166);
                deleteTree(node->right_2311102166);

                if (node == root_2311102166)
                {
                    delete root_2311102166;
                    root_2311102166 = nullptr;
                }
                else
                {
                    delete node;
                }
            }
        }
    }

    // Hapus SubTree
    void deleteSub(Node *node)
    {
        if (isEmpty())
            cout << "\nBuat tree terlebih dahulu!" << endl;
        else
        {
            deleteTree(node->left_2311102166);
            deleteTree(node->right_2311102166);

            cout << "\nNode subtree " << node->data_2311102166 << " berhasil dihapus."
                 << endl;
        }
    }

    // Hapus Tree
    void clear()
    {
        if (isEmpty())
            cout << "\nBuat tree terlebih dahulu!!" << endl;
        else
        {
            deleteTree(root_2311102166);
            cout << "\nNode berhasil dihapus." << endl;
        }
    }

    // Cek Size Tree
    int size(Node *node)
    {
        if (isEmpty())
        {
            cout << "\nBuat tree terlebih dahulu!!" << endl;
            return 0;
        }
        else
        {
            if (!node)
            {
                return 0;
            }
            else
            {
                return 1 + size(node->left_2311102166) + size(node->right_2311102166);
            }
        }
    }

    // Cek Height Level Tree
    int height(Node *node)
    {
        if (isEmpty())
        {
            cout << "\nBuat tree terlebih dahulu!" << endl;
            return 0;
        }
        else
        {
            if (!node)
            {
                return 0;
            }
            else
            {
                int heightKiri = height(node->left_2311102166);
                int heightKanan = height(node->right_2311102166);
                if (heightKiri >= heightKanan)
                {
                    return heightKiri + 1;
                }
                else
                {
                    return heightKanan + 1;
                }
            }
        }
    }

    // Karakteristik Tree
    void characteristic()
    {
        int s = size(root_2311102166);
        int h = height(root_2311102166);
        cout << "\nSize Tree : " << s << endl;
        cout << "Height Tree : " << h << endl;
        if (h != 0)
            cout << "Average Node of Tree : " << s / h << endl;
        else
            cout << "Average Node of Tree : 0" << endl;
    }

    // Fungsi untuk mendapatkan Node root
    Node *getRoot()
    {
        return root_2311102166;
    }

    // Fungsi untuk menemukan node tertentu
    Node *findNode(char data, Node *node)
    {
        if (node == nullptr)
            return nullptr;
        if (node->data_2311102166 == data)
            return node;
        Node *leftResult = findNode(data, node->left_2311102166);
        if (leftResult != nullptr && leftResult->data_2311102166 == data)
            return leftResult;
        return findNode(data, node->right_2311102166);
    }
};

void displayMenu()
{
    cout << "\nMenu:" << endl;
    cout << "1. Buat node root" << endl;
    cout << "2. Tambahkan child kiri" << endl;
    cout << "3. Tambahkan child kanan" << endl;
    cout << "4. Ubah node" << endl;
    cout << "5. Tampilkan data node" << endl;
    cout << "6. Cari node" << endl;
    cout << "7. Preorder traversal" << endl;
    cout << "8. Inorder traversal" << endl;
    cout << "9. Postorder traversal" << endl;
    cout << "10. Hapus subtree" << endl;
    cout << "11. Hapus seluruh tree" << endl;
    cout << "12. Tampilkan karakteristik tree" << endl;
    cout << "13. Keluar" << endl;
    cout << "Pilih menu: ";
}

int main()
{
    // Di main gak usah pakai nim lah ya, ribet 🗿
    Tree tree;
    int choice;
    char data, targetData;
    Node *currentNode = nullptr, *targetNode;

    do
    {
        displayMenu();
        cin >> choice;

        switch (choice)
        {
        case 1:
            if (tree.isEmpty())
            {
                cout << "Masukkan data untuk root: ";
                cin >> data;
                tree.makeBranch(data);
                currentNode = tree.getRoot();
            }
            else
            {
                cout << "Tree sudah dibuat!" << endl;
            }
            break;

        case 2:
            if (!tree.isEmpty())
            {
                cout << "Masukkan pohon yang ingin ditambah child-nya: ";
                cin >> targetData;
                cout << "Masukkan data untuk child kiri: ";
                cin >> data;

                targetNode = tree.findNode(targetData, currentNode);

                tree.insertLeft(data, targetNode);
            }
            else
            {
                cout << "Tree belum dibuat!" << endl;
            }
            break;

        case 3:
            if (!tree.isEmpty())
            {
                cout << "Masukkan pohon yang ingin ditambah child-nya: ";
                cin >> targetData;
                cout << "Masukkan data untuk child kanan: ";
                cin >> data;

                targetNode = tree.findNode(targetData, currentNode);

                tree.insertRight(data, targetNode);
            }
            else
            {
                cout << "Tree belum dibuat!" << endl;
            }
            break;

        case 4:
            if (!tree.isEmpty())
            {
                cout << "Masukkan pohon yang ingin diganti: ";
                cin >> targetData;
                cout << "Masukkan data baru untuk pohon: ";
                cin >> data;

                targetNode = tree.findNode(targetData, currentNode);

                tree.update(data, targetNode);
            }
            else
            {
                cout << "Tree belum dibuat!" << endl;
            }
            break;

        case 5:
            if (!tree.isEmpty())
            {
                cout << "Masukkan pohon yang ingin ditampilkan: ";
                cin >> targetData;

                targetNode = tree.findNode(targetData, currentNode);

                tree.retrieve(targetNode);
            }
            else
            {
                cout << "Tree belum dibuat!" << endl;
            }
            break;

        case 6:
            if (!tree.isEmpty())
            {
                cout << "Masukkan pohon yang ingin dicari: ";
                cin >> targetData;

                targetNode = tree.findNode(targetData, currentNode);

                tree.find(targetNode);
            }
            else
            {
                cout << "Tree belum dibuat!" << endl;
            }
            break;

        case 7:
            if (!tree.isEmpty())
            {
                cout << "Preorder traversal: ";
                tree.preOrder(tree.getRoot());
                cout << endl;
            }
            else
            {
                cout << "Tree belum dibuat!" << endl;
            }
            break;

        case 8:
            if (!tree.isEmpty())
            {
                cout << "Inorder traversal: ";
                tree.inOrder(tree.getRoot());
                cout << endl;
            }
            else
            {
                cout << "Tree belum dibuat!" << endl;
            }
            break;

        case 9:
            if (!tree.isEmpty())
            {
                cout << "Postorder traversal: ";
                tree.postOrder(tree.getRoot());
                cout << endl;
            }
            else
            {
                cout << "Tree belum dibuat!" << endl;
            }
            break;

        case 10:
            if (!tree.isEmpty())
            {
                cout << "Masukkan pohon yang ingin di delete sub tree-nya: ";
                cin >> targetData;

                targetNode = tree.findNode(targetData, currentNode);

                tree.deleteSub(targetNode);
            }
            else
            {
                cout << "Tree belum dibuat!" << endl;
            }
            break;

        case 11:
            if (!tree.isEmpty())
            {
                tree.clear();
            }
            else
            {
                cout << "Tree belum dibuat!" << endl;
            }
            break;

        case 12:
            if (!tree.isEmpty())
            {
                tree.characteristic();
            }
            else
            {
                cout << "Tree belum dibuat!" << endl;
            }
            break;

        case 13:
            cout << "Keluar dari program." << endl;
            break;

        default:
            cout << "Pilihan tidak valid. Silakan pilih lagi." << endl;
        }
    } while (choice != 13);

    return 0;
}