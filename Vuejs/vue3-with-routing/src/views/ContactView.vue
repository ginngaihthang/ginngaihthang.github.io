<template>
  <div class="contact">
    <h1 class="bg-danger">This is an Contact page</h1>
    <div class="container">
        <div class="row">
            <div class="col-md-4">
                 Lorem ipsum dolor sit, amet consectetur adipisicing elit. Rerum maxime sapiente quod odio cumque dolore blanditiis necessitatibus explicabo. Unde expedita a at numquam eveniet laudantium ut optio? Possimus, pariatur nam.
            </div>
            <div class="col-md-4">
                 Lorem ipsum dolor sit amet consectetur adipisicing elit. Voluptatum quas dolorum quasi nesciunt temporibus rerum odit consequuntur, nemo facilis ea itaque exercitationem corporis iure ipsa cum odio molestias porro maxime.
            </div>
            <div class="col-md-4">
                 Lorem ipsum dolor sit amet, consectetur adipisicing elit. Laboriosam harum facilis sunt perferendis dignissimos vero? Adipisci sed consequatur doloremque voluptas. Mollitia perferendis rerum nisi dolores, libero enim ipsam. Voluptates, assumenda?
            </div>
        </div>
    </div>

    <div class="container">
         <div class="row">
              <!-- <div class="col-md-3 col-sm-4 col-6 "   >
                    <div class="card" v-for="(meme,index) in memeimg" :key="index">
                         <img :src="meme.url" class="card-img-top" alt="IMg">
                         <div class="card-body">
                              <p class="card-text">{{meme}}</p>
                              <a href="#" class="btn btn-primary">Go somewhere</a>
                          </div>
                    </div>
              </div> -->
              <div class="col-md-3 col-sm-4 col-6 my-3" v-for="meme in memeimg" :key="meme.id">
                    <div class="card h-100 bg-transparent">
                         <div class="card-body ">
                              <p class="card-text text-white">{{meme.name}}</p> 
                         </div>
                         <img :src="meme.url" class="card-img-top h-75" alt="IMG">
                         <router-link :to="{name: 'memedetail',params: {id: meme.id}}" class="btn btn-info">Detail</router-link>
                    </div>
               </div>
         </div>
    </div>
  </div>
</template>

<script>
const axios = require('axios').default;
export default {
     data(){
          return {
               memeimg : "",
          }
     },
     mounted(){
          axios.get('https://api.imgflip.com/get_memes')
               .then(response => {
                    console.log(response)
                    this.memeimg = response.data.data.memes
               })
     }
}
</script>
