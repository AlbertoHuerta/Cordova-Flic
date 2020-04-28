//
//  Flic
//
//  Created by Maxim Dukhanov <m.dukhanov@gmail.com>
//

#import <UIKit/UIKit.h>
#import <fliclib/fliclib.h>
#import <Cordova/CDVPlugin.h>

@interface Flic: CDVPlugin {
    // Handlers for URL events
    NSMutableArray *_handlers;
    CDVPluginResult *_lastEvent;
}

@property (nonatomic, strong) SCLFlicManager *flicManager;
@property (nonatomic, strong) NSString *onButtonClickCallbackId;
@property (nonatomic, strong) NSString *deepCallbackId;

- (void) init:(CDVInvokedUrlCommand*)command;
- (void) getKnownButtons:(CDVInvokedUrlCommand*)command;
- (void) grabButton:(CDVInvokedUrlCommand*)command;
- (void) waitForButtonEvent:(CDVInvokedUrlCommand*)command;
- (void) triggerButtonEvent:(CDVInvokedUrlCommand*)command;
- (void) onButtonClick:(CDVInvokedUrlCommand*)command;
- (void) sendToJs;
- (void) onDeepLink:(CDVInvokedUrlCommand *)command;
@end
