class eventHandler {
    constructor() {
        
    }

    static setHandler() {
        let btnArray = Array.prototype.slice.call(document.querySelectorAll('.menuButton'));

        btnArray.forEach((arrayItem) => {
            let btnId = arrayItem.id;

			switch(btnId) {
				case 'onChangeToLoginView': 
				        eventHandler.onChangeToLoginView();
					break;
				case 'addPnl menuBtn': 
				        viewHandler.addPnl(arrayItem);
					break;
			}
		});
    }

    static onChangeToLoginView() {
        
    }
}