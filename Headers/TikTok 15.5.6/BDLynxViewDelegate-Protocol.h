//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWELynxContainer, NSError;

@protocol BDLynxViewDelegate <NSObject>

@optional
- (void)lynxView:(AWELynxContainer *)arg1 didFallbackWithError:(NSError *)arg2;
- (void)lynxView:(AWELynxContainer *)arg1 didFailLoadWithError:(NSError *)arg2;
- (void)lynxViewDidMount:(AWELynxContainer *)arg1;
- (void)lynxViewDidFinishLoad:(AWELynxContainer *)arg1;
@end
