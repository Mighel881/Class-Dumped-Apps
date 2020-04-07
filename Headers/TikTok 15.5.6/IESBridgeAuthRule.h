//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSString;

@interface IESBridgeAuthRule : NSObject <NSCoding>
{
    NSString *_pattern;
    unsigned long long _group;
    NSArray *_includedMethods;
    NSArray *_excludedMethods;
}

@property(copy, nonatomic) NSArray *excludedMethods; // @synthesize excludedMethods=_excludedMethods;
@property(copy, nonatomic) NSArray *includedMethods; // @synthesize includedMethods=_includedMethods;
@property(nonatomic) unsigned long long group; // @synthesize group=_group;
@property(copy, nonatomic) NSString *pattern; // @synthesize pattern=_pattern;
- (void).cxx_destruct;
- (id)initWithPattern:(id)arg1 group:(unsigned long long)arg2;
- (id)initWithDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
