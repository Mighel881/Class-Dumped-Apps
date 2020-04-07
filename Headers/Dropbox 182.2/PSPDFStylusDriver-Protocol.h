//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKitUI/NSObject-Protocol.h>

@class NSDictionary, UITouch, UIView, UIViewController;
@protocol PSPDFStylusDriverDelegate, PSPDFStylusTouch;

@protocol PSPDFStylusDriver <NSObject>
+ (NSDictionary *)driverInfo;
@property(readonly, nonatomic) __weak id <PSPDFStylusDriverDelegate> delegate;
@property(readonly, nonatomic) unsigned long long connectionStatus;
@property(readonly, nonatomic) NSDictionary *connectedStylusInfo;
- (void)disableDriver;
- (_Bool)enableDriverWithOptions:(NSDictionary *)arg1 error:(id *)arg2;
- (id)initWithDelegate:(id <PSPDFStylusDriverDelegate>)arg1;

@optional
@property(readonly, nonatomic) NSDictionary *settingsControllerInfo;
@property(readonly, nonatomic) UIViewController *settingsController;
- (void)unregisterView:(UIView *)arg1;
- (void)registerView:(UIView *)arg1;
- (id <PSPDFStylusTouch>)touchInfoForTouch:(UITouch *)arg1;
@end
