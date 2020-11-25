declare module 'cordova-plugin-flic' {

    interface Config {
        appId: string;
        appSecret: string;
        appName: string;
        reloadOnFlicEvent: boolean
    }

    interface ForgetConfig {
        buttonId: string;
    }

}
