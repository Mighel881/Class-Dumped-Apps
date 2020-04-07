//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class NSDate, NSString, NSURL;

@protocol SUPSupportWebContentsControllerDelegate <NSObject>
- (void)nonHelpcenterLinkTapped:(NSURL *)arg1;
- (void)helpcenterLinkTapped:(NSString *)arg1;
- (void)helpContentRetrievedWithStartTime:(NSDate *)arg1 contentDisplayed:(_Bool)arg2 isDeepLink:(_Bool)arg3;

@optional
- (void)emailContactFormRetrievedWithStartTime:(NSDate *)arg1 contentDisplayed:(_Bool)arg2;
- (void)submitEmailContactFormWithParametersFromURL:(NSURL *)arg1;
@end
