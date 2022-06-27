<template>
    <div class="imform">
        <div class="card my-3 bg-transparent border-0 ">
            <div class="row g-0">
                <div class="col-md-3">
                
                </div>
                <div class="col-md-3">
                    <img :src="movieImform.Poster" class="img-fluid w-md-50" alt="IMG Poster">
                </div>
                <div class="col-md-6 col-sm-12  col-12">
                    <div class="card-body mt-md-5">
                        <h5 class="card-title mb-0 text-white text-bolder">{{movieImform.Title}}</h5>
                        <p class="card-text mb-0 text-white"><small>{{movieImform.Language}}</small></p>
                        <p class="card-text mb-0 text-white"><small>{{movieImform.Plot}}</small></p>
                        
                        <p class="card-text mb-0 text-white"><small>{{movieImform.Awards}}</small></p>
                        <p class="card-text mb-0 text-white"><small>Rerleased:{{movieImform.Released}}</small></p>
                    </div>
                </div>
            </div>
        </div>
    </div>
</template>

<script>
import venv from '@/venv.js';
const axios = require('axios').default;

export default {

    data(){
        return{
            movieImform: "",

        }
    },
    mounted(){
            let id = this.$route.params.id
    
            axios.get(`https://www.omdbapi.com/?apikey=${venv.apikey}&i=${id}`)
                .then(response => {
                    this.movieImform = response.data
                    console.log(this.movieImform)
                })
        }
}
</script>