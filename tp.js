
const coffelist=document.getElementById('cafe-list');
const form=document.getElementById('add-cafe-form');
var c=0;
function addContent(doc,docd){
    var li=document.createElement('li');
    var name=document.createElement('span');
    var place=document.createElement('span');
    
    li.setAttribute('data-id',docd.id);
    name.textContent = doc.name;
    place.textContent = doc.place;

    li.appendChild(name);
    li.appendChild(place);

    coffelist.appendChild(li);
}

db.collection('coffeshop').get()
.then((snapshot)=>{
    snapshot.forEach(doc => {
        addContent(doc.data(),doc);
        //console.log(doc.data());
    });
});

form.addEventListener('submit',(e)=>{
    e.preventDefault();
    var data = {
        name:form.cname.value,
        place:form.place.value,
    }
    db.collection('coffeshop').add(data);
    addContent(data);
    form.place.value='';
    form.cname.value='';
});
