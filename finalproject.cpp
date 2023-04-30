#include<iostream>
#include <list>
#include <stack>
#include <queue>
#include <bits/stdc++.h>
using namespace std;

//=======================Merge sort======================= 
void Merge(int *a, int low, int high, int mid){
int i, j, k, temp[high-low+1];
i = low;
k = 0;
j = mid + 1;
while (i <= mid && j <= high){
if (a[i] < a[j]){
temp[k] = a[i];
k++;
i++;
}
else{
temp[k] = a[j];
k++;
j++;
}
}
while (i <= mid){
temp[k] = a[i];
k++;
i++;
}
while (j <= high){
temp[k] = a[j];
k++;
j++;
}
for (i = low; i <= high; i++){
a[i] = temp[i-low];
}
}
void MergeSort(int *a, int low, int high){
int mid;
if (low < high){
mid=(low+high)/2;
MergeSort(a, low, mid);
MergeSort(a, mid+1, high);
Merge(a, low, high, mid);
}
}
void mergesort()
{
	int n, i;
cout<<"\nEnter the number of data element to be sorted: ";
cin>>n;
int arr[n];
for(i = 0; i < n; i++){
cout<<"Enter element "<<i+1<<": ";
cin>>arr[i]; }

MergeSort(arr, 0, n-1);
cout<<"\nSorted Data: \n ";
for (i = 0; i < n; i++)
 cout<<"\t"<<arr[i];
}
//======================== insertion sort =========================

