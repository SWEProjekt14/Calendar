#import <Foundation/Foundation.h>
#import <Cordova/CDVPlugin.h>
#import <EventKitUI/EventKitUI.h>
#import <EventKit/EventKit.h>

@interface Calendar : CDVPlugin

@property (nonatomic, retain) EKEventStore* eventStore;

- (void) addCalendarEntry:(CDVInvokedUrlCommand*) command;
- (void) deleteCalendarEntry:(CDVInvokedUrlCommand*) command;
-(void) editCalendarEntry:(CDVInvokedUrlCommand *) command;
-(NSString*) searchCalendarEntryId:(CDVInvokedUrlCommand *) command;
@end
