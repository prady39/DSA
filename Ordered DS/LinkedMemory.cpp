// Header File- List.h

#pragma once

template <typename T>
	class List {
		public:
			const T & operator[](unsigned index);  // & operator is C++'s syntax to access the element of the list at that particular index. So if we create a list- List<int> l; l[0]= so l[0] is going to call that function.
			void insertAtFront(const T & data);

		private:
			class ListNode {
				public: 
					const T & data;
					ListNode *next;
					ListNode(const T & data) : data(data), next(nullptr) {}
			};

		ListNode *head_;	
	};

// Executable- List.cpp

template <typename T>
const T & List<T> :: operator[](unsigned index) {
	ListNode *thru = head_;

	while (index > 0 && thru->next != nullptr) {
		thru = thru->next;
		index--;
	}

	return thru->data;
}