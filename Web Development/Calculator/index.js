function result(){
    var exp=document.getElementById("mainInput").value;
    if(/[^0-9]$/.test(exp)){
        document.getElementById("errorDiv").innerHTML="**Please enter a valid expression.";
    }
    else{
        var ans=eval(exp);
        document.getElementById("mainInput").value=ans;
        document.getElementById("errorDiv").innerHTML="";
    }
}

function addInExp(a){
    document.getElementById("mainInput").value+=a;
}

function clearExp(){
    document.getElementById("mainInput").value="";
}