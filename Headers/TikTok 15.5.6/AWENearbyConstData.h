//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface AWENearbyConstData : NSObject
{
    _Bool _isYouthControlEnabled;
    _Bool _isInFeedContainer;
    _Bool _isClickBottonIcon;
    NSString *_referString;
    NSString *_labelString;
    NSDictionary *_logExtraDict;
    NSString *_entriesRefreshType;
    NSString *_insertFreshAwemeIds;
    long long _insertFreshType;
}

@property(nonatomic) long long insertFreshType; // @synthesize insertFreshType=_insertFreshType;
@property(copy, nonatomic) NSString *insertFreshAwemeIds; // @synthesize insertFreshAwemeIds=_insertFreshAwemeIds;
@property(nonatomic) _Bool isClickBottonIcon; // @synthesize isClickBottonIcon=_isClickBottonIcon;
@property(nonatomic) _Bool isInFeedContainer; // @synthesize isInFeedContainer=_isInFeedContainer;
@property(copy, nonatomic) NSString *entriesRefreshType; // @synthesize entriesRefreshType=_entriesRefreshType;
@property(nonatomic) _Bool isYouthControlEnabled; // @synthesize isYouthControlEnabled=_isYouthControlEnabled;
@property(copy, nonatomic) NSDictionary *logExtraDict; // @synthesize logExtraDict=_logExtraDict;
@property(copy, nonatomic) NSString *labelString; // @synthesize labelString=_labelString;
@property(copy, nonatomic) NSString *referString; // @synthesize referString=_referString;
- (void).cxx_destruct;

@end
