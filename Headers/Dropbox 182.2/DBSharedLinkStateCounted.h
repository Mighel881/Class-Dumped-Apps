//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DBSharedLinkState;

@interface DBSharedLinkStateCounted : NSObject
{
    unsigned long long _useCount;
    DBSharedLinkState *_linkState;
}

@property(retain, nonatomic) DBSharedLinkState *linkState; // @synthesize linkState=_linkState;
@property(nonatomic) unsigned long long useCount; // @synthesize useCount=_useCount;
- (void).cxx_destruct;

@end

