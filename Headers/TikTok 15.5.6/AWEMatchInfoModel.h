//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSNumber, NSString;

@interface AWEMatchInfoModel : MTLModel <MTLJSONSerializing>
{
    NSNumber *_begin;
    NSNumber *_end;
    NSString *_link;
    NSString *_query;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(copy, nonatomic) NSString *link; // @synthesize link=_link;
@property(retain, nonatomic) NSNumber *end; // @synthesize end=_end;
@property(retain, nonatomic) NSNumber *begin; // @synthesize begin=_begin;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
