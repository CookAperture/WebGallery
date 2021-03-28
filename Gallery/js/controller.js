class controller{
    constructor() {}
    
    static testifingItem = document.getElementById('onChangeToLoginViewButton');
    
    static main() {
        viewHandler.onChangeToLoginViewButton.onclick = () =>viewHandler.onChangeToLoginView();
    }
}