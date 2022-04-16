const app = Vue.createApp({
    // template: '<h2>I am the template</h2>',
    data(){
        return{
            name: "Gin Ngaih Thang",
            age: 19,
            icon: "<strong>pand</strong>",
            status: true,
            title: "myparagraph",
            photo: "",
            mark: 30,
            favfruits: ['apple','papaya','lime'],
            count: 0,
            fname: "",
            ffname: "",
            ffage: "",
            ffgender: "",
            friends: [],
        }
    },
    methods:{
        greet(){
            alert(this.name)
        },

        savefriends(){
            let friend = {name: this.ffname, age: this.ffage, gender: this.ffgender}
            console.log(friend)

            this.friends.push(friend)
        }
    }
})
//console.log(app)
app.mount("#app")