void insertElement(int arr[],int n,int x,int pos)
{
	for(int i=n;i>=pos;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[pos]=x;
	
}
void insertion(){
	
	int arr[15]={2,4,1,8,5};
	int n=5;
	cout<<"Before insertion ";
	for(int i=0;i<n;i++)
	{cout<<arr[i]<<" ";
	}
	cout<<endl;
	int x=10,pos=2;
	n++;
	cout<<"After insertion ";
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
}
//========================== Quick sort ==================
void swap(int* a, int* b)
{
 int t = *a;
 *a = *b;
 *b = t;
}
int partition(int arr[], int low, int high)
{
 int pivot = arr[high]; 
 int i = (low - 1);
 for (int j = low; j <= high - 1; j++) {
 if (arr[j] < pivot) {
 i++;
 swap(&arr[i], &arr[j]);
 }
 }
 swap(&arr[i + 1], &arr[high]);
 return (i + 1);
}
void quickSort(int arr[], int low, int high)
{
 if (low < high) {
 int pi = partition(arr, low, high);
 quickSort(arr, low, pi - 1);
 quickSort(arr, pi + 1, high);
 }
}
void printArray(int arr[], int size)
{
 int i;
 for (i = 0; i < size; i++)
 cout << arr[i] << " ";
 cout << endl;
}

void quick(){
	int arr[5],i;
cout <<"Enter array elements: \n";
for(int i=0;i<5;i++) {
cin >> arr[i];
}
cout << "Array is full.\n";
 int n = sizeof(arr) / sizeof(arr[0]);
 quickSort(arr, 0, n - 1);
 cout << "Sorted array: \n";
 printArray(arr, n);
}
//======================= Deletion sort ==============
int findelement(int arr[],int n,int key);
int deleteelement(int arr[],int n,int key)
{
	int pos=findelement(arr,n,key);
	if(pos==-1){
		cout<<"element not found ";
		return n;
		
	}
	int i;
	for(int i=pos;i<n;i++)
	arr[i]=arr[i+1];
	return n-1;
}
int findelement(int arr[],int n,int key){
	int i;
	for(int i=0;i<n;i++)
	if(arr[i]==key)
	return -1;
}
void deletion(){

      int i; 
	int arr[]={10,50,30,40,20};
	int n=sizeof(arr)/sizeof(arr[0]);
	int key=30;
	cout<<"array befor deletion\n";
	for(int i=0;i<n;i++)
	cout<<arr[i	]<<" ";
	
	n=deleteelement(arr,n,key);
	cout<<"array after deletion\n ";
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
}
//===================== Maximum ==========================
void maximum(){
	int a[5]={14,81,200,4,3},max;
	max=a[0];
	for(int i=1; i<5; i++){
		if(max<a[i])
		max=a[i];
	}
cout<<max;
}
//=========================minimum==================
void minimum(){
	int a[5]={23,43,45,56,12},min;
	min=a[0];
	for(int i=0; i<5; i++){
		if(min>a[i])
		min=a[i];
	}
	cout<<min;
}
//=========================== Simple Array ===============
void simplearray()
{
	int arr[6]={11,12,13,14,15,16};

    for(int i=0;i<6;i++)
        cout<<arr[i]<<" ";
    
    
    cout<<endl;
}
//======================= Heap Tree ============
void heapify(int arr[], int n, int i) {
int largest = i;
int left = 2 * i + 1;
int right = 2 * i + 2;
if (left < n && arr[left] > arr[largest])
largest = left;
if (right < n && arr[right] > arr[largest])
largest = right;
if (largest != i) {
swap(arr[i], arr[largest]);
heapify(arr, n, largest);
}
}
void heapSort(int arr[], int n) {
for (int i = n / 2 - 1; i >= 0; i--)
heapify(arr, n, i);
for (int i = n - 1; i >= 0; i--) {
swap(arr[0], arr[i]);
heapify(arr, i, 0);
}
}
void rintArray(int arr[], int n) {
for (int i = 0; i < n; ++i)
cout << arr[i] << " ";
cout << "\n";
}

void heap(){
	int arr[] = {1,58,90, 12, 9, 5, 6,7, 10};
int n = sizeof(arr) / sizeof(arr[0]);
cout<<"Array is:\n";
printArray(arr,n);
cout<<"\n\n";
heapSort(arr, n);
cout << "Sorted array is \n";
rintArray(arr, n);
}

//======================multiple array==============
void multiplearray()
{
	int num[3][2]{ {1,2},{4,6},{9,10}};
	int a,b;
	for(a=0;a<4;a++)
	{
		for(b=0;b<4;b++)
		{
			cout<<"element at num["<<a<<"]["<<b<<"]:";
			cout<<num[a][b]<<endl;
		}
	}
}

//======================= Bubble sort ==================
void bubbleSort(int arr[], int n)
{
 int i, j;
 for (i = 0; i < n - 1; i++)
 for (j = 0; j < n - i - 1; j++)
 if (arr[j] > arr[j + 1])
 swap(arr[j], arr[j + 1]);
}
void priArray(int arr[], int size)
{
 int i;
 for (i = 0; i < size; i++)
 cout << arr[i] << " ";
 cout << endl;
}

void bubble(){
	int arr[] = { 5, 1, 4, 2, 8};
 int N = sizeof(arr) / sizeof(arr[0]);
 bubbleSort(arr, N);
 cout << "Sorted array: \n";
 priArray(arr, N);
	
}
//========================adjescent list ==============
	class Graph {
 int numVertices;
 list<int>* adjLists;
 bool* visited;
 public:
 Graph(int vertices);
 void addEdge(int src, int dest);
 void BFS(int startVertex);
};
// Create a graph with given vertices, and maintain an adjacency list
Graph::Graph(int vertices) {
 numVertices = vertices;
 adjLists = new list<int>[vertices];
}
// Add edges to the graph
void Graph::addEdge(int src, int dest) {
 adjLists[src].push_back(dest);
 adjLists[dest].push_back(src);
}
// BFS algorithm
void Graph::BFS(int startVertex) {
 visited = new bool[numVertices];
 for (int i = 0; i < numVertices; i++)
 visited[i] = false;
 list<int> queue;
 visited[startVertex] = true;
 queue.push_back(startVertex);
 list<int>::iterator i;
 while (!queue.empty()) {
 int currVertex = queue.front();
 cout << "Visited " << currVertex << " ";
 queue.pop_front();
 for (i = adjLists[currVertex].begin(); i != adjLists[currVertex].end(); ++i) {
 int adjVertex = *i;
 if (!visited[adjVertex]) {
 visited[adjVertex] = true;
 queue.push_back(adjVertex);
 }
 }
 }
}
void adjsecent(){
	
	Graph g(6);
 g.addEdge(0, 1);
 g.addEdge(0, 2);
 g.addEdge(1, 2);
 g.addEdge(2, 0);
 g.addEdge(2, 3);
 g.addEdge(3, 3);
g.addEdge(2, 4);
g.addEdge(4, 5);
 g.BFS(2);
 cout<<"\nadjcent list:\n{0,1\n0,2\n1,2\n2,0\n2,3\n3,3\n2,4\n4,5} ";
 
}
//====================== BFS =====================
void bfs(){
		Graph g(6);
 g.addEdge(0, 1);
 g.addEdge(0, 2);
 g.addEdge(1, 2);
 g.addEdge(2, 0);
 g.addEdge(2, 3);
 g.addEdge(3, 3);
g.addEdge(2, 4);
g.addEdge(4, 5);
 g.BFS(2);
	
}
//======================= DFS ===========================
 
class Graphh {
  int numVertices;
  list<int> *adjLists;
  bool *visited;

   public:
  Graphh(int V);
  void addEdge(int src, int dest);
  void DFS(int vertex);
};

// Initialize graph
Graphh::Graphh(int vertices) {
  numVertices = vertices;
  adjLists = new list<int>[vertices];
  visited = new bool[vertices];
}

// Add edges
void Graphh::addEdge(int src, int dest) {
  adjLists[src].push_front(dest);
}

// DFS algorithm
void Graphh::DFS(int vertex) {
  visited[vertex] = true;
  list<int> adjList = adjLists[vertex];

  cout << vertex << " ";

  list<int>::iterator i;
  for (i = adjList.begin(); i != adjList.end(); ++i)
    if (!visited[*i])
      DFS(*i);
}
void dfs(){
Graphh g(8);
  g.addEdge(0, 1);
  g.addEdge(0, 2);
  g.addEdge(1, 2);
  g.addEdge(2, 3);
  
  g.DFS(2);

}
//===================== link list ========================
struct Node {
int data;
struct Node *next;
};
struct Node* head = NULL;
void insert(int new_data) {
struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
new_node->data = new_data;
new_node->next = head;
head = new_node;
}
void display() {
struct Node* ptr;
ptr = head;
while (ptr != NULL) {
cout<< ptr->data <<" ";
ptr = ptr->next;
}
}
void singlylinklist()
{
	insert(3);
    insert(1);
    insert(7);
    insert(2);
    insert(9);
    insert(23);
    insert(34);
    insert(54);
    cout<<"The linked list is: ";
    display();
	
}
//====================== Bucket =========================
int findMax(int arr[], int n)
{
    int i,max=arr[0],cnt=0;
    for(i=1;i<n;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    while(max>0)
    {
        cnt++;
        max=max/10;
    }
   
    return cnt;
}

void bucketSort(int arr[],int *bucket[],int n)
{
    static int i,j[10],k,l,d=1;
    int c;
    c=findMax(arr,n);
  
    for(int m=0;m<c;m++)
    {
        for(i=0;i<10;i++)
            j[i]=0;
        for(i=0;i<n;i++)
        {
            k=(arr[i]/d)%10;
            bucket[k][j[k]]=arr[i];
            j[k]++;
        }
     
        l=0;
        for(i=0;i<10;i++)
        {
            for(k=0;k<j[i];k++)
            {
                arr[l]=bucket[i][k];
                l++;
            }
        }
        d*=10;
    }
}
void bucket(){
	int n,*arr,i;
    int *bucket[10];
    cout<<"Enter no of element : ";
    cin>>n;
    arr=new int[n+1];
    for(i=0;i<10;i++)
        bucket[i]=new int[n];
    cout<<"Enter array element : ";
    for(i=0;i<n;i++)
        cin>>arr[i];
    bucketSort(arr,bucket,n);
   
    cout<<"Sorted array : ";
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
}

//========================= Shell sort ==============================
void shellSort(int arr[], int n) {
    // Start with a large gap, then reduce it until gap = 1
    for (int gap = n/2; gap > 0; gap /= 2) {
        // Perform insertion sort on subarrays of size gap
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}
void shell(){
	int arr[] = { 64, 25, 12, 22, 11 };
    cout<<"our array is : 64 25 12 22 11\n";
    int n = sizeof(arr) / sizeof(arr[0]);

    shellSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

}

//=========================== Double linked list ===================

class Nod {
public:
    int value;
    Nod* prev; // new
    Nod* next;
};
void doublelinkedlist(){
	
	Nod* head;
    Nod* one = NULL;
    Nod* two = NULL;
    Nod* three = NULL;
    Nod* four = NULL;
    Nod* five = NULL;
    Nod* six = NULL;
    one = new Nod();
    two = new Nod();
    three = new Nod();
    four = new Nod();
    five = new Nod();
    six = new Nod();
    one->value = 1;
    two->value = 2;
    three->value = 3;
    four->value = 4;
    five->value = 5;
    six->value = 6;
    one->prev = NULL; // new
    one->next = two;
    two->prev = one; // new
    two->next = three;
    three->prev = two; // new
    three->next = four;
    four->prev = three; // new
    four->next = five;
    five->prev = four; // new
    five->next = six;
    six->prev = five; // new
    six->next = NULL;
    head = one;
    while (head != NULL) {
        cout << head->value<<"\n";
        head = head->next;
    }
}
//========================== Circular linked list ===================
class Nodex {
   public:
   int value;
   Nodex* next;
};

void circular(){
	Nodex* head;
   Nodex* one = NULL;
	Nodex* two = NULL;
	Nodex* three = NULL;
	Nodex* four = NULL;
	Nodex* five = NULL;
	Nodex* six = NULL;
	one = new Nodex();
	two = new Nodex();
	three = new Nodex();
	four = new Nodex();
	five = new Nodex();
	six = new Nodex();
	one->value = 1;
	two->value = 2;
	three->value = 3;
	four->value =4;
	five->value=5;
	six->value=6;
	one->next = two;
	two->next = three;
	three->next = four;
	four-> next=five;
	five->next=six;
	six->next=one;
	head = one;
		while (head != NULL) {
	cout << head->value<<"\n";
	head = head->next;
}
}

//========================= Double Circular linked list =============

class Nody {
public:
    int value;
    Nody* prev; // new
    Nody* next;
};
void doublecircular(){
	Nody* head;
    Nody* one = NULL;
    Nody* two = NULL;
    Nody* three = NULL;
    Nody* four = NULL;
    Nody* five = NULL;
    Nody* six = NULL;
    one = new Nody();
    two = new Nody();
    three = new Nody();
    four = new Nody();
    five = new Nody();
    six = new Nody();
    one->value = 1;
    two->value = 2;
    three->value = 3;
    four->value = 4;
    five->value = 5;
    six->value = 6;
    one->prev = NULL; // new
    one->next = two;
    two->prev = one; // new
    two->next = three;
    three->prev = two; // new
    three->next = four;
    four->prev = three; // new
    four->next = five;
    five->prev = four; // new
    five->next = six;
    six->prev = five; // new
    six->next = one;
    head = one;
    while (head != NULL) {
        cout << head->value<<"\n";
        head = head->next;
    }
}

//========================= AVL Tree =============================
class Nodes {
   public:
  int key;
  Nodes *left;
  Nodes *right;
  int height;
};
int max(int a, int b);
// Calculate height
int height(Nodes *N) {
  if (N == NULL)
    return 0;
  return N->height;
}

int max(int a, int b) {
  return (a > b) ? a : b;
}

// New node creation
Nodes *newNode(int key) {
  Nodes *nodes = new Nodes();
  nodes->key = key;
  nodes->left = NULL;
  nodes->right = NULL;
  nodes->height = 1;
  return (nodes);
}

// Rotate right
Nodes *rightRotate(Nodes *y) {
  Nodes *x = y->left;
  Nodes *T2 = x->right;
  x->right = y;
  y->left = T2;
  y->height = max(height(y->left),
          height(y->right)) +
        1;
  x->height = max(height(x->left),
          height(x->right)) +
        1;
  return x;
}

// Rotate left
Nodes *leftRotate(Nodes *x) {
  Nodes *y = x->right;
  Nodes *T2 = y->left;
  y->left = x;
  x->right = T2;
  x->height = max(height(x->left),
          height(x->right)) +
        1;
  y->height = max(height(y->left),
          height(y->right)) +
        1;
  return y;
}

// Get the balance factor of each node
int getBalanceFactor(Nodes *N) {
  if (N == NULL)
    return 0;
  return height(N->left) -
       height(N->right);
}

// Insert a node
Nodes *insertNode(Nodes *nodes, int key) {
  // Find the correct postion and insert the node
  if (nodes == NULL)
    return (newNode(key));
  if (key < nodes->key)
    nodes->left = insertNode(nodes->left, key);
  else if (key > nodes->key)
    nodes->right = insertNode(nodes->right, key);
  else
    return nodes;

  // Update the balance factor of each node and
  // balance the tree
  nodes->height = 1 + max(height(nodes->left),
               height(nodes->right));
  int balanceFactor = getBalanceFactor(nodes);
  if (balanceFactor > 1) {
    if (key < nodes->left->key) {
      return rightRotate(nodes);
    } else if (key > nodes->left->key) {
      nodes->left = leftRotate(nodes->left);
      return rightRotate(nodes);
    }
  }
  if (balanceFactor < -1) {
    if (key > nodes->right->key) {
      return leftRotate(nodes);
    } else if (key < nodes->right->key) {
      nodes->right = rightRotate(nodes->right);
      return leftRotate(nodes);
    }
  }
  return nodes;
}

// Node with minimum value
Nodes *nodeWithMimumValue(Nodes *nodes) {
  Nodes *current = nodes;
  while (current->left != NULL)
    current = current->left;
  return current;
}

// Delete a node
Nodes *deleteNode(Nodes *root, int key) {
  // Find the node and delete it
  if (root == NULL)
    return root;
  if (key < root->key)
    root->left = deleteNode(root->left, key);
  else if (key > root->key)
    root->right = deleteNode(root->right, key);
  else {
    if ((root->left == NULL) ||
      (root->right == NULL)) {
      Nodes *temp = root->left ? root->left : root->right;
      if (temp == NULL) {
        temp = root;
        root = NULL;
      } else
        *root = *temp;
      free(temp);
    } else {
      Nodes *temp = nodeWithMimumValue(root->right);
      root->key = temp->key;
      root->right = deleteNode(root->right,
                   temp->key);
    }
  }

  if (root == NULL)
    return root;

  // Update the balance factor of each node and
  // balance the tree
  root->height = 1 + max(height(root->left),
               height(root->right));
  int balanceFactor = getBalanceFactor(root);
  if (balanceFactor > 1) {
    if (getBalanceFactor(root->left) >= 0) {
      return rightRotate(root);
    } else {
      root->left = leftRotate(root->left);
      return rightRotate(root);
    }
  }
  if (balanceFactor < -1) {
    if (getBalanceFactor(root->right) <= 0) {
      return leftRotate(root);
    } else {
      root->right = rightRotate(root->right);
      return leftRotate(root);
    }
  }
  return root;
}

// Print the tree
void printTree(Nodes *root, string indent, bool last) {
  if (root != NULL) 
   {
    cout << indent;
    if (last) {
      cout << "R----";
      indent += "   ";
    } else {
      cout << "L----";
      indent += "|  ";
    }
    cout << root->key << endl;
    printTree(root->left, indent, false);
    printTree(root->right, indent, true);
  }
}

void avltree(){
	Nodes *root = NULL;
  root = insertNode(root, 33);
  root = insertNode(root, 13);
  root = insertNode(root, 53);
  root = insertNode(root, 9);
  root = insertNode(root, 21);
  root = insertNode(root, 61);
  root = insertNode(root, 8);
  root = insertNode(root, 11);
  printTree(root, "", true);
  root = deleteNode(root, 13);
  cout << "After deleting " << endl;
  printTree(root, "", true);
}
//======================= INORDER ===========================
struct No {
int data;
struct No *left, *right;
No(int data) {
this->data = data;
left = right = NULL;
}
};

void inorderTraversal(struct No* no) {
if (no == NULL)
return;
inorderTraversal(no->left);
cout << no->data << "->";
inorderTraversal(no->right);
}
void inorder(){
	struct No* root = new No(1);
root->left = new No(12);
root->right = new No(9);
root->left->left = new No(5);
root->left->right = new No(6);
cout << "Inorder traversal ";
inorderTraversal(root);
}
//======================== LEVEL ORDER ======================
class nodeee {
public:
int data;
nodeee *left, *right;
};
void printCurrentLevel(nodeee* root, int level);
int height(nodeee* nodeee);
nodeee* newNodeee(int data);

void printGivenLevel(struct nodeee* root, int level)
{ if (root == NULL)
return;
if (level == 1)
printf("%d ", root->data);
else if (level > 1) {
printGivenLevel(root->left, level - 1);
printGivenLevel(root->right, level - 1);
}
}
void printLevelOrder(struct nodeee* root)
{ int h = height(root);
int i;
for (i = 1; i <= h; i++) {
printGivenLevel(root, i);
printf("\n");
}
}
int height(nodeee* nodeee)
{ if (nodeee == NULL)
return 0;
else {

int lheight = height(nodeee->left);
int rheight = height(nodeee->right);

if (lheight > rheight) {
return (lheight + 1);
}
else {
return (rheight + 1);
}
}
}

nodeee* newNodeee(int data)
{ nodeee* Nodeee = new nodeee();
Nodeee->data = data;
Nodeee->left = NULL;
Nodeee->right = NULL;
return (Nodeee);
}
void levelorder(){
	nodeee* root = newNodeee(1);
root->left = newNodeee(2);
root->right = newNodeee(3);
root->left->left = newNodeee(4);
root->left->right = newNodeee(5);
cout << "Level Order traversal of binary tree is \n";
printLevelOrder(root);
}
//======================== PRE ORDER ===========================
struct Nodez {
 int data;
 struct Nodez *left, *right;
 Nodez(int data) {
 this->data = data;
 left = right = NULL;
 }
};

void preorderTraversal(struct Nodez* nodez) {
 if (nodez == NULL)
 return;
 cout << nodez->data << " - ";
 preorderTraversal(nodez->left);
 preorderTraversal(nodez->right);
}
void preorder(){
	struct Nodez* root = new Nodez(1);
 root->left = new Nodez(12);
 root->right = new Nodez(20);
 root->left->left = new Nodez(5);
 root->left->right = new Nodez(6);
 root->right->left = new Nodez(50);
 root->right->right = new Nodez(60);
 root->left->left->right = new Nodez(7);
 root->left->right->right = new Nodez(4);
 root->left->left->left = new Nodez(17);
 root->left->right->left = new Nodez(14);
 cout << "\n\n\nPreorder traversal \n";
 preorderTraversal(root);
}
//===================== POST ORDER =========================
struct Nodea
{
int data;
Nodea *left;
Nodea *right;
};
Nodea *getNewNodea(int data)
{
Nodea *temp = new Nodea;
temp->data = data;
temp->left = NULL;
temp->right = NULL;
return temp;
}
void postorder(Nodea *root)
{
if(!root)
return;
postorder(root->left);
postorder(root->right);
cout<<root->data<<" ";
}
void postorder(){
	Nodea *root = getNewNodea(1);
root->left = getNewNodea(2);
root->right = getNewNodea(3);
root->left->left = getNewNodea(4);
root->left->right = getNewNodea(5);
root->right->left = getNewNodea(6);
root->right->right = getNewNodea(16);
postorder(root);
}

//=========================== BINARY SEARCH TREE ====================

class BST {
	int data;
	BST *left, *right;

public:
	// Default constructor.
	BST();

	// Parameterized constructor.
	BST(int);

	// Insert function.
	BST* Insert(BST*, int);

	// Inorder traversal.
	void Inorder(BST*);
};

// Default Constructor definition.
BST ::BST()
	: data(0)
	, left(NULL)
	, right(NULL)
{
}

// Parameterized Constructor definition.
BST ::BST(int value)
{
	data = value;
	left = right = NULL;
}

// Insert function definition.
BST* BST ::Insert(BST* root, int value)
{
	if (!root) {
		// Insert the first node, if root is NULL.
		return new BST(value);
	}

	// Insert data.
	if (value > root->data) {
		// Insert right node data, if the 'value'
		// to be inserted is greater than 'root' node data.

		// Process right nodes.
		root->right = Insert(root->right, value);
	}
	else if (value < root->data){
		// Insert left node data, if the 'value'
		// to be inserted is smaller than 'root' node data.

		// Process left nodes.
		root->left = Insert(root->left, value);
	}

	// Return 'root' node, after insertion.
	return root;
}

// Inorder traversal function.
// This gives data in sorted order.
void BST ::Inorder(BST* root)
{
	if (!root) {
		return;
	}
	Inorder(root->left);
	cout << root->data << endl;
	Inorder(root->right);
}
void binarysearch(){
	
	BST b, *root = NULL;
	root = b.Insert(root, 50);
	b.Insert(root, 30);
	b.Insert(root, 20);
	b.Insert(root, 40);
	b.Insert(root, 70);
	b.Insert(root, 60);
	b.Insert(root, 80);

	b.Inorder(root);
}
//========================= HASH TABLE ============================
using namespace std;

class HashTable
{
  int capacity;
  list<int> *table;

public:
  HashTable(int V);
  void insertItem(int key, int data);
  void deleteItem(int key);

  int checkPrime(int n)
  {
  int i;
  if (n == 1 || n == 0)
  {
    return 0;
  }
  for (i = 2; i < n / 2; i++)
  {
    if (n % i == 0)
    {
    return 0;
    }
  }
  return 1;
  }
  int getPrime(int n)
  {
  if (n % 2 == 0)
  {
    n++;
  }
  while (!checkPrime(n))
  {
    n += 2;
  }
  return n;
  }

  int hashFunction(int key)
  {
  return (key % capacity);
  }
  void displayHash();
};
HashTable::HashTable(int c)
{
  int size = getPrime(c);
  this->capacity = size;
  table = new list<int>[capacity];
}
void HashTable::insertItem(int key, int data)
{
  int index = hashFunction(key);
  table[index].push_back(data);
}

void HashTable::deleteItem(int key)
{
  int index = hashFunction(key);

  list<int>::iterator i;
  for (i = table[index].begin();
   i != table[index].end(); i++)
  {
  if (*i == key)
    break;
  }

  if (i != table[index].end())
  table[index].erase(i);
}

void HashTable::displayHash()
{
  for (int i = 0; i < capacity; i++)
  {
  cout << "table[" << i << "]";
  for (auto x : table[i])
    cout << " --> " << x;
  cout << endl;
  }
}
void hashtable(){
	int key[] = {231, 321, 212, 321, 433, 262};
  int data[] = {123, 432, 523, 43, 423, 111};
  int size = sizeof(key) / sizeof(key[0]);

  HashTable h(size);

  for (int i = 0; i < size; i++)
  h.insertItem(key[i], data[i]);

  h.deleteItem(12);
  h.displayHash();
}
//========================= M_way tree ==========================
class TreeNodem {
  int *keys;
  int t;
  TreeNodem **C;
  int n;
  bool leaf;

   public:
  TreeNodem(int temp, bool bool_leaf);

  void insertNonFull(int k);
  void splitChild(int i, TreeNodem *y);
  void traverse();

  TreeNodem *search(int k);

  friend class BTree;
};

class BTree {
  TreeNodem *root;
  int t;

   public:
  BTree(int temp) {
    root = NULL;
    t = temp;
  }

  void traverse() {
    if (root != NULL)
      root->traverse();
  }

  TreeNodem *search(int k) {
    return (root == NULL) ? NULL : root->search(k);
  }

  void insert(int k);
};

TreeNodem::TreeNodem(int t1, bool leaf1) {
  t = t1;
  leaf = leaf1;

  keys = new int[2 * t - 1];
  C = new TreeNodem *[2 * t];

  n = 0;
}

void TreeNodem::traverse() {
  int i;
  for (i = 0; i < n; i++) {
    if (leaf == false)
      C[i]->traverse();
    cout << " " << keys[i];
  }

  if (leaf == false)
    C[i]->traverse();
}

TreeNodem *TreeNodem::search(int k) {
  int i = 0;
  while (i < n && k > keys[i])
    i++;

  if (keys[i] == k)
    return this;

  if (leaf == true)
    return NULL;

  return C[i]->search(k);
}

void BTree::insert(int k) {
  if (root == NULL) {
    root = new TreeNodem(t, true);
    root->keys[0] = k;
    root->n = 1;
  } else {
    if (root->n == 2 * t - 1) {
      TreeNodem *s = new TreeNodem(t, false);

      s->C[0] = root;

      s->splitChild(0, root);

      int i = 0;
      if (s->keys[0] < k)
        i++;
      s->C[i]->insertNonFull(k);

      root = s;
    } else
      root->insertNonFull(k);
  }
}

void TreeNodem::insertNonFull(int k) {
  int i = n - 1;

  if (leaf == true) {
    while (i >= 0 && keys[i] > k) {
      keys[i + 1] = keys[i];
      i--;
    }

    keys[i + 1] = k;
    n = n + 1;
  } else {
    while (i >= 0 && keys[i] > k)
      i--;

    if (C[i + 1]->n == 2 * t - 1) {
      splitChild(i + 1, C[i + 1]);

      if (keys[i + 1] < k)
        i++;
    }
    C[i + 1]->insertNonFull(k);
  }
}

void TreeNodem::splitChild(int i, TreeNodem *y) {
  TreeNodem *z = new TreeNodem(y->t, y->leaf);
  z->n = t - 1;

  for (int j = 0; j < t - 1; j++)
    z->keys[j] = y->keys[j + t];

  if (y->leaf == false) {
    for (int j = 0; j < t; j++)
      z->C[j] = y->C[j + t];
  }

  y->n = t - 1;
  for (int j = n; j >= i + 1; j--)
    C[j + 1] = C[j];

  C[i + 1] = z;

  for (int j = n - 1; j >= i; j--)
    keys[j + 1] = keys[j];

  keys[i] = y->keys[t - 1];
  n = n + 1;
}
void mwaytree(){
	BTree t(3);
  t.insert(8);
  t.insert(9);
  t.insert(10);
  t.insert(11);
  t.insert(15);
  t.insert(16);
  t.insert(17);
  t.insert(18);
  t.insert(20);
  t.insert(23);

  cout << "The nodes B-tree are: ";
  t.traverse();

  int k;
  cout<<"\nEnter value to find:\n ";
  cin>>k;
  (t.search(k) != NULL) ? cout << endl
                 << k << " is found"
              : cout << endl
                 << k << " is not Found";

  
}

//========================= RADIX SORT ===============================

int getMax(int array[], int n) {
  int max = array[0];
  for (int i = 1; i < n; i++)
    if (array[i] > max)
      max = array[i];
  return max;
}

// Using counting sort to sort the elements in the basis of significant places
void countingSort(int array[], int size, int place) {
  const int max = 10;
  int output[size];
  int count[max];

  for (int i = 0; i < max; ++i)
    count[i] = 0;

  // Calculate count of elements
  for (int i = 0; i < size; i++)
    count[(array[i] / place) % 10]++;

  // Calculate cumulative count
  for (int i = 1; i < max; i++)
    count[i] += count[i - 1];

  // Place the elements in sorted order
  for (int i = size - 1; i >= 0; i--) {
    output[count[(array[i] / place) % 10] - 1] = array[i];
    count[(array[i] / place) % 10]--;
  }

  for (int i = 0; i < size; i++)
    array[i] = output[i];
}

// Main function to implement radix sort
void radixsort(int array[], int size) {
  // Get maximum element
  int max = getMax(array, size);

  // Apply counting sort to sort elements based on place value.
  for (int place = 1; max / place > 0; place *= 10)
    countingSort(array, size, place);
}

// Print an array
void printAr(int array[], int size) {
  int i;
  for (i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}
//driver code
void radix(){
	int array[] = {121, 432, 564, 23, 1, 45, 788};
  int n = sizeof(array) / sizeof(array[0]);
  radixsort(array, n);
  printAr(array, n);
}
//======================= Starting point of program ================

int main(){

	int option;
	cout<<"\twellcome\t\n";
	cout<<"choose the algoritm you want to run\n";
	cout<<"Enter 1 for sorting\n";
	cout<<"Enter 2 for graph \n";
	cout<<"Enter 3 for tree\n";
	cout<<"Enter 4 for hash table \n";
	cout<<"Enter 5 for link list\n";
	cout<<"Enter 6 for stack\n";
	cout<<"Enter 7 for queu\n";
	cout<<"Enter 8 for array\n";
	cout<<"Enter 9 for M-way Tree \n";
	cout<<"Enter the option :\n";
	
	cin>>option;
	if (option==1){
	
	
	
		system("cls");
		int chose;
		cout<<"\tchose the sort you want to run \n";
		cout<<"enter 1 for merge sort\n";
		cout<<"Enter 2 for insertion sort\n";
		cout<<"Enter 3 for quick sort\n";
		cout<<"Enter 4 for deletion sort\n";
		cout<<"Enter 5 for selection sort\n";
		cout<<"Enter 6 for bubble sort \n";
		cout<<"Enter 7 for heap sort\n";
		cout<<"Enter 8 for bucket sort\n";
		cout<<"Enter 9 for shell sort\n";
		cout<<"Enter 10 for radix sort\n";
		cout<<"enter the chose which sort you run :\n";
		cin>>chose;
		switch(chose)
		{
		system("cls");
			case 1:
			cout<<"\t MERGE SORT \n";
                  mergesort();
			break;
			
				case 2:
			  cout<<"\t Insertion SORT \n";
	               insertion();
	       break;
			  
				case 3:
			cout<<"\t Quick SORT \n";
                 quick();
			
			break;
				case 4:
			cout<<"\t Deletion \n";
			   deletion();
			 
			break;
				case 5:
			cout<<"\t Selection sort \n";
		    
			break;
				case 6:
			cout<<"\t Bubble sort \n";
			   bubble();
			break;
			
				case 7:
			cout<<"\t Heap sort \n";
			  heap();
			break;
				case 8:
			cout<<"\t Bucket sort \n";
			bucket();
			break;
				case 9:
			cout<<"\t Shell sort \n";
		    shell();
			break;
				case 10:
			cout<<"\t Radix sort \n";
			radix();
			break;
		default:
			cout<<"Invalid\n";
			
		
	}}
	else if(option==2){
		system("cls");
		cout<<"\t\t GRAPH \n";
		char input;
		cout<<"chose the graph you want to run\n";
		cout<<"Enter A for DFS path\n";
		cout<<"Enter B for adjescent list\n";
		cout<<"Enter C for BFS \n";
		cout<<"Enter input character which graph you want to run :\n";
		cin>>input;
		switch(input)
		{
			case 'A':
				cout<<" \t DFS  \n";
				dfs();
			break;
			
			case 'B':
				cout<<"\t Adjescent list \n";
			      adjsecent();
			break;
			case 'C':
				cout<<"\t BFS \n";
				bfs();
				break;
			
			default:
				cout<<"Invalid\n";
			
		}
		
	}
	else if( option==3){
		int tree;
		cout<<"\t TREES\n";
		cout<<"chose the tree you want to run\n";
		cout<<"Enter 20 for binary tree\n";
		cout<<"Enter 21 for binary search tree\n";
		cout<<"Enter 22 for AVL tree\n";
		cout<<"enter the tree value which tree you want to run :\n";
		cin>>tree;
		switch(tree)
		{
		case 20:
			int option;
		cout<<"\tBinary tree \n";
		cout<<"enter 1 for BFS \n";
		cout<<"Enter 2 for DFS \n";
		cout<<"Enter 3 for INORDER \n";
		cout<<"Enter 4 for PERORDER\n";
		cout<<"Enter 5 for POSTORDER\n";
		cout<<"Enter 6 for LEVEL ORDER\n";
		cin>>option;
		switch(option){
			case 1:
				bfs();
				break;
				case 2:
					dfs();
					break;
					case 3:
						inorder();
						break;
						case 4:
							preorder();
							break;
							case 5:
								postorder();
								break;
								case 6:
									levelorder();
									break;
		}
		break;
		case 21:
		cout<<"\tBinary search tree \n";
		binarysearch();
		break;
		case 22:
		cout<<"\t AVL tree \n ";
		avltree();
		break;
		default:
			cout<<"Invalid option";
		}	
	}
	else if(option==4)
	{
		cout<<"\t Hash table\n";
		hashtable();
	}
else if(option==5)
	{ int opt;
		cout<<"\t Link list\n";
		cout<<"Enter 1 for Singly linked list \n";
		cout<<"Enter 2 for Double linked list\n";
		cout<<"Enter 3 for Circular linked list\n";
		cout<<"Enter 4 for Double Circular linked list\n";
		cout<<"Enter the option you want to run the code :";
		cin>>opt;
		switch(opt){
		case 1:
        singlylinklist();
        break;
        case 2:
        	doublelinkedlist();
        	break;
        	case 3:
       	    circular();
        	break;
        	case 4:
        		doublecircular();
        		break;
}
	}
	else if(option==6)
	{
		cout<<"\t Stack \n";
		stack<string> animals;
animals.push("Cat");
animals.push("Dog");
animals.push("lion");
animals.push("zebra");
cout << "stack: ";
while(!animals.empty()) {
cout << animals.top() << ", ";
animals.pop(); }
cout << endl;
		
	}
else if(option==7)
	{
		cout<<"\t Queue  \n";
		
		queue<string> animals;
animals.push("Cat");
animals.push("Dog");
animals.push("lion");
animals.push("zebra");
cout << "Queue: ";
while(!animals.empty()) {
cout << animals.front() << ", ";
animals.pop(); }
cout << endl;
	}
	else if(option==8)
	{   int array;
		cout<<"\t Array \n";
		cout<<"Enter 58 for simple Array\n";
		cout<<"Enter 59 for multidimensional array\n";
		cout<<"Enter 60 for maximum\n";
		cout<<"Enter 61 for minmum\n";
		cin>>array;
		switch(array){
		case 58:
		simplearray();
		break;
		case 59:
	    multiplearray();
		break;
		case 60:
		maximum();
		break;
		case 61:
		minimum();	
		break;
		default:
			cout<<"Invalid option";
		
	}
	}
	else if(option==9)
	{
		cout<<"\t M-way Tree \n";
		
			mwaytree();	
	}	
	else
	{
		cout<<"invalid";	}
}
