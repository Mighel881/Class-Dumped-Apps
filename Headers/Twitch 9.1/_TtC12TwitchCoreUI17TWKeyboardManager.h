//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _TtC12TwitchCoreUI17TWKeyboardManager : NSObject
{
    // Error parsing type: , name: isKeyboardVisible
    // Error parsing type: , name: keyboardNotificationBlockByViewController
    // Error parsing type: , name: _keyboardFrameInScreenCoordinates
}

+ (_Bool)automaticallyNotifiesObserversOfIsKeyboardVisible;
+ (_Bool)automaticallyNotifiesObserversOfKeyboardFrameInScreenCoordinates;
+ (id)sharedKeyboardManager;
- (void).cxx_destruct;
- (void)keyboardFrameChanged:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (id)init;
- (void)stopNotifyingViewControllerAboutKeyboardChanges:(id)arg1;
- (void)notifyViewController:(id)arg1 aboutKeyboardChangesWithBlock:(CDUnknownBlockType)arg2;
- (double)keyboardMinYInViewCoordinates:(id)arg1;
- (struct CGRect)keyboardFrameInViewCoordinates:(id)arg1;
- (struct CGRect)keyboardFrameInWindowCoordinates:(id)arg1;
@property(nonatomic, readonly) struct CGRect keyboardFrameInScreenCoordinates;
@property(nonatomic) _Bool isKeyboardVisible; // @synthesize isKeyboardVisible;

@end

