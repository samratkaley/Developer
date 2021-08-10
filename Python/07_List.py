 #         list Declaration:-
list1 = ["Samrat","Omkar",50,315,500];
print (list1);

list2 = [1,2,3,4,5,10];

list3 = [9,8,6]

list4 = list1 + list2;  # Concatenate two list

print (list4);

print (list1[2:4]);     # print Range list

print (list1[2:3]+list2[4:5]); #Concatinating two number from range

print (list1[2]+list2[3]); #  Adding two numbers

print (list1[-1]); # Print last element of the list

print (len(list1)); # Length of the list

list1.append(50);     # append function
print (list1);

print (list1.count(50));  # total count of specified element

list2.extend(list3);  #  Add or combine two list 
print (list2);

print (list1.index("Omkar"));  # Index posotion of element

print (list2.pop());  # remove element from last position
print (list2);

print (list2.remove(10)); #  Remove the element by passing value
print (list2);

list2.reverse(); #  Reverse the order of the element
print (list2);

list2.sort();  # Sort all the elements 
print (list2);
