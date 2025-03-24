let btn= document.querySelector("button");

let div= document.querySelector("div")

let h1= document.querySelector("h1");

let h2=document.querySelector("h2");

btn.addEventListener("click",()=>{
    console.log("Lets start the game");
    h2.innerHTML="Game was start";
    h1.style.color="blue"
})

btn.addEventListener("hover", ()=>{
    div.color="white";
})



