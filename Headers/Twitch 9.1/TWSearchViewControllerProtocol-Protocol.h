//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TWPagedContentViewController-Protocol.h"

@class NSString;
@protocol TWSearchViewControllerInteractionProtocol;

@protocol TWSearchViewControllerProtocol <TWPagedContentViewController>
@property(nonatomic) __weak id <TWSearchViewControllerInteractionProtocol> interactionDelegate;
@property(nonatomic) unsigned long long queryKind;
@property(nonatomic, copy) NSString *query;
@end

