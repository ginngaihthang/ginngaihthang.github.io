<template>
    <div class="imform">
        <div class="card mb-3 bg-transparent">
            <div class="row g-0">
                <div class="col-md-4">
                <img :src="movieImform.Poster" class="img-fluid" alt="IMG Poster">
                </div>
                <div class="col-md-8 col-sm-12  col-12">
                    <div class="card-body mt-md-5 ">
                        <h5 class="card-title mb-0">{{movieImform.Title}}</h5>
                        <p class="card-text mb-0"><small>{{movieImform.Language}}</small></p>
                        <p class="card-text mb-0"><small>{{movieImform.Plot}}</small></p>
                        <p class="card-text mb-0"><small class="text-muted">Writer : {{movieImform.Writer}}</small></p>
                        <p class="card-text mb-0"><small class="text-muted">Actor : {{movieImform.Actors}}</small></p>
                        <p class="card-text mb-0"><small class="text-muted">Country:{{movieImform.Awards}}</small></p>
                        <p class="card-text mb-0"><small class="text-muted">Rerleased:{{movieImform.Released}}</small></p>
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