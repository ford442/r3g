#include<stdio.h>
#include<stdlib.h>
#include<emscripten.h>
EM_JS(void,ma,(),{
// let W=new WebAssembly.Memory({initial:3});
// let wasmbuff=new Uint8Array(W.buffer,0,8);
let r3g=Module.cwrap('r3g','number',['number','array','number']);
let derp=[1,1,1,1,1,1,1,1];
let derp2=[5,5,777,22,22,2,2,0];
let hhh=window.innerHeight;
let www=window.innerWidth;
var i,tstr,tsti,c;
var canvas=document.getElementById('rcanvas');
var ctx = canvas.getContext('2d');
setInterval(function(){
let rgb1;
for(c=0;c<555;c++){
var rgb2;
rgb1=Math.floor(Math.random(255));
for(i=0;i<8;i++){
rgb2=Math.random(255);
setTimeout(function(){
tstr=i*10;
tsti=i*60;
derp=[tsti,tstr,tsti,tstr,tsti,tstr,tsti,tstr];
// wasmbuff.set(new Uint8ClampedArray(derp),0);
var llm=Math.random(111);
llm=llm*10000;
llmm=llm/2;
llm=Math.floor(llm);
llmm=Math.floor(llmm);
llm=llm/10000;
llmv=[llm,llmm];
var tx=r3g(i,derp,llmv);
var tx3=r3g(i,derp2,llmv);
const io=300+c;
ctx.fillStyle="rgb("+rgb1+",77,44)";
ctx.fillRect(tx, 300, 55, 100);
ctx.fillStyle="rgb("+rgb2+",77,44)";
ctx.fillRect(tx, 275, 222, 100);
ctx.clearRect(tx, 300, tx, 100);
ctx.fillStyle="rgb(122,"+tx3+",44)";
ctx.fillRect(0, tx, tx, 100);
ctx.clearRect(25, tx3, 66, 25);
canvas.style.top=Math.floor((hhh*.22)+(Math.random(333)));
canvas.style.left=Math.floor((www*.55)+(Math.random(250)));
document.getElementById('disp').style.color="rgb("+rgb1+",77,44)";
document.getElementById('disp').innerHTML=tx;
ctx.font = "88px Arial";
ctx.clearRect(50, 40, 200, 200);
var gg=c+i;
ctx.fillText(gg, 100, 40);
},1);
}};
ctx.clearRect(0, 0, 700, 700);
},555);
});
int r3g(int rr,register char ara[8],register float ch[2]){
int ll=ara[rr]+(rr*10);
ara[rr]=ll+ch[1];
return ara[rr];
}
int main()
{
ma();
}
