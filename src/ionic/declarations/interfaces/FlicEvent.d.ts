/// <reference path="./FlicButton.d.ts" />

declare module 'cordova-plugin-flic' {

    interface FlicEvent {
        button: FlicButton;
        event: string;
        timeDiff: number;
        wasQueued: boolean;
    }

}
