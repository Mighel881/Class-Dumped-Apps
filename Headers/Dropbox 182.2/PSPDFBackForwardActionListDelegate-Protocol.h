//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKitUI/NSObject-Protocol.h>

@class NSArray, PSPDFBackForwardActionList;

@protocol PSPDFBackForwardActionListDelegate <NSObject>
- (void)backForwardList:(PSPDFBackForwardActionList *)arg1 requestedForwardActionExecution:(NSArray *)arg2;
- (void)backForwardList:(PSPDFBackForwardActionList *)arg1 requestedBackActionExecution:(NSArray *)arg2;

@optional
- (void)backForwardListDidUpdate:(PSPDFBackForwardActionList *)arg1;
@end

