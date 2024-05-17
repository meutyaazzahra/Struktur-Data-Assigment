/// Nama  : Meutya Azzahra Efendi
/// Nim   : 2311102166

#include <iostream>

using namespace std;

struct Mahasiswa {
  string nama;
  string nim;
};

struct Node {
  Mahasiswa data;
  Node* next;
};

Node* front = NULL;
Node* back = NULL;

bool isEmpty() {
  return front == NULL;
}

void enqueueAntrian(Mahasiswa data) {
  Node* newNode = new Node;
  newNode->data = data;
  newNode->next = NULL;

  if (isEmpty()) {
    front = back = newNode;
  } else {
    back->next = newNode;
    back = newNode;
  }
}

void dequeueAntrian() {
  if (isEmpty()) {
    cout << "Antrian kosong" << endl;
  } else {
    Node* temp = front;
    front = front->next;
    delete temp;
    if (front == NULL) {
      back = NULL;
    }
  }
}

int countQueue() {
  int count = 0;
  Node* current = front;
  while (current != NULL) {
    count++;
    current = current->next;
  }
  return count;
}

void clearQueue() {
  while (front != NULL) {
    dequeueAntrian();
  }
}

void viewQueue() {
  cout << "Data antrian mahasiswa: " << endl;
  Node* current = front;
  int i = 1;
  while (current != NULL) {
    cout << i << ". Nama: " << current->data.nama << ", NIM: " << current->data.nim << endl;
    current = current->next;
    i++;
  }
}

int main() {
  Mahasiswa mhs1 = {"Azka", "2311110049"};
  Mahasiswa mhs2 = {"Kumui", "2311110149"};
  enqueueAntrian(mhs1);
  enqueueAntrian(mhs2);
  viewQueue();
  cout << "Jumlah antrian = " << countQueue() << endl;
  dequeueAntrian();
  viewQueue();
  cout << "Jumlah antrian = " << countQueue() << endl;
  clearQueue();
  viewQueue();
  cout << "Jumlah antrian = " << countQueue() << endl;

  return 0;
}