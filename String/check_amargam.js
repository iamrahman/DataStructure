function checkAmargam(str1, str2){
  
  var newstr1 = str1.toLowerCase().split('').sort().join();
  var newstr2 = str2.toLowerCase().split('').sort().join();
  // console.log(newstr1);
  // console.log(newstr2);
  if(newstr1 == newstr2){
    console.log("String is Amargm");
  }
  else{
    console.log("String is Not Amargam");
  }
  
}

checkAmargam("Hello", "lolHe");
checkAmargam("Indias", "sIndis");
