// ########################################   Using JavaScript  (Quit Simple) #############################################

function findSecoundLargest(A, size){

  var A = A.sort();
  console.log(A[size-2]);
}

var A = [5,6,3,1,2,4];
var size = A.length;
findSecoundLargest(A, size);


// ##################    Algorithum     ###########################

// 1. Find the Size of the Array
// 2. Sort the Array in Assending order
// 3. Print the Last secound element whose index will be (length-2)